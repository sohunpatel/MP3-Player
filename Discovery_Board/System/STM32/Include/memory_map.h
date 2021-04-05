/**-----------------------------------------------------------------------------
 * @file    :  memory_map.h
 * @author  :  Sohun Patel
 * @date    :  01 April 2021
 * @brief   :  Defines for memory of memory mapped peripherals
 *----------------------------------------------------------------------------*/

/*----- Includes -------------------------------------------------------------*/

/*----- Memory Mapped Definitions --------------------------------------------*/
#define ITCM_RAM_BASE       0x00000000U // 16kB of RAM reserved for CPU instructions
#define ITCM_FLASH_BASE     0x00200000U // Up to 1MB FLASH over ITCM
#define AXIM_FLASH_BASE     0x08000000U // Up to 1MB FLASH over AXIM
#define FLASH_END           0x080FFFFFU // FLASH end address
#define FLASH_OTP_BASE      0x1FF0F000U // Up to 1024 bytes of FLASH OTP Area
#define FLASH_OTP_END       0x1FF0F41FU // End of FLASH OTP Area
#define DTCM_BASE           0x20000000U // 64kB system data RAM over DTCM
#define SRAM1_BASE          0x20010000U // 240kB of RAM1 over AXI / AHB
#define SRAM2_BASE          0x2004C000U // 16kB of RAM2 over AXI / AHB
#define PERIPHERAL_BASE     0x40000000U // APB / AHB address
#define BACKUP_SRAM_BASE    0x40024000U // 4kB of backup SRAM
#define QSPI_BASE           0x90000000U // QSPI memory address
#define FMC_REGISTER_BASE   0xA0000000U // FMC register address
#define QSPI_REGISTER_BASE  0xA0001000U // QSPI register address

/*----- Peripheral Memory Map ------------------------------------------------*/
#define APB1                PERIPHERAL_BASE
#define APB2                (PERIPHERAL_BASE + 0x00010000U)
#define AHB1                (PERIPHERAL_BASE + 0x00020000U)
#define AHB2                (PERIPHERAL_BASE + 0x10000000U)

/*----- APB1 Memory Map ------------------------------------------------------*/
#define TIM2_BASE           APB1
#define TIM3_BASE           (APB1 + 0x0400U)
#define TIM4_BASE           (APB1 + 0x0800U)
#define TIM5_BASE           (APB1 + 0x0C00U)
#define TIM6_BASE           (APB1 + 0x1000U)
#define TIM7_BASE           (APB1 + 0x1400U)
#define TIM12_BASE          (APB1 + 0x1800U)
#define TIM13_BASE          (APB1 + 0x1C00U)
#define TIM14_BASE          (APB1 + 0x2000U)
#define LPTIM_BASE          (APB1 + 0x2400U)
#define RTC_BASE            (APB1 + 0x2800U)
#define WWDG_BASE           (APB1 + 0x2C00U)
#define IWDG_BASE           (APB1 + 0x3000U)
#define SPI2_BASE           (APB1 + 0x3800U)
#define SPI3_BASE           (APB1 + 0x3C00U)
#define SPDIFRX_BASE        (APB1 + 0x4000U)
#define USART2_BASE         (APB1 + 0x4400U)
#define USART3_BASE         (APB1 + 0x4800U)
#define UART4_BASE          (APB1 + 0x4C00U)
#define UART5_BASE          (APB1 + 0x5000U)
#define I2C1_BASE           (APB1 + 0x5400U)
#define I2C2_BASE           (APB1 + 0x5800U)
#define I2C3_BASE           (APB1 + 0x5C00U)
#define I2C4_BASE           (APB1 + 0x6000U)
#define CAN1_BASE           (APB1 + 0x6400U)
#define CAN2_BASE           (APB1 + 0x6800U)
#define HDMI_BASE           (APB1 + 0x6C00U)
#define POWER_BASE          (APB1 + 0x7000U)
#define DAC_BASE            (APB1 + 0x7400U)
#define UART7_BASE          (APB1 + 0x7800U)
#define UART8_BASE          (APB1 + 0x7C00U)

