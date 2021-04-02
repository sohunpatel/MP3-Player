/**-----------------------------------------------------------------------------
 * @file    :  memory_map.h
 * @author  :  Sohun Patel
 * @date    :  01 April 2021
 * @brief   :  Defines for memory of memory mapped peripherals
 *----------------------------------------------------------------------------*/

/*----- Includes -------------------------------------------------------------*/
#include "core_cm7.h"

/*----- Peripheral Register Definitions --------------------------------------*/

/*----- Flash Registers ------------------------------------------------------*/
typedef struct {
    __IO uint32_t ACR;     // Access control register
    __IO uint32_t KEYR;    // Key register
    __IO uint32_t OPTKEYR; // Option key register
    __IO uint32_t SR;      // Status register
    __IO uint32_t CR;      // Control register
    __IO uint32_t OPTCR;   // Option control register
    __IO uint32_t OPTCR1;  // Option control register
} Flash_Registers;

/*----- GPIOx Registers ------------------------------------------------------*/
typedef struct {
    __IO uint32_t MODER;    // Port mode register
    __IO uint32_t OTYPER;   // Port output type register
    __IO uint32_t OSPEEDR;  // Port output speed register
    __IO uint32_t PUPDR;    // Port pull-up/pull-down register
    __IO uint32_t IDR;      // Port input data register
    __IO uint32_t ODR;      // Port output data register
    __IO uint32_t BSRR;     // Port bit set/reset register
    __IO uint32_t LCKR;     // Port configuration lock register
    __IO uint32_t AFR[2];   // Alternate function registers
} GPIOx_Registers;

/*----- LTDC Registers -------------------------------------------------------*/
typedef struct {
         uint32_t RESERVED[2]; // 0x00 -> 0x04 reserved
    __IO uint32_t SSCR;        // Syrnchronization size configuration register
    __IO uint32_t BPCR;        // Back porch configuration register
    __IO uint32_t AWCR;        // Active width configuration register
    __IO uint32_t TWCR;        // Total width configuration register
    __IO uint32_t GCR;         // Global control register
         uint32_t RESERVED[2]; // 0x1C -> 0x20 reserved
    __IO uint32_t SRCR;        // Shadow reload configuration register
         uint32_t RESERVED[1]; // 0x28 reserved
    __IO uint32_t BCCR;        // Background color configuration register
         uint32_t RESERVED[1]; // 0x30 reserved
    __IO uint32_t IER;         // Interrupt enable register
    __IO uint32_t ISR;         // Interrupt status register
    __IO uint32_t ICR;         // Interrupt clear register
    __IO uint32_t LIPCR;       // Line interrupt position configuration register
    __IO uint32_t CPSR;        // Current position status register
} LTDC_Registers;

/*----- RCC Registers --------------------------------------------------------*/
typedef struct {
    __IO uint32_t CR;           // Clock control register
    __IO uint32_t PLLCFGR;      // PLL configuration register
    __IO uint32_t CFGR;         // Clock configuration register
    __IO uint32_t CIR;          // Clock interrupt register
    __IO uint32_t AHB1RSTR;     // AHB1 peripheral reset register
    __IO uint32_t AHB2RSTR;     // AHB2 peripheral reset register
    __IO uint32_t AHB3RSTR;     // AHB3 peripheral reset register
         uint32_t RESERVED0[1]; // 0x1C reserved
    __IO uint32_t APB1RSTR;     // APB1 peripheral reset register
    __IO uint32_t APB2RSTR;     // APB2 peripheral reset register
         uint32_t RESERVED1[2]; // 0x28 -> 0x2C reserved
    __IO uint32_t AHB1ENR;      // AHB1 peripheral clock enable register
    __IO uint32_t AHB2ENR;      // AHB2 peripheral clock enable register
    __IO uint32_t AHB3ENR;      // AHB3 peripheral clock enable register
         uint32_t RESERVED2[1]; // 0x3C reserved
    __IO uint32_t APB1ENR;      // APB1 peripheral clock enable register
    __IO uint32_t APB2ENR;      // APB2 peripheral clock enable register
         uint32_t RESERVED3[2]; // 0x48 -> 0x4C reserved
    __IO uint32_t AHB1LPENR;    // AHB1 peripheral clock enable in low-power mode register
    __IO uint32_t AHB2LPENR;    // AHB2 peripheral clock enable in low-power mode register
    __IO uint32_t AHB3LPENR;    // AHB3 peripheral clock enable in low-power mode register
         uint32_t RESERVED4[1]; // 0x5C reserved
    __IO uint32_t APB1LPENR;    // APB1 peripheral clock enable in low-power mode register
    __IO uint32_t APB2LPENR;    // APB2 peripheral clock enable in low-power mode register
         uint32_t RESERVED5[2]; // 0x68 -> 0x6C reserved
    __IO uint32_t BDCR;         // Backup domain control register
    __IO uint32_t CSR;          // Control and status register
         uint32_t RESERVED6[2]; // 0x7D -> 0x7C reserved
    __IO uint32_t SSCGR;        // Spread spectrum clock generation register
    __IO uint32_t PLLI2SCFGR;   // PLL12S configuration register
    __IO uint32_t PLLSAICFGR;   // PLLSAI configuration register
    __IO uint32_t DCKCFGR1;     // RCC dedicated clock configuration register
    __IO uint32_t DCKCFGR2;     // RCC dedicated clock configuration register
} RCC_Registers;

