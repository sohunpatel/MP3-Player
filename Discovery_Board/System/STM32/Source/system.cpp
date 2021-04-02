/**-----------------------------------------------------------------------------
 * @file           :  stm32f746ng.cpp
 * @author         :  Sohun Patel
 * @createdOn      :  31 March 2021
 * @description    :  File for system functions for startup
 *---------------------------------------------------------------------------**/

/*----- Includes -------------------------------------------------------------*/
#include "system.hpp"

const uint8_t SystemCoreClock = 16000000;
const uint8_t AHBPrescalerTable[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9 };
const uint8_t APBPrescalerTable[8] = { 0, 0, 0, 0, 1, 2, 3, 4 };

/**-----------------------------------------------------------------------------
 * @description    :  Initialize embedded flash, PLL, and update system frequency
 * @param          :  None
 * @return         :  void
 *---------------------------------------------------------------------------**/
void system_init() {
    /* FPU Settings */
#if (__FPU_PRESENT == 1) || (__FPU_USED == 1)
    SCB->CPACR |= ((3UL << 10*2)|(3UL << 11*2));  /* set CP10 and CP11 Full Access */
#endif
    /* Reset the RCC clock configuration to the default reset state */
    RCC->CR |= (uint32_t)0x00000001;
}