/*----- APB2 Memory Map ------------------------------------------------------*/
#define TIM1_BASE           APB2
#define TIM8_BASE           (APB2 + 0x0400U)
#define USART1_BASE         (APB2 + 0x1000U)
#define USART6_BASE         (APB2 + 0x1400U)
#define ADC1_BASE           (APB2 + 0x2000U)
#define ADC2_BASE           (APB2 + 0x2100U)
#define ADC3_BASE           (APB2 + 0x2200U)
#define ADC_BASE            (APB2 + 0x2300U)
#define SDMMC_BASE          (APB2 + 0x2C00U)
#define SPI1_BASE           (APB2 + 0x3000U)
#define SPI4_BASE           (APB2 + 0x3400U)
#define SYSCFG_BASE         (APB2 + 0x3800U)
#define EXTI_BASE           (APB2 + 0x3C00U)
#define TIM9_BASE           (APB2 + 0x4000U)
#define TIM10_BASE          (APB2 + 0x4400U)
#define TIM11_BASE          (APB2 + 0x4800U)
#define SPI5_BASE           (APB2 + 0x5000U)
#define SPI6_BASE           (APB2 + 0x5400U)
#define SAI1_BASE           (APB2 + 0x5800U)
#define SAI2_BASE           (APB2 + 0x5C00U)
#define SAI1_Block_A_BASE   (SAI1_BASE + 0x004U)
#define SAI1_Block_B_BASE   (SAI1_BASE + 0x024U)
#define SAI2_Block_A_BASE   (SAI2_BASE + 0x004U)
#define SAI2_Block_B_BASE   (SAI2_BASE + 0x024U)
#define LTDC_BASE           (APB2 + 0x6800U)
#define LTDC_Layer1_BASE    (LTDC_BASE + 0x84U)
#define LTDC_Layer2_BASE    (LTDC_BASE + 0x104U)

/*----- AHB1 Memory Map ------------------------------------------------------*/
#define GPIOA_BASE          AHB1
#define GPIOB_BASE          (AHB1 + 0x0400U)
#define GPIOC_BASE          (AHB1 + 0x0800U)
#define GPIOD_BASE          (AHB1 + 0x0C00U)
#define GPIOE_BASE          (AHB1 + 0x1000U)
#define GPIOF_BASE          (AHB1 + 0x1400U)
#define GPIOG_BASE          (AHB1 + 0x1800U)
#define GPIOH_BASE          (AHB1 + 0x1C00U)
#define GPIOI_BASE          (AHB1 + 0x2000U)
#define GPIOJ_BASE          (AHB1 + 0x2400U)
#define GPIOK_BASE          (AHB1 + 0x2800U)
#define CRC_BASE            (AHB1 + 0x3000U)
#define RCC_BASE            (AHB1 + 0x3800U)
#define FLASH_REGISTER_BASE (AHB1 + 0x3C00U)
#define UID_BASE            0x1FF0F420U
#define FLASHSIZE_BASE      0x1FF0F442U
#define PACKAGE_BASE        0x1FFF7BF0U
#define DMA1_BASE           (AHB1 + 0x6000U)
#define DMA1_Stream0_BASE   (DMA1_BASE + 0x010U)
#define DMA1_Stream1_BASE   (DMA1_BASE + 0x028U)
#define DMA1_Stream2_BASE   (DMA1_BASE + 0x040U)
#define DMA1_Stream3_BASE   (DMA1_BASE + 0x058U)
#define DMA1_Stream4_BASE   (DMA1_BASE + 0x070U)
#define DMA1_Stream5_BASE   (DMA1_BASE + 0x088U)
#define DMA1_Stream6_BASE   (DMA1_BASE + 0x0A0U)
#define DMA1_Stream7_BASE   (DMA1_BASE + 0x0B8U)
#define DMA2_BASE           (AHB1 + 0x6400U)
#define DMA2_Stream0_BASE   (DMA2_BASE + 0x010U)
#define DMA2_Stream1_BASE   (DMA2_BASE + 0x028U)
#define DMA2_Stream2_BASE   (DMA2_BASE + 0x040U)
#define DMA2_Stream3_BASE   (DMA2_BASE + 0x058U)
#define DMA2_Stream4_BASE   (DMA2_BASE + 0x070U)
#define DMA2_Stream5_BASE   (DMA2_BASE + 0x088U)
#define DMA2_Stream6_BASE   (DMA2_BASE + 0x0A0U)
#define DMA2_Stream7_BASE   (DMA2_BASE + 0x0B8U)
#define ETHERNET_BASE       (AHB1 + 0x8000U)
#define ETH_MAC_BASE        ETH_BASE
#define ETH_MMC_BASE        (ETH_BASE + 0x0100U)
#define ETH_PTP_BASE        (ETH_BASE + 0x0700U)
#define ETH_DMA_BASE        (ETH_BASE + 0x1000U)
#define DMA2D_BASE          (AHB1 + 0xB000)

