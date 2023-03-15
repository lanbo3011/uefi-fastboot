/*============================================================================
  FILE:         FgAdcInternalSettings.c

  OVERVIEW:     Internal settings for FG ADC.

  DEPENDENCIES: None

                Copyright (c) 2017 Qualcomm Technologies, Inc.
                All Rights Reserved.
                Qualcomm Technologies Proprietary and Confidential.
============================================================================*/
/*============================================================================
  EDIT HISTORY FOR MODULE

  This section contains comments describing changes made to the module.
  Notice that changes are listed in reverse chronological order.  Please
  use ISO format for dates.

  $Header: //components/rel/boot.xf/2.1/QcomPkg/SDM670Pkg/Settings/ADC/internal/loader/FgAdcInternalSettings.c#1 $

  when        who  what, where, why
  ----------  ---  -----------------------------------------------------------
  2017-07-05  KS   Added support for 670.
  2016-03-04  jjo  Initial revision.

============================================================================*/
/*----------------------------------------------------------------------------
 * Include Files
 * -------------------------------------------------------------------------*/
#include "FgAdcBsp.h"
#include "AdcInputs.h"

/*----------------------------------------------------------------------------
 * Preprocessor Definitions and Constants
 * -------------------------------------------------------------------------*/
#define ARRAY_LENGTH(a) (sizeof(a) / sizeof((a)[0]))

/*----------------------------------------------------------------------------
 * Type Declarations
 * -------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 * Static Function Declarations
 * -------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 * Global Data Definitions
 * -------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 * Static Variable Definitions
 * -------------------------------------------------------------------------*/
/*
 * NOTE: CHG_TEMP on PMI8998 uses fab-dependent scaling in the driver.
 * This is the default scaling if no fab-dependent scaling is found.
 * It corresponds to GF.
 */
/*
 * Charger temperature sensor scaling table
 *
 * The first column in the table is sensor voltage in millivolts and the
 * second column is the temperature in milli degrees C.
 *
 * Scaling equation:
 *
 *    milliDegC = (1296794 - uV) / 3.958 + 25000
 *
 */
static const AdcMapPtInt32toInt32Type gFgAdcMapChgTempSensor[] =
{
   { 1594, -50000 },
   {  762, 160000 }
};

/*
 * FgAdc channel configuration.
 */
static const FgAdcChannelConfigType gFgAdcChannels[] =
{
   /* BATT_ID_OHMS */
   {
      .pszName       = ADC_INPUT_BATT_ID_OHMS,
      .eChannel      = FGADC_CHAN_BATT_ID,
      .eEnable       = FGADC_ENABLE,
      .ucTriggers    = FGADC_TRIGGER_DEFAULT,
      .scalingFactor = {1, 1},  /* {num, den} */
      .eScaling      = FGADC_SCALE_BATT_ID_TO_OHMS,
   },

   /* BATT_ID_OHMS_FRESH */
   {
      .pszName       = ADC_INPUT_BATT_ID_OHMS_FRESH,
      .eChannel      = FGADC_CHAN_BATT_ID_FRESH,
      .eEnable       = FGADC_ENABLE,
      .ucTriggers    = FGADC_TRIGGER_DEFAULT,
      .scalingFactor = {1, 1},  /* {num, den} */
      .eScaling      = FGADC_SCALE_BATT_ID_TO_OHMS,
   },

   /* CHG_TEMP - USED FOR SCALING ONLY in XBL LOADER - CANNOT BE READ */
   {
      .pszName       = ADC_INPUT_CHG_TEMP,
      .eChannel      = FGADC_CHAN_CHARGER_TEMP,
      .eEnable       = FGADC_ENABLE,
      .ucTriggers    = FGADC_TRIGGER_DEFAULT,
      .scalingFactor = {3, 2},  /* {num, den} */
      .eScaling      = FGADC_SCALE_INTERPOLATE_FROM_MILLIVOLTS,
      .pInterpolationTable       = gFgAdcMapChgTempSensor,
      .uInterpolationTableLength = ARRAY_LENGTH(gFgAdcMapChgTempSensor),
   },
};

static const FgAdcThreshRangeType gFgAdcSkinTempThreshRange =
{
   .nMin = -30,
   .nMax = 97,
};

static const FgAdcThreshRangeType gFgAdcChgTempThreshRange =
{
   .nMin = -50,
   .nMax = 160,
};

const FgAdcBspType FgAdcBsp[] =
{
   {
      .paChannels              = gFgAdcChannels,
      .uNumChannels            = ARRAY_LENGTH(gFgAdcChannels),
      .paeGpios                = NULL,
      .uNumGpios               = 0,
      .uFullScale_code         = 0x3ff,
      .uFullScale_uV           = 2500000,
      .uMicroVoltsPerMilliAmps = 500,
      .uCodePerKelvin          = 4,
      .uBattIdClipThresh       = 820,
      .pSkinTempThreshRange    = &gFgAdcSkinTempThreshRange,
      .pChgTempThreshRange     = &gFgAdcChgTempThreshRange,
      .uMaxWaitTimeUs          = 5000000,
      .uSlaveId                = 0,
      .uPeripheralId           = 0x45,
      .eAccessPriority         = SPMI_BUS_ACCESS_PRIORITY_LOW,
      .ucPmicDevice            = 0,
      .ucPerphType             = 0xD,
   }
};

