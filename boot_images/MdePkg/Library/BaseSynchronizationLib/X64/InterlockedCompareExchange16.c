/** @file
  InterlockedCompareExchange16 function

  Copyright (c) 2006 - 2010, Intel Corporation. All rights reserved.<BR>
  Copyright (c) 2015, Linaro Ltd. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php.

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

/**
  Microsoft Visual Studio 7.1 Function Prototypes for I/O Intrinsics.
**/

__int16 _InterlockedCompareExchange16(
   __int16 volatile * Destination,
   __int16 Exchange,
   __int16 Comperand
);

#pragma intrinsic(_InterlockedCompareExchange16)

/**
  Performs an atomic compare exchange operation on a 16-bit unsigned integer.

  Performs an atomic compare exchange operation on the 16-bit unsigned integer specified
  by Value.  If Value is equal to CompareValue, then Value is set to ExchangeValue and
  CompareValue is returned.  If Value is not equal to CompareValue, then Value is returned.
  The compare exchange operation must be performed using MP safe mechanisms.

  @param  Value         A pointer to the 16-bit value for the compare exchange
                        operation.
  @param  CompareValue  16-bit value used in compare operation.
  @param  ExchangeValue 16-bit value used in exchange operation.

  @return The original *Value before exchange.

**/
UINT16
EFIAPI
InternalSyncCompareExchange16 (
  IN      UINT16                    *Value,
  IN      UINT16                    CompareValue,
  IN      UINT16                    ExchangeValue
  )
{
  return _InterlockedCompareExchange16 (Value, ExchangeValue, CompareValue);
}

