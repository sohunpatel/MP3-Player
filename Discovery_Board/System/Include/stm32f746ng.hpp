/**========================================================================
 * ?                                ABOUT
 * @author         :  Sohun Patel
 * @createdOn      :  31 March 2021
 * @description    :  Defines and system functions for stm32f746ng microcontroller
 *========================================================================**/

/*================================ Includes ==============================*/
#include <stdint.h>

/* Exported Types */
typedef enum {
    RESET = 0U,
    SET   = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0U,
  ENABLE = !DISABLE
} FunctionalState;

#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum
{
  ERROR = 0U,
  SUCCESS = !ERROR
} ErrorStatus;

/* Exported Macros */
#define SET_BIT(REG, BIT)     ((REG) |= (BIT))
#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))
#define READ_BIT(REG, BIT)    ((REG) & (BIT))
#define CLEAR_REG(REG)        ((REG) = (0x0))
#define WRITE_REG(REG, VAL)   ((REG) = (VAL))
#define READ_REG(REG)         ((REG))
#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
#define POSITION_VAL(VAL)     (__CLZ(__RBIT(VAL)))

#if !defined(HSE_CLK_VALUE)
    #define HSE_CLK_VALUE (uint32_t)25000000 /* Default external clock freq */
#endif /* HSE_CLK_VALUE */

#if !defined(HSI_CLK_VALUE)
    #define HSI_CLK_VALUE (uint32_t)16000000 /* Default external clock freq */
#endif /* HSI_CLK_VALUE */

#define VECTOR_TABLE_OFFSET 0x00  /* Vector Table Offset Value */

uint32_t SystemCoreClock = 16000000;
const uint8_t AHBPrescalerTable[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9 };
const uint8_t APBPrescalerTable[8] = { 0, 0, 0, 0, 1, 2, 3, 4 };