/*----- SDMMC Registers ------------------------------------------------------*/
typedef struct {
    __IO uint32_t POWER;   // Power control register
    __IO uint32_t CLKCR;   // Clock control register
    __IO uint32_t ARG;     // Argument register
    __IO uint32_t CMD;     // Command register
    __IO uint32_t RESPCMD; // Command response register
    __IO uint32_t RESP1;   // Response 1 register
    __IO uint32_t RESP2;   // Response 2 register
    __IO uint32_t RESP3;   // Response 3 register
    __IO uint32_t RESP4;   // Response 4 register
    __IO uint32_t DTIMER;  // Data timer register
    __IO uint32_t DLEN;    // Data length register
    __IO uint32_t DCTRL;   // Data control register
    __IO uint32_t DCOUNT;  // Data counter register
    __IO uint32_t STA;     // Status register
    __IO uint32_t ICR;     // Interrupt clear register
    __IO uint32_t MASK;    // Mask register
    __IO uint32_t FIFOCNT; // FIFO count register
    __IO uint32_t FIFO;    // Data FIFO register
} SDMMC_Registers;

/*----- SYSCFG Register ------------------------------------------------------*/
typedef struct {
    __IO uint32_t MEMRMP;   // Memory remap register
    __IO uint32_t PMC;      // Peripheral mode configuration register
    __IO uint32_t EXTICR1;  // External interrupt configuration register 1
    __IO uint32_t EXTICR2;  // External interrupt configuration register 2
    __IO uint32_t EXTICR3;  // External interrupt configuration register 3
    __IO uint32_t EXTICR4;  // External interrupt configuration register 4
         uint32_t RESERVED; // 0x18 reserved
    __IO uint32_t CMPCR;    // Compensation cell control register
} SYSCFG_Registers;

/*----- USB OTG Core Registers -----------------------------------------------*/
typedef struct {
    __IO uint32_t GOTGCTL;            // Control and status register
    __IO uint32_t GOTGINT;            // Interrupt register
    __IO uint32_t GAHBCFG;            // AHB configuration register
    __IO uint32_t GUSBCFG;            // Configuration register
    __IO uint32_t GRSTCTL;            // Reset register
    __IO uint32_t GINTSTS;            // Interrupt register
    __IO uint32_t GINTMSK;            // Interrupt mask register
    __IO uint32_t GRXSTSR;            // Receive status debug read register
    __IO uint32_t GRXSTSP;            // Receive status read and pop register
    __IO uint32_t GRXFSIZ;            // Receive fifo size register
    __IO uint32_t DIEPTXF0_HNPTXFSIZ; // EP0 / Non-Periodic Tx FIFO size register
    __IO uint32_t HNPTXSTS;           // Non Periodic Tx FIFO / Queue statuss register
    uint32_t Reserved30[2];           // 0x030 -> 0x34 reserved
    __IO uint32_t GCCFG;              // General core configuration register
    __IO uint32_t CID;                // User ID register
    uint32_t  Reserved5[3];           // 0x040 -> 0x48 reserved
    __IO uint32_t GHWCFG3;            // User HW config3
    uint32_t  Reserved6;              // 0x050 reserved
    __IO uint32_t GLPMCFG;            // LPM configuration register
    __IO uint32_t GPWRDN;             // Power down register
    __IO uint32_t GDFIFOCFG;          // DFIFO Software Config Register
    __IO uint32_t GADPCTL;            // ADP timer, control and status register
    uint32_t  Reserved43[39];         // 0x060 -> 0x9C reserved
    __IO uint32_t HPTXFSIZ;           // Host periodic tx fifo size reg
    __IO uint32_t DIEPTXF[0x0F];      // Device periodic transmit FIFO
} USB_OTG_Core_Registers;

/*----- USB_OTG_Device_Registers ---------------------------------------------*/
typedef struct {
  __IO uint32_t DCFG;       // Configuration register 
  __IO uint32_t DCTL;       // Control register       
  __IO uint32_t DSTS;       // Status register   
  uint32_t Reserved0C;      // 0x80C reserved
  __IO uint32_t DIEPMSK;    // IN endpoint mask register
  __IO uint32_t DOEPMSK;    // OUT endpoint mask register
  __IO uint32_t DAINT;      // All endpoints iterrupt register
  __IO uint32_t DAINTMSK;   // All endpoints iterrupt mask register
  uint32_t  Reserved20;     // 0x820
  uint32_t Reserved9;       // 0x824
  __IO uint32_t DVBUSDIS;   // VBUS discharge time register
  __IO uint32_t DVBUSPULSE; // VBUS pulsing time register    
  __IO uint32_t DTHRCTL;    // Threshold control register
  __IO uint32_t DIEPEMPMSK; // Empty interrupt mask register
  __IO uint32_t DEACHINT;   // Dedicated EP interrupt register
  __IO uint32_t DEACHMSK;   // Dedicated EP mask register
  uint32_t Reserved40;      // Dedicated EP mask register
  __IO uint32_t DINEP1MSK;  // Dedicated EP mask register
  uint32_t  Reserved44[15]; // Reserved
  __IO uint32_t DOUTEP1MSK; // dedicated EP msk           
} USB_OTG_Device_Registers;