/**=============================================================================
 * @file    :  rcc.h
 * @author  :  Sohun Patel
 * @date    :  03 April 2021
 * @brief   :  Reset and Clock Control driver definitions
 * =============================================================================
 **/

/*===== Includes =============================================================*/
#include "defines.h"
#include "memory_map.h"
#include "peripherals.h"

/*===== RCC Bit Masks ========================================================*/

/*----- RCC CR Bit Masks -----------------------------------------------------*/
#define RCC_CR_PLLSAIRDY                    0x1 << 29
#define RCC_CR_PLLSAION                     0x1 << 28
#define RCC_CR_PLLI2SRDY                    0x1 << 27
#define RCC_CR_PLLI2SON                     0x1 << 26
#define RCC_CR_PLLRDY                       0x1 << 25
#define RCC_CR_PLLON                        0x1 << 24
#define RCC_CR_CSSON                        0x1 << 19
#define RCC_CR_HSYBYP                       0x1 << 18
#define RCC_CR_HSERDY                       0x1 << 17
#define RCC_CR_HSEON                        0x1 << 16
#define RCC_CR_HSICAL                       0xFF << 8
#define RCC_CR_HSITRIM                      0x1F << 3
#define RCC_CR_HSIRDY                       0x1 << 1
#define RCC_CR_HSION                        0x1 << 0

/*----- RCC PLLCFGR Bit Masks ------------------------------------------------*/
#define RCC_PLLCFGR_PLLQ                    0xF << 24
#define RCC_PLLCFGR_PLLSRC                  0x1 << 22
#define RCC_PLLCFGR_PLLP                    0x3 << 16
#define RCC_PLLCFGR_PLLN                    0xFF << 6
#define RCC_PLLCFGR_PLLM                    0x3F << 0

/*----- RCC CFGR Bit Masks ---------------------------------------------------*/
#define RCC_CFGR_MCO2                       0x3 << 30
#define RCC_CFGR_MCO2PRE                    0x7 << 27
#define RCC_CFGR_MCO1PRE                    0x7 << 24
#define RCC_CFGR_I2SSCR                     0x1 << 23
#define RCC_CFGR_MCO1                       0x3 << 21
#define RCC_CFGR_RTCPRE                     0x1F << 16
#define RCC_CFGR_PPRE2                      0x7 << 13
#define RCC_CFGR_PPRE1                      0x7 << 10
#define RCC_CFGR_HPRE                       0xF << 4
#define RCC_CFGR_SWS1                       0x1 << 3
#define RCC_CFGR_SWS0                       0x1 << 2
#define RCC_CFGR_SW1                        0x1 << 1
#define RCC_CFGR_SW0                        0x1 << 0

/*----- RCC AHB1RSTR Bit Masks -----------------------------------------------*/
#define RCC_AHB1RSTR_OTGHSRST               0x1 << 29
#define RCC_AHB1RSTR_ETHMACRST              0x1 << 25
#define RCC_AHB1RSTR_DMA2DRST               0x1 << 23
#define RCC_AHB1RSTR_DMA2RST                0x1 << 22
#define RCC_AHB1RSTR_DMA1RST                0x1 << 21
#define RCC_AHB1RSTR_CRCRST                 0x1 << 12
#define RCC_AHB1RSTR_GPIOKRST               0x1 << 10
#define RCC_AHB1RSTR_GPIOJRST               0x1 << 9
#define RCC_AHB1RSTR_GPIOIRST               0x1 << 8
#define RCC_AHB1RSTR_GPIOHRST               0x1 << 7
#define RCC_AHB1RSTR_GPIOGRST               0x1 << 6
#define RCC_AHB1RSTR_GPIOFRST               0x1 << 5
#define RCC_AHB1RSTR_GPIOERST               0x1 << 4
#define RCC_AHB1RSTR_GPIODRST               0x1 << 3
#define RCC_AHB1RSTR_GPIOCRST               0x1 << 2
#define RCC_AHB1RSTR_GPIOBRST               0x1 << 1
#define RCC_AHB1RSTR_GPIOARST               0x1 << 0

