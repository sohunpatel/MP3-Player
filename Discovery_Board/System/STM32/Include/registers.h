/**-----------------------------------------------------------------------------
 * file     :  registers.h
 * author   :  Sohun Patel
 * date     :  2 April 2021
 * brief    :  Definition of register structures
 * ---------------------------------------------------------------------------*/

/*----- Include --------------------------------------------------------------*/
#include "core_cm7.h"

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
         uint32_t RESERVED0[2]; // 0x00 -> 0x04 reserved
    __IO uint32_t SSCR;        // Syrnchronization size configuration register
    __IO uint32_t BPCR;        // Back porch configuration register
    __IO uint32_t AWCR;        // Active width configuration register
    __IO uint32_t TWCR;        // Total width configuration register
    __IO uint32_t GCR;         // Global control register
         uint32_t RESERVED1C[2]; // 0x1C -> 0x20 reserved
    __IO uint32_t SRCR;        // Shadow reload configuration register
         uint32_t RESERVED28[1]; // 0x28 reserved
    __IO uint32_t BCCR;        // Background color configuration register
         uint32_t RESERVED30[1]; // 0x30 reserved
    __IO uint32_t IER;         // Interrupt enable register
    __IO uint32_t ISR;         // Interrupt status register
    __IO uint32_t ICR;         // Interrupt clear register
    __IO uint32_t LIPCR;       // Line interrupt position configuration register
    __IO uint32_t CPSR;        // Current position status register
} LTDC_Registers;

/*----- Power Registers ------------------------------------------------------*/
typedef struct {
     __IO uint32_t CR1;  // Control register 1
     __IO uint32_t CSR1; // Control / Status register 1
     __IO uint32_t CR2;  // Control register 2
     __IO uint32_t CSR2; // Control / Status register 2
} Power_Registers;

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

/*----- RTC Registers --------------------------------------------------------*/
typedef struct {
    __IO uint32_t TR;       // Time register
    __IO uint32_t DR;       // Date register
    __IO uint32_t CR;       // Control register
    __IO uint32_t ISR;      // Initialization and status register
    __IO uint32_t PRER;     // Prescaler register
    __IO uint32_t WUTR;     // Wakeup timer register
    __IO uint32_t ALRMAR;   // Alarm A register
    __IO uint32_t ALRMBR;   // Alarm B register
    __IO uint32_t WPR;      // Write protection register
    __IO uint32_t SSR;      // Sub second register
    __IO uint32_t SHIFTR;   // Shift control register
    __IO uint32_t TSTR;     // Time-Stamp time register
    __IO uint32_t TSDR;     // Time-Stamp date register
    __IO uint32_t TSSSR;    // Time-Stamp sub second register
    __IO uint32_t CALR;     // Calibration register
    __IO uint32_t TAMPCR;   // Tamper configuration register
    __IO uint32_t ALRMASSR; // Alarm A sub second register
    __IO uint32_t ALRMBSSR; // Alarm B sub second register
    __IO uint32_t OR;       // Option register
    __IO uint32_t BKP0R;    // Backup register 0
    __IO uint32_t BKP1R;    // Backup register 1
    __IO uint32_t BKP2R;    // Backup register 2
    __IO uint32_t BKP3R;    // Backup register 3
    __IO uint32_t BKP4R;    // Backup register 4
    __IO uint32_t BKP5R;    // Backup register 5
    __IO uint32_t BKP6R;    // Backup register 6
    __IO uint32_t BKP7R;    // Backup register 7
    __IO uint32_t BKP8R;    // Backup register 8
    __IO uint32_t BKP9R;    // Backup register 9
    __IO uint32_t BKP10R;   // Backup register 10
    __IO uint32_t BKP11R;   // Backup register 11
    __IO uint32_t BKP12R;   // Backup register 12
    __IO uint32_t BKP13R;   // Backup register 13
    __IO uint32_t BKP14R;   // Backup register 14
    __IO uint32_t BKP15R;   // Backup register 15
    __IO uint32_t BKP16R;   // Backup register 16
    __IO uint32_t BKP17R;   // Backup register 17
    __IO uint32_t BKP18R;   // Backup register 18
    __IO uint32_t BKP19R;   // Backup register 19
    __IO uint32_t BKP20R;   // Backup register 20
    __IO uint32_t BKP21R;   // Backup register 21
    __IO uint32_t BKP22R;   // Backup register 22
    __IO uint32_t BKP23R;   // Backup register 23
    __IO uint32_t BKP24R;   // Backup register 24
    __IO uint32_t BKP25R;   // Backup register 25
    __IO uint32_t BKP26R;   // Backup register 26
    __IO uint32_t BKP27R;   // Backup register 27
    __IO uint32_t BKP28R;   // Backup register 28
    __IO uint32_t BKP29R;   // Backup register 29
    __IO uint32_t BKP30R;   // Backup register 30
    __IO uint32_t BKP31R;   // Backup register 31
} RTC_Registers;

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

