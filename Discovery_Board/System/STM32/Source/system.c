/**-----------------------------------------------------------------------------
 * @file           :  stm32f746ng.cpp
 * @author         :  Sohun Patel
 * @createdOn      :  31 March 2021
 * @description    :  File for system functions for startup
 *---------------------------------------------------------------------------**/

/*----- Includes -------------------------------------------------------------*/
#include "core_cm7.h"
#include "memory_map.h"
#include "peripherals.h"
#include "system.h"

/*----- Miscellaneous configurations -----------------------------------------*/
#define VECT_TAB_OFFSET 0x00
/*----------------------------------------------------------------------------*/

uint32_t SystemCoreClock = 16000000;
const uint8_t AHBPrescalerTable[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9 };
const uint8_t APBPrescalerTable[8] = { 0, 0, 0, 0, 1, 2, 3, 4 };

/**-----------------------------------------------------------------------------
 * @description    :  Initialize embedded flash, PLL, and update system frequency
 * @param          :  None
 * @return         :  void
 *---------------------------------------------------------------------------**/
void SystemInit() {
    /* FPU Settings */
#if (__FPU_PRESENT == 1) || (__FPU_USED == 1)
    SCB->CPACR |= ((3UL << 10*2)|(3UL << 11*2));  /* set CP10 and CP11 Full Access */
#endif
    /* Reset the RCC clock configuration to the default reset state */
    /* Set HSION bit */
    RCC->CR |= (uint32_t)0x00000001;

    /* Reset the CFGR register */
    RCC->CFGR = 0x00000000U;

    /* Reset HSEON, CSSON, and PLLON bits  */
    RCC->CR &= (uint32_t) 0xFEF6FFFF;

    /* Reset PLLCFGR register */
    RCC->PLLCFGR = 0x24003010;

    /* Reset HSEBYP bit */
    RCC->CR &= (uint32_t)0xFFFBFFFF;

    /* Disable all interrupts */
    RCC->CIR = 0x00000000;

    /* Configure the vector tabel location add offset address */
    SCB->VTOR = AXIM_FLASH_BASE | VECT_TAB_OFFSET;
}

/**-----------------------------------------------------------------------------
 * @description     : Update SystemCoreClock variable according to Clock 
 *                    Register Values. The SystemCoreClock variable contains the
 *                    core clock (HCLK), it can be used by the user application 
 *                    to setup the SysTick timer or configure other parameters.
 * @param           : None
 * @return          : None
 * ---------------------------------------------------------------------------*/
void SystemCoreClockUpdate() {
    uint32_t tmp = 0, pllvco = 0, pllp = 2, pllsource = 0, pllm = 2;

    /* Get SYSCLK source */
    tmp = RCC->CFGR & RCC_CFGR_SWS;

    switch (tmp)
    {
    case RCC_CFGR_SWS_HSI: /* HSI used as system clock source */
        SystemCoreClock = HSI_CLK_VALUE;
        break;
    case RCC_CFGR_SWS_HSE: /* HSE used as system clock source */
        SystemCoreClock = HSE_CLK_VALUE;
        break;
    case RCC_CFGR_SWS_PLL: /* PLL used as system clock source */
        pllsource = (RCC->PLLCFGR & RCC_PLLCFGR_PLLSRC) >> 22;
        pllm = RCC->PLLCFGR & RCC_PLLCFGR_PLLM;
    default:
        break;
    }
}