/*----- RCC AHB2RSTR Bit Masks -----------------------------------------------*/
#define RCC_AHB2RSTR_OTGFSRST               0x1 << 7
#define RCC_AHB2RSTR_RNGRST                 0x1 << 6
#define RCC_AHB2RSTR_HASHRST                0x1 << 5
#define RCC_AHB2RSTR_CRYPRST                0x1 << 4
#define RCC_AHB2RSTR_DCMIRST                0x1 << 0

/*----- RCC AHB3RSTR Bit Masks -----------------------------------------------*/
#define RCC_AHB3RSTR_QSPIRST                0x1 << 1
#define RCC_AHB3RSTR_FMCRST                 0x1 << 0

/*----- RCC APB1RSTR Bit Masks -----------------------------------------------*/
#define RCC_APB1RSTR_UART8RST               0x1 << 31
#define RCC_APB1RSTR_UART7RST               0x1 << 30
#define RCC_APB1RSTR_DACRST                 0x1 << 29
#define RCC_APB1RSTR_PWRRST                 0x1 << 28
#define RCC_APB1RSTR_CECRST                 0x1 << 27
#define RCC_APB1RSTR_CAN2RST                0x1 << 26
#define RCC_APB1RSTR_CAN1RST                0x1 << 25
#define RCC_APB1RSTR_I2C4RST                0x1 << 24
#define RCC_APB1RSTR_I2C3RST                0x1 << 23
#define RCC_APB1RSTR_I2C2RST                0x1 << 22
#define RCC_APB1RSTR_I2C1RST                0x1 << 21
#define RCC_APB1RSTR_UART5RST               0x1 << 20
#define RCC_APB1RSTR_UART4RST               0x1 << 19
#define RCC_APB1RSTR_UART3RST               0x1 << 18
#define RCC_APB1RSTR_UART2RST               0x1 << 17
#define RCC_APB1RSTR_SPDIFRXRST             0x1 << 16
#define RCC_APB1RSTR_SPI3RST                0x1 << 15
#define RCC_APB1RSTR_SPI2RST                0x1 << 14
#define RCC_APB1RSTR_WWDGRST                0x1 << 11
#define RCC_APB1RSTR_LPTIM1RST              0x1 << 9
#define RCC_APB1RSTR_TIM14RST               0x1 << 8
#define RCC_APB1RSTR_TIM13RST               0x1 << 7
#define RCC_APB1RSTR_TIM12RST               0x1 << 6
#define RCC_APB1RSTR_TIM7RST                0x1 << 5
#define RCC_APB1RSTR_TIM6RST                0x1 << 4
#define RCC_APB1RSTR_TIM5RST                0x1 << 3
#define RCC_APB1RSTR_TIM4RST                0x1 << 2
#define RCC_APB1RSTR_TIM3RST                0x1 << 1
#define RCC_APB1RSTR_TIM2RST                0x1 << 0

/*----- RCC APB2RSTR Bit Masks -----------------------------------------------*/
#define RCC_APB2RSTR_LTDCRST                0x1 << 26
#define RCC_APB1RSTR_SAI2RST                0x1 << 23
#define RCC_APB1RSTR_SAI1RST                0x1 << 22
#define RCC_APB1RSTR_SPI6RST                0x1 << 21
#define RCC_APB1RSTR_SPI5RST                0x1 << 20
#define RCC_APB1RSTR_TIM11RST               0x1 << 18
#define RCC_APB1RSTR_TIM10RST               0x1 << 17
#define RCC_APB1RSTR_TIM9RST                0x1 << 16
#define RCC_APB1RSTR_SYSCFGRST              0x1 << 14
#define RCC_APB1RSTR_SPI4RST                0x1 << 13
#define RCC_APB1RSTR_SPI1RST                0x1 << 12
#define RCC_APB1RSTR_SDMMC1RST              0x1 << 11
#define RCC_APB1RSTR_ADCRST                 0x1 << 8
#define RCC_APB1RSTR_USART6RST              0x1 << 5
#define RCC_APB1RSTR_USART1RST              0x1 << 4
#define RCC_APB1RSTR_TIM8RST                0x1 << 1
#define RCC_APB1RSTR_TIM1RST                0x1 << 0