/*----- TIM Registers --------------------------------------------------------*/
typedef struct {
     __IO uint32_t CR1;   // Control register 1
     __IO uint32_t CR2;   // Control register 2
     __IO uint32_t SMCR;  // Slave mode control register
     __IO uint32_t DIER;  // DMA/Interrupt enable register
     __IO uint32_t SR;    // Status register
     __IO uint32_t EGR;   // Event generation register
     __IO uint32_t CCMR1; // Capture / Compare mode register 1
     __IO uint32_t CCMR2; // Capture / Compare mode register 2
     __IO uint32_t CCER;  // Capture / Compare enable register
     __IO uint32_t CNT;   // Counter register
     __IO uint32_t PSC;   // Prescaler
     __IO uint32_t ARR;   // Auto-Reload register
     __IO uint32_t RCR;   // Repetition counter register
     __IO uint32_t CCR1;  // Capture / Compare register 1
     __IO uint32_t CCR2;  // Capture / Compare register 2
     __IO uint32_t CCR3;  // Capture / Compare register 3
     __IO uint32_t CCR4;  // Capture / Compare register 4
     __IO uint32_t BDTR;  // Break and dead-time register
     __IO uint32_t DCR;   // DMA control register
     __IO uint32_t DMAR;  // DMA address for full transfer
     __IO uint32_t OR;    // Option register
     __IO uint32_t CCMR3; // Capture / Compare mode register 3 
     __IO uint32_t CCR5;  // Capture / Compare mode register5  
     __IO uint32_t CCR6;  // Capture / Compare mode register6
} TIMx_Registers;

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

/*----- USB OTG IN Endpoint Registers ----------------------------------------*/
typedef struct {
    __IO uint32_t DIEPCTL;       // IN endpoint control register
         uint32_t Reserved04;    // 0x04 reserved
    __IO uint32_t DIEPINT;       // IN endpoint interrupt register
         uint32_t Reserved0C;    // 0x0C reserved
    __IO uint32_t DIEPTSIZ;      // IN endpoint transfer size
    __IO uint32_t DIEPDMA;       // IN endpoint dma address register
    __IO uint32_t DTXFSTS;       // IN endpoint tx FIFO status register
         uint32_t Reserved18;    // 0x18 reserved
} USB_OTG_IN_Endpoint_Registers;

/*----- USB OTG OUT Endpoint Registers ---------------------------------------*/
typedef struct {
    __IO uint32_t DOEPCTL;       // OUT Endpoint control register
        uint32_t Reserved04;    // 0x04 reserved
    __IO uint32_t DOEPINT;       // OUT endpoint interrupt register
        uint32_t Reserved0C;    // 0x0C reserved
    __IO uint32_t DOEPTSIZ;      // OUT endpoint txfer size
    __IO uint32_t DOEPDMA;       // OUT endpoint dma address
        uint32_t Reserved18[2]; // 0x18 -> 0x1C reserved
} USB_OTG_OUTEndpointTypeDef;