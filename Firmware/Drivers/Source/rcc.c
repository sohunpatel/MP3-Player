/**
 * @file    :  rcc.c
 * @author  :  Sohun Patel
 * @date    :  03 April 2021
 * @brief   :  Reset and Clock Control driver implementation
 **/

/*----- Includes -------------------------------------------------------------*/
#include "rcc.h"

/*----- Function Implementations ---------------------------------------------*/

/**
 * @brief       : Enable peripheral clocks
 * @param[in]   : **reg is a pointer to the appropriate peripheral register
 * @param[in]   : en is a logical OR of enable for peripherals to be set
 * @retval      : none
 **/
void rcc_periph_enable_clock(__IO uint32_t *reg, uint32_t en) {
    *reg |= en;
}

/**
 * @brief       : Disable peripheral clocks
 * @param[in]   : *reg - pointer to the appropriate peripheral register
 * @param[in]   : en - logical OR of disable for peripherals to be disabeld
 **/
void rcc_periph_disable_clock(__IO uint32_t *reg, uint32_t en) {
    *reg |= ~en;
}

/**
 * @brief       : Reset peripherals
 * @param[in]   : *reg - pointer to the appropriate peripheral register
 * @param[in]   : reset - logical OR of all resets
 **/
void rcc_periph_reset(__IO uint32_t *reg, uint32_t reset) {
    *reg |= reset;
}

/**
 * @brief       : Remove peripherals resets
 * @param[in]   : *reg - pointer to the appropriate peripheral register
 * @param[in]   : clear_reset - logical OR of all clears to be removed
 **/
void rcc_periph_clear_reset(__IO uint32_t *reg, uint32_t clear_reset) {
    *reg &= ~clear_reset;
}

/**
 * @brief       : Enable peripheral clock in running mode
 * @param[in]   : clken - rcc_periph_clken enumeration
 **/