/*----- RCC AHB1ENR Bit Masks ------------------------------------------------*/
#define RCC_AHB1ENR_OTGHSULPIEN             0x1 << 30
#define RCC_AHB1ENR_OTGHSEN                 0x1 << 29
#define RCC_AHB1ENR_ETHMACTPEN              0x1 << 28
#define RCC_AHB1ENR_ETHMACRXEN              0x1 << 27
#define RCC_AHB1ENR_ETHMACTXEN              0x1 << 26
#define RCC_AHB1ENR_ETHMACEN                0x1 << 25
#define RCC_AHB1ENR_DMA2DEN                 0x1 << 23
#define RCC_AHB1ENR_DMA2EN                  0x1 << 22
#define RCC_AHB1ENR_DMA1EN                  0x1 << 21
#define RCC_AHB1ENR_DTCMRAMEN               0x1 << 20
#define RCC_AHB1ENR_BSPSRAMEN               0x1 << 18
#define RCC_AHB1ENR_CRCEN                   0x1 << 12
#define RCC_AHB1ENR_GPIOKEN                 0x1 << 10
#define RCC_AHB1ENR_GPIOJEN                 0x1 << 9
#define RCC_AHB1ENR_GPIOIEN                 0x1 << 8
#define RCC_AHB1ENR_GPIOHEN                 0x1 << 7
#define RCC_AHB1ENR_GPIOGEN                 0x1 << 6
#define RCC_AHB1ENR_GPIOFEN                 0x1 << 5
#define RCC_AHB1ENR_GPIOEEN                 0x1 << 4
#define RCC_AHB1ENR_GPIODEN                 0x1 << 3
#define RCC_AHB1ENR_GPIOCEN                 0x1 << 2
#define RCC_AHB1ENR_GPIOBEN                 0x1 << 1
#define RCC_AHB1ENR_GPIOAEN                 0x1 << 0

/*----- RCC AHB2ENR Bit Masks ------------------------------------------------*/
#define RCC_AHB2ENR_OTGFSEN                 0x1 << 7
#define RCC_AHB2ENR_RNGEN                   0x1 << 6
#define RCC_AHB2ENR_HASHEN                  0x1 << 5
#define RCC_AHB2ENR_CRYPEN                  0x1 << 4
#define RCC_AHB2ENR_DCMIEN                  0x1 << 0

/*----- RCC AHB3ENR Bit Masks ------------------------------------------------*/
#define RCC_AHB3ENR_QSPIEN                  0x1 << 1
#define RCC_AHB3ENR_FMCEN                   0x1 << 0

