#------------------------------------------------------------------------------
#
# Copyright (c) 2016, Qualcomm Technologies, Inc. All rights reserved.
# Portions Copyright (c) 2008 - 2009, Apple Inc. All rights reserved.<BR>
# Portions Copyright (c) 2011 - 2016, ARM Limited. All rights reserved.
# Portions Copyright (c) 2016, Linaro Limited. All rights reserved.
#
# This program and the accompanying materials
# are licensed and made available under the terms and conditions of the BSD License
# which accompanies this distribution.  The full text of the license may be found at
# http://opensource.org/licenses/bsd-license.php
#
# THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
# WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
#
#------------------------------------------------------------------------------

#include <AsmMacroIoLib.h>

ASM_FUNC(ArmReadMidr)
  mrc     p15,0,R0,c0,c0,0
  bx      LR

ASM_FUNC(ArmCacheInfo)
  mrc     p15,0,R0,c0,c0,1
  bx      LR

ASM_FUNC(ArmGetInterruptState)
  mrs     R0,CPSR
  tst     R0,#0x80      @Check if IRQ is enabled.
  moveq   R0,#1
  movne   R0,#0
  bx      LR

ASM_FUNC(ArmGetFiqState)
  mrs     R0,CPSR
  tst     R0,#0x40      @Check if FIQ is enabled.
  moveq   R0,#1
  movne   R0,#0
  bx      LR

ASM_FUNC(ArmSetDomainAccessControl)
  mcr     p15,0,r0,c3,c0,0
  bx      lr

ASM_FUNC(CPSRMaskInsert)    @ on entry, r0 is the mask and r1 is the field to insert
  stmfd   sp!, {r4-r12, lr} @ save all the banked registers
  mov     r3, sp            @ copy the stack pointer into a non-banked register
  mrs     r2, cpsr          @ read the cpsr
  bic     r2, r2, r0        @ clear mask in the cpsr
  and     r1, r1, r0        @ clear bits outside the mask in the input
  orr     r2, r2, r1        @ set field
  msr     cpsr_cxsf, r2     @ write back cpsr (may have caused a mode switch)
  isb
  mov     sp, r3            @ restore stack pointer
  ldmfd   sp!, {r4-r12, lr} @ restore registers
  bx      lr                @ return (hopefully thumb-safe!)

ASM_FUNC(CPSRRead)
  mrs     r0, cpsr
  bx      lr

ASM_FUNC(ArmReadCpacr)
  mrc     p15, 0, r0, c1, c0, 2
  bx      lr

ASM_FUNC(ArmWriteCpacr)
  mcr     p15, 0, r0, c1, c0, 2
  isb
  bx      lr

ASM_FUNC(ArmWriteAuxCr)
  mcr     p15, 0, r0, c1, c0, 1
  bx      lr

ASM_FUNC(ArmReadAuxCr)
  mrc     p15, 0, r0, c1, c0, 1
  bx      lr

ASM_FUNC(ArmSetTTBR0)
  mcr     p15,0,r0,c2,c0,0
  isb
  bx      lr

ASM_FUNC(ArmSetTTBCR)
  mcr     p15, 0, r0, c2, c0, 2
  isb
  bx      lr

ASM_FUNC(ArmGetTTBR0BaseAddress)
  mrc     p15,0,r0,c2,c0,0
  MOV32   (r1, 0xFFFFC000)
  and     r0, r0, r1
  isb
  bx      lr

//
//VOID
//ArmUpdateTranslationTableEntry (
//  IN VOID  *TranslationTableEntry  // R0
//  IN VOID  *MVA                    // R1
//  );
ASM_FUNC(ArmUpdateTranslationTableEntry)
  mcr     p15,0,R0,c7,c14,1     @ DCCIMVAC Clean data cache by MVA
  dsb
  mcr     p15,0,R1,c8,c7,1      @ TLBIMVA TLB Invalidate MVA
  mcr     p15,0,R9,c7,c5,6      @ BPIALL Invalidate Branch predictor array. R9 == NoOp
  dsb
  isb
  bx      lr

ASM_FUNC(ArmInvalidateTlb)
  mov     r0,#0
  mcr     p15,0,r0,c8,c7,0
  mcr     p15,0,R9,c7,c5,6      @ BPIALL Invalidate Branch predictor array. R9 == NoOp
  dsb
  isb
  bx      lr

ASM_FUNC(ArmReadScr)
  mrc     p15, 0, r0, c1, c1, 0
  bx      lr

ASM_FUNC(ArmWriteScr)
  mcr     p15, 0, r0, c1, c1, 0
  isb
  bx      lr

ASM_FUNC(ArmReadHVBar)
  mrc     p15, 4, r0, c12, c0, 0
  bx      lr

ASM_FUNC(ArmWriteHVBar)
  mcr     p15, 4, r0, c12, c0, 0
  bx      lr

ASM_FUNC(ArmReadMVBar)
  mrc     p15, 0, r0, c12, c0, 1
  bx      lr

ASM_FUNC(ArmWriteMVBar)
  mcr     p15, 0, r0, c12, c0, 1
  bx      lr

ASM_FUNC(ArmCallWFE)
  wfe
  bx      lr

ASM_FUNC(ArmCallSEV)
  sev
  bx      lr

ASM_FUNC(ArmReadSctlr)
  mrc     p15, 0, r0, c1, c0, 0      @ Read SCTLR into R0 (Read control register configuration data)
  bx      lr

ASM_FUNC(ArmReadCpuActlr)
  mrc     p15, 0, r0, c1, c0, 1
  bx      lr

ASM_FUNC(ArmWriteCpuActlr)
  mcr     p15, 0, r0, c1, c0, 1
  dsb
  isb
  bx      lr

ASM_FUNCTION_REMOVE_IF_UNREFERENCED