/*----- AHB2 Memory Map ------------------------------------------------------*/
#define DCMI_BASE           (AHB2 + 0x50000U)
#define RNG_BASE            (AHB2 + 0x60800U)

/*----- FMC Memory Map -------------------------------------------------------*/
#define FMC_Bank1_R_BASE    (FMC_REGISTER_BASE + 0x0000U)
#define FMC_Bank1E_R_BASE   (FMC_REGISTER_BASE + 0x0104U)
#define FMC_Bank3_R_BASE    (FMC_REGISTER_BASE + 0x0080U)
#define FMC_Bank5_6_R_BASE  (FMC_REGISTER_BASE + 0x0140U)

/*----- MCU Debug Register Address -------------------------------------------*/
#define DBGMCU_BASE         0xE0042000U

/*----- USB OTG Register Addresses -------------------------------------------*/
#define USB_OTG_HS_PERIPH_BASE              0x40040000U
#define USB_OTG_FS_PERIPH_BASE              0x50000000U

#define USB_OTG_GLOBAL_BASE                 0x0000U
#define USB_OTG_DEVICE_BASE                 0x0800U
#define USB_OTG_IN_ENDPOINT_BASE            0x0900U
#define USB_OTG_OUT_ENDPOINT_BASE           0x0B00U
#define USB_OTG_EP_REG_SIZE                 0x0020U
#define USB_OTG_HOST_BASE                   0x0400U
#define USB_OTG_HOST_PORT_BASE              0x0440U
#define USB_OTG_HOST_CHANNEL_BASE           0x0500U
#define USB_OTG_HOST_CHANNEL_SIZE           0x0020U
#define USB_OTG_PCGCCTL_BASE                0x0E00U
#define USB_OTG_FIFO_BASE                   0x1000U
#define USB_OTG_FIFO_SIZE                   0x1000U

/*===== RCC Bit Definitions ==================================================*/

/*----- RCC PLLCFGR Bit Definitions ------------------------------------------*/
#define RCC_PLLCFGR_PLLM_POS                0U
#define RCC_PLLCFGR_PLLM_MSK                (0x3FU << RCC_PLLCFGR_PLLM_POS)
#define RCC_PLLCFGR_PLLM                    RCC_PLLCFGR_PLLM_MSK
#define RCC_PLLCFGR_PLLM_0                  (0x01U << RCC_PLLCFGR_PLLM)
#define RCC_PLLCFGR_PLLM_1                  (0x02U << RCC_PLLCFGR_PLLM)
#define RCC_PLLCFGR_PLLM_2                  (0x04U << RCC_PLLCFGR_PLLM)
#define RCC_PLLCFGR_PLLM_3                  (0x08U << RCC_PLLCFGR_PLLM)
#define RCC_PLLCFGR_PLLM_4                  (0x10U << RCC_PLLCFGR_PLLM)
#define RCC_PLLCFGR_PLLM_5                  (0x20U << RCC_PLLCFGR_PLLM)

#define RCC_PLLCFGR_PLLSRC_POS              22
#define RCC_PLLCFGR_PLLSRC_MSK              (0x1 << RCC_PLLCFGR_PLLSRC_POS)
#define RCC_PLLCFGR_PLLSRC                  RCC_PLLCFGR_PLLSRC_MSK

/*----- RCC CFGR Bit Definitions ---------------------------------------------*/
#define RCC_CFGR_SWS_POS                    2U
#define RCC_CFGR_SWS_MSK                    (0x3U << RCC_CFGR_SWS_POS)
#define RCC_CFGR_SWS                        RCC_CFGR_SWS_MSK
#define RCC_CFGR_SWS_0                      (0x1U) << RCC_CFGR_SWS_POS)
#define RCC_CFGR_SWS_1                      (0x2U) << RCC_CFGR_SWS_POS)
#define RCC_CFGR_SWS_HSI                    0x00000000U // HSI selected as clock
#define RCC_CFGR_SWS_HSE                    0x00000004U // HSE selected as clock
#define RCC_CFGR_SWS_PLL                    0x00000008U // PLL selected as clock