/*----- RCC APB1ENR Bit Masks ------------------------------------------------*/
#define RCC_APB1ENR_UART8EN                 0x1 << 31
#define RCC_APB1ENR_UART7EN                 0x1 << 30
#define RCC_APB1ENR_DACEN                   0x1 << 29
#define RCC_APB1ENR_PWREN                   0x1 << 28
#define RCC_APB1ENR_CECEN                   0x1 << 27
#define RCC_APB1ENR_CAN2EN                  0x1 << 26
#define RCC_APB1ENR_CAN1EN                  0x1 << 25
#define RCC_APB1ENR_I2C4EN                  0x1 << 24
#define RCC_APB1ENR_I2C3EN                  0x1 << 23
#define RCC_APB1ENR_I2C2EN                  0x1 << 22
#define RCC_APB1ENR_I2C1EN                  0x1 << 21
#define RCC_APB1ENR_UART5EN                 0x1 << 20
#define RCC_APB1ENR_UART4EN                 0x1 << 19
#define RCC_APB1ENR_UART3EN                 0x1 << 18
#define RCC_APB1ENR_UART2EN                 0x1 << 17
#define RCC_APB1ENR_SPDIFRXEN               0x1 << 16
#define RCC_APB1ENR_SPI3EN                  0x1 << 15
#define RCC_APB1ENR_SPI2EN                  0x1 << 14
#define RCC_APB1ENR_WWDGEN                  0x1 << 11
#define RCC_APB1ENR_LPTIM1EN                0x1 << 9
#define RCC_APB1ENR_TIM14EN                 0x1 << 8
#define RCC_APB1ENR_TIM13EN                 0x1 << 7
#define RCC_APB1ENR_TIM12EN                 0x1 << 6
#define RCC_APB1ENR_TIM7EN                  0x1 << 5
#define RCC_APB1ENR_TIM6EN                  0x1 << 4
#define RCC_APB1ENR_TIM5EN                  0x1 << 3
#define RCC_APB1ENR_TIM4EN                  0x1 << 2
#define RCC_APB1ENR_TIM3EN                  0x1 << 1
#define RCC_APB1ENR_TIM2EN                  0x1 << 0

/*----- RCC APB2ENR Bit Masks ------------------------------------------------*/
#define RCC_APB2ENR_LTDCEN                  0x1 << 26
#define RCC_APB1ENR_SAI2EN                  0x1 << 23
#define RCC_APB1ENR_SAI1EN                  0x1 << 22
#define RCC_APB1ENR_SPI6EN                  0x1 << 21
#define RCC_APB1ENR_SPI5EN                  0x1 << 20
#define RCC_APB1ENR_TIM11EN                 0x1 << 18
#define RCC_APB1ENR_TIM10EN                 0x1 << 17
#define RCC_APB1ENR_TIM9EN                  0x1 << 16
#define RCC_APB1ENR_SYSCFGEN                0x1 << 14
#define RCC_APB1ENR_SPI4EN                  0x1 << 13
#define RCC_APB1ENR_SPI1EN                  0x1 << 12
#define RCC_APB1ENR_SDMMC1EN                0x1 << 11
#define RCC_APB1ENR_ADC3EN                  0x1 << 10
#define RCC_APB1ENR_ADC2EN                  0x1 << 9
#define RCC_APB1ENR_ADC1EN                  0x1 << 8
#define RCC_APB1ENR_USART6EN                0x1 << 5
#define RCC_APB1ENR_USART1EN                0x1 << 4
#define RCC_APB1ENR_TIM8EN                  0x1 << 1
#define RCC_APB1ENR_TIM1EN                  0x1 << 0

/*----- RCC AHB1LPENR Bit Masks ----------------------------------------------*/
#define RCC_AHB1LPENR_OTGHSULPILPEN         0x1 << 30
#define RCC_AHB1LPENR_OTGHSLPEN             0x1 << 29
#define RCC_AHB1LPENR_ETHMACTPLPEN          0x1 << 28
#define RCC_AHB1LPENR_ETHMACRXLPEN          0x1 << 27
#define RCC_AHB1LPENR_ETHMACTXLPEN          0x1 << 26
#define RCC_AHB1LPENR_ETHMACLPEN            0x1 << 25
#define RCC_AHB1LPENR_DMA2DLPEN             0x1 << 23
#define RCC_AHB1LPENR_DMA2LPEN              0x1 << 22
#define RCC_AHB1LPENR_DMA1LPEN              0x1 << 21
#define RCC_AHB1LPENR_DTCMRAMLPEN           0x1 << 20
#define RCC_AHB1LPENR_BSPSRAMLPEN           0x1 << 18
#define RCC_AHB1LPENR_CRCLPEN               0x1 << 12
#define RCC_AHB1LPENR_GPIOKLPEN             0x1 << 10
#define RCC_AHB1LPENR_GPIOJLPEN             0x1 << 9
#define RCC_AHB1LPENR_GPIOILPEN             0x1 << 8
#define RCC_AHB1LPENR_GPIOHLPEN             0x1 << 7
#define RCC_AHB1LPENR_GPIOGLPEN             0x1 << 6
#define RCC_AHB1LPENR_GPIOFLPEN             0x1 << 5
#define RCC_AHB1LPENR_GPIOELPEN             0x1 << 4
#define RCC_AHB1LPENR_GPIODLPEN             0x1 << 3
#define RCC_AHB1LPENR_GPIOCLPEN             0x1 << 2
#define RCC_AHB1LPENR_GPIOBLPEN             0x1 << 1
#define RCC_AHB1LPENR_GPIOALPEN             0x1 << 0

