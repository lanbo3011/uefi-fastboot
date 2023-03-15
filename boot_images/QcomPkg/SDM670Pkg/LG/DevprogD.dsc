#==============================================================================
# @file DevprogD.dsc
# SDM670 Device Programmer
#
# Copyright (c) 2017 Qualcomm Technologies, Inc. All rights reserved.
#==============================================================================

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = SDM670Pkg
  PLATFORM_GUID                  = AA99686E-4D75-3829-5220-F4874BA2F216
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT

  OUTPUT_DIRECTORY               = Build/SDM670LG_Loader

!include QcomPkg/SDM670Pkg/LG/Common.dsc.inc

################################################################################
#
# Components Section - list of all EDK II Modules needed by this Platform
#
################################################################################
[Components.common]
  QcomPkg/XBLLoader/DevPrgD.inf {
     <LibraryClasses>
      XBLLoaderLib|QcomPkg/SDM670Pkg/Library/XBLLoaderLib/XBLLoaderDevProgLib.inf
      DebugLib|MdePkg/Library/BaseDebugLibNull/BaseDebugLibNull.inf
      SmemLib|QcomPkg/Library/NullLibs/SmemLibNull/SmemLibNull.inf
      DevPrgLLib|QcomPkg/Library/NullLibs/DevPrgLLibNull/DevPrgLLibNull.inf
      DevPrgDLib|QcomPkg/SDM670Pkg/Library/DevPrgDLib/DevPrgDLib.inf
      BootDdrTrainingLib|QcomPkg/XBLLoader/BootDdrTrainingLibNull.inf
      BootDebugLib|QcomPkg/XBLLoader/BootDebugLibNull.inf
      VSenseTargetLib|QcomPkg/Library/NullLibs/VSenseTargetLibNull/VSenseTargetLibNull.inf
      HotPlugLib|QcomPkg/Library/NullLibs/HotPlugLibNull/HotPlugLibNull.inf
      ColdplugLib|QcomPkg/Library/NullLibs/ColdplugLibNull/ColdplugLibNull.inf
      LoaderAptLib|QcomPkg/Library/NullLibs/LoaderAptLibNull/LoaderAptLibNull.inf
      QusbTargetLib|QcomPkg/SDM670Pkg/Library/QusbTargetLib/QusbTargetLib.inf
      QusbLdrLib|QcomPkg/Library/NullLibs/QusbLdrLibNull/QusbLdrLibNull.inf
      #CPRTargetLib|QcomPkg/Library/NullLibs/PowerLibNull/CprLibNull.inf
      XcfgLoaderElf|QcomPkg/Library/XBLConfig/XcfgRamElfLib.inf
      ProcLib|QcomPkg/Library/ProcLib/ProcLib.inf
      CeLib|QcomPkg/SDM670Pkg/Library/HashLibDp/HashLibHw.inf

      <PcdsFixedAtBuild>
        gQcomTokenSpaceGuid.PcdBuildType|0x2
   }

