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

extern uint32_t SystemCoreClock = 16000000; /* System Core Clock Frequency */
extern const uint8_t AHBPrescalerTable[16]; /* AHB Prescaler Table */
extern const uint8_t APBPrescalerTable[8]; /* APB Prescaler Table */

/*---- Configure Cortex-M7 Processor and Core Peripherals --------------------*/
#define __CM7_REV               0x0001U
#define __MPU_PRESENT           1
#define NVIC_PRIORITY_BITS      4
#define __Vendor_SysTickConfig  0
#define __FPU_PRESENT           1
#define __ICACHE_PRESENT        1
#define __DCACHE_PRESENT        1

extern void SystemInit();
extern void SystemCoreClockUpdate();