/*----- RCC AHB2LPENR Bit Masks ----------------------------------------------*/
#define RCC_AHB2LPENR_OTGFSLPEN             0x1 << 7
#define RCC_AHB2LPENR_RNGLPEN               0x1 << 6
#define RCC_AHB2LPENR_HASHLPEN              0x1 << 5
#define RCC_AHB2LPENR_CRYPLPEN              0x1 << 4
#define RCC_AHB2LPENR_DCMILPEN              0x1 << 0

/*----- RCC AHB3LPENR Bit Masks ----------------------------------------------*/
#define RCC_AHB3LPENR_QSPILPEN              0x1 << 1
#define RCC_AHB3LPENR_FMCLPEN               0x1 << 0

/*----- RCC APB1LPENR Bit Masks ----------------------------------------------*/
#define RCC_APB1LPENR_UART8LPEN             0x1 << 31
#define RCC_APB1LPENR_UART7LPEN             0x1 << 30
#define RCC_APB1LPENR_DACLPEN               0x1 << 29
#define RCC_APB1LPENR_PWRLPEN               0x1 << 28
#define RCC_APB1LPENR_CECLPEN               0x1 << 27
#define RCC_APB1LPENR_CAN2LPEN              0x1 << 26
#define RCC_APB1LPENR_CAN1LPEN              0x1 << 25
#define RCC_APB1LPENR_I2C4LPEN              0x1 << 24
#define RCC_APB1LPENR_I2C3LPEN              0x1 << 23
#define RCC_APB1LPENR_I2C2LPEN              0x1 << 22
#define RCC_APB1LPENR_I2C1LPEN              0x1 << 21
#define RCC_APB1LPENR_UART5LPEN             0x1 << 20
#define RCC_APB1LPENR_UART4LPEN             0x1 << 19
#define RCC_APB1LPENR_UART3LPEN             0x1 << 18
#define RCC_APB1LPENR_UART2LPEN             0x1 << 17
#define RCC_APB1LPENR_SPDIFRXLPEN           0x1 << 16
#define RCC_APB1LPENR_SPI3LPEN              0x1 << 15
#define RCC_APB1LPENR_SPI2LPEN              0x1 << 14
#define RCC_APB1LPENR_WWDGLPEN              0x1 << 11
#define RCC_APB1LPENR_LPTIM1LPEN            0x1 << 9
#define RCC_APB1LPENR_TIM14LPEN             0x1 << 8
#define RCC_APB1LPENR_TIM13LPEN             0x1 << 7
#define RCC_APB1LPENR_TIM12LPEN             0x1 << 6
#define RCC_APB1LPENR_TIM7LPEN              0x1 << 5
#define RCC_APB1LPENR_TIM6LPEN              0x1 << 4
#define RCC_APB1LPENR_TIM5LPEN              0x1 << 3
#define RCC_APB1LPENR_TIM4LPEN              0x1 << 2
#define RCC_APB1LPENR_TIM3LPEN              0x1 << 1
#define RCC_APB1LPENR_TIM2LPEN              0x1 << 0

