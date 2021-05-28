/**-----------------------------------------------------------------------------
 * file     :  peripherals.h
 * author   :  Sohun Patel
 * date     :  2 April 2021
 * brief    :  Definition of peripheral structures
 * ---------------------------------------------------------------------------*/

/*----- Includes -------------------------------------------------------------*/
#include "registers.h"
#include "memory_map.h"

/*----- Peripheral Declarations ----------------------------------------------*/
TIMx_Registers *TIM2 = (TIMx_Registers*) TIM2_BASE;
TIMx_Registers *TIM3 = (TIMx_Registers*) TIM3_BASE;
TIMx_Registers *TIM4 = (TIMx_Registers*) TIM4_BASE;
TIMx_Registers *TIM5 = (TIMx_Registers*) TIM5_BASE;
TIMx_Registers *TIM6 = (TIMx_Registers*) TIM6_BASE;
TIMx_Registers *TIM7 = (TIMx_Registers*) TIM7_BASE;
TIMx_Registers *TIM12 = (TIMx_Registers*) TIM12_BASE;
TIMx_Registers *TIM13 = (TIMx_Registers*) TIM13_BASE;
TIMx_Registers *TIM14 = (TIMx_Registers*) TIM14_BASE;
RTC_Registers *RTC = (RTC_Registers*) RTC_BASE;
Power_Registers *Power = (Power_Registers*) POWER_BASE;
TIMx_Registers *TIM1 = (TIMx_Registers*) TIM1_BASE;
TIMx_Registers *TIM8 = (TIMx_Registers*) TIM8_BASE;
SDMMC_Registers *SDMMC = (SDMMC_Registers*) SDMMC_BASE;
SYSCFG_Registers *SYSCFG = (SYSCFG_Registers*) SYSCFG_BASE;
TIMx_Registers *TIM9 = (TIMx_Registers*) TIM9_BASE;
TIMx_Registers *TIM10 = (TIMx_Registers*) TIM10_BASE;
TIMx_Registers *TIM11 = (TIMx_Registers*) TIM11_BASE;
LTDC_Registers *LTDC = (LTDC_Registers*) LTDC_BASE;
RCC_Registers *RCC = (RCC_Registers*) RCC_BASE;