/*----- RCC APB2LPENR Bit Masks ----------------------------------------------*/
#define RCC_APB2LPENR_LTDCLPEN              0x1 << 26
#define RCC_APB1LPENR_SAI2LPEN              0x1 << 23
#define RCC_APB1LPENR_SAI1LPEN              0x1 << 22
#define RCC_APB1LPENR_SPI6LPEN              0x1 << 21
#define RCC_APB1LPENR_SPI5LPEN              0x1 << 20
#define RCC_APB1LPENR_TIM11LPEN             0x1 << 18
#define RCC_APB1LPENR_TIM10LPEN             0x1 << 17
#define RCC_APB1LPENR_TIM9LPEN              0x1 << 16
#define RCC_APB1LPENR_SYSCFGLPEN            0x1 << 14
#define RCC_APB1LPENR_SPI4LPEN              0x1 << 13
#define RCC_APB1LPENR_SPI1LPEN              0x1 << 12
#define RCC_APB1LPENR_SDMMC1LPEN            0x1 << 11
#define RCC_APB1LPENR_ADC3LPEN              0x1 << 10
#define RCC_APB1LPENR_ADC2LPEN              0x1 << 9
#define RCC_APB1LPENR_ADC1LPEN              0x1 << 8
#define RCC_APB1LPENR_USART6LPEN            0x1 << 5
#define RCC_APB1LPENR_USART1LPEN            0x1 << 4
#define RCC_APB1LPENR_TIM8LPEN              0x1 << 1
#define RCC_APB1LPENR_TIM1LPEN              0x1 << 0

/*----- RCC BDCR Bit Masks ---------------------------------------------------*/
#define RCC_BDCR_BDRST                      0x1 << 16
#define RCC_BDCR_RTCEN                      0x1 << 15
#define RCC_BDCR_RTCSEL                     0x3 << 8
#define RCC_BDCR_LSEDRV                     0x3 << 3
#define RCC_BDCR_LSEBYP                     0x1 << 2
#define RCC_BDCR_LSERDY                     0x1 << 1
#define RCC_BDCR_LSEON                      0x1 << 0

/*----- RCC CSR Bit Masks ----------------------------------------------------*/
#define RCC_CSR_LPWRRSTF                    0x1 << 31
#define RCC_CSR_WWDGRSTF                    0x1 << 30
#define RCC_CSR_IWDGRSTF                    0x1 << 29
#define RCC_CSR_SFTRSTF                     0x1 << 28
#define RCC_CSR_PORRSTF                     0x1 << 27
#define RCC_CSR_PINRSTF                     0x1 << 26
#define RCC_CSR_BORRSTF                     0x1 << 25
#define RCC_CSR_RMVF                        0x1 << 24
#define RCC_CSR_LSIRDY                      0x1 << 1
#define RCC_CSR_LSION                       0x1 << 0

/*----- RCC SSCGR Bit Masks --------------------------------------------------*/
#define RCC_SSCGR_SSGEN                     0x1 << 31
#define RCC_SSCGR_SPREADSEL                 0x1 << 30
#define RCC_SSCGR_INCSTEP                   0x7FFF << 13
#define RCC_SSCGR_MODPER                    0x1FFF << 0

/*----- RCC PLLI2SCFGR Bit Masks ---------------------------------------------*/
#define RCC_PLLI2SCFGR_PLLI2SR              0x7 << 28
#define RCC_PLLI2SCFGR_PLLI2SQ              0xF << 24
#define RCC_PLLI2SCFGR_PLLI2SP              0x3 << 16
#define RCC_PLLI2SCFGR_PLLI2SN              0x1FF << 6

/*----- RCC PLLSAICFGR Bit Masks ---------------------------------------------*/
#define RCC_PLLI2SCFGR_PLLSAIR              0x7 << 28
#define RCC_PLLI2SCFGR_PLLSAIQ              0xF << 24
#define RCC_PLLI2SCFGR_PLLSAIP              0x3 << 16
#define RCC_PLLI2SCFGR_PLLSAIN              0x1FF << 6

/*----- RCC DCKCFGR1 Bit Masks -----------------------------------------------*/
#define RCC_DCKCFGR1_TIMPRE                 0x1 << 24
#define RCC_DCKCFGR1_SAI2SEL                0x3 << 22
#define RCC_DCKCFGR1_SAI1SEL                0x3 << 20
#define RCC_DCKCFGR1_PLLSAIDIVR             0x3 << 15
#define RCC_DCKCFGR1_PLLSAIDIVQ             0x1F << 8
#define RCC_DCKCFGR1_PLLI2SDIVQ             0x1F << 0

/*----- RCC DCKCFGR2 Bit Masks -----------------------------------------------*/
#define RCC_DCKCFGR2_SDMMC1SEL              0x1 << 28
#define RCC_DCKCFGR2_CK48MSEL               0x1 << 27
#define RCC_DCKCFGR2_CECSEL                 0x1 << 26
#define RCC_DCKCFGR2_LPTIM1SEL              0x3 << 24
#define RCC_DCKCFGR2_I2C4SEL                0x3 << 22
#define RCC_DCKCFGR2_I2C3SEL                0x3 << 20
#define RCC_DCKCFGR2_I2C2SEL                0x3 << 18
#define RCC_DCKCFGR2_I2C1SEL                0x3 << 16
#define RCC_DCKCFGR2_UART8SEL               0x3 << 14
#define RCC_DCKCFGR2_UART7SEL               0x3 << 12
#define RCC_DCKCFGR2_UART6SEL               0x3 << 10
#define RCC_DCKCFGR2_UART5SEL               0x3 << 8
#define RCC_DCKCFGR2_UART4SEL               0x3 << 6
#define RCC_DCKCFGR2_UART3SEL               0x3 << 4
#define RCC_DCKCFGR2_UART2SEL               0x3 << 2
#define RCC_DCKCFGR2_UART1SEL               0x3 << 0

extern uint32_t rcc_ahb_frequency;
extern uint32_t rcc_apb1_frequency;
extern uint32_t rcc_apb2_frequency;

enum rcc_clock {
    RCC_CLOCK_216MHZ,
    RCC_CLOCK_168MHZ,
    RCC_CLOCK_120MHZ,
    RCC_CLOCK_72MHZ,
    RCC_CLOCK_48MHZ,
    RCC_CLOCK_24MHZ,
    RCC_CLOCK_END,
};

struct rcc_clock_scale {
    uint16_t plln;
    uint8_t pllp;
    uint8_t pllq;
    uint16_t flash_waitstates;
    uint8_t hpre;
    uint8_t ppre1;
    uint8_t ppre2;
    //enum pwr_vos_scale vos_scale;
    uint8_t overdrive;
    uint32_t ahb_frequency;
    uint32_t apb1_frequency;
    uint32_t apb2_frequency;
};

void rcc_periph_enable_clock(__IO uint32_t *reg, uint32_t en);
void rcc_periph_disable_clock(__IO uint32_t *reg, uint32_t en);
void rcc_periph_reset(__IO uint32_t *reg, uint32_t reset);
void rcc_periph_clear_reset(__IO uint32_t *reg, uint32_t en);

void rcc_periph_clock_enable(enum rcc_periph_clken clken);
void rcc_periph_clock_disable(enum rcc_periph_clken clken);
void rcc_periph_reset_pulse(enum rcc_periph_reset reset);
void rcc_periph_reset_hold(enum rcc_periph_reset reset);
void rcc_periph_reset_release(enum rcc_periph_reset reset);

void rcc_set_mco(uint32_t mcosrc);
void rcc_osc_bypass_enable(enum rcc_osc osc);
void rcc_osc_bypass_disable(enum rcc_osc osc);

bool rcc_is_osc_ready(enum rcc_osc osc);
void rcc_wait_for_osc_ready(enum rcc_osc osc);

uint16_t rcc_get_div_from_hpre(uint8_t div_val);

