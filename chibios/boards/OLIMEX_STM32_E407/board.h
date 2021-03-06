/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
                 2011,2012,2013 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _BOARD_H_
#define _BOARD_H_


/*
 * Setup for Olimex STM32-E407 board.
 */

/*
 * Board identifier.
 */
#define BOARD_STM32_E407_STX	    1
#define BOARD_NAME                  "STM32-E407-STX"
#define BOARD_USE                   "ROBOTIC_ARM_V2"

/*
 * Ethernet PHY type.
 */
#define BOARD_PHY_ID                MII_KS8721_ID
#define BOARD_PHY_RMII

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                12000000
#endif


/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330

/*
 * MCU type as defined in the ST header file stm32f4xx.h.
 */
#define STM32F40_41xxx

/*
 * IO pins assignments.
 */
#define GPIOA_BUTTON_WKUP           0
#define GPIOA_ETH_RMII_REF_CLK      1
#define GPIOA_ETH_RMII_MDIO         2
#define GPIOA_ETH_RMII_MDINT        3
#define GPIOA_PIN4                  4 
#define GPIOA_PIN5		    5 
#define GPIOA_PIN6                  6 
#define GPIOA_ETH_RMII_CRS_DV       7
#define GPIOA_USB_HS_BUSON          8
#define GPIOA_OTG_FS_VBUS           9
#define GPIOA_OTG_FS_ID             10
#define GPIOA_OTG_FS_DM             11
#define GPIOA_OTG_FS_DP             12
#define GPIOA_JTAG_TMS              13
#define GPIOA_JTAG_TCK              14
#define GPIOA_JTAG_TDI              15


#define GPIOB_USB_FS_BUSON          0
#define GPIOB_USB_HS_FAULT          1
#define GPIOB_BOOT1                 2
#define GPIOB_JTAG_TDO              3
#define GPIOB_JTAG_TRST             4
#define GPIOB_PWM_TURRET            5 // timer 3 channel 2 WAS GPIOB_PWM_CLAMP
#define GPIOB_PIN6                  6
#define GPIOB_PIN7                  7
#define GPIOB_I2C1_SCL              8
#define GPIOB_I2C1_SDA              9
#define GPIOB_USART3_TX             10
#define GPIOB_PIN11                 11
#define GPIOB_OTG_HS_ID             12
#define GPIOB_OTG_HS_VBUS           13
#define GPIOB_OTG_HS_DM             14
#define GPIOB_OTG_HS_DP             15

#define GPIOC_PIN0                  0
#define GPIOC_ETH_RMII_MDC          1
#define GPIOC_LCD_RST               2
#define GPIOC_LCD_BL                3
#define GPIOC_ETH_RMII_RXD0         4
#define GPIOC_ETH_RMII_RXD1         5
#define GPIOC_LCD_TX6               6
#define GPIOC_LCD_RX6               7
#define GPIOC_SD_D0                 8
#define GPIOC_SD_D1                 9
#define GPIOC_SD_D2                 10
#define GPIOC_SD_D3                 11
#define GPIOC_SD_CLK                12
#define GPIOC_LED                   13
#define GPIOC_OSC32_IN              14
#define GPIOC_OSC32_OUT             15

#define GPIOD_JOYSTICK_DOWN	    0 // WAS GPIOD_STOP_TURRET_RIGHT
#define GPIOD_JOYSTICK_LEFT         1 // WAS GPIOD_STOP_TURRET_LEFT
#define GPIOD_JOYSTICK_RIGHT	    2 // WAS GPIOD_STOP_SHOULDER_BACK
#define GPIOD_JOYSTICK_CLICK	    3 // WAS GPIOD_STOP_SHOULDER_FRONT
#define GPIOD_JOYSTICK_UP	    4 // WAS GPIOD_STOP_ELBOW_HIGH
#define GPIOD_KNOB_LVTTL            5 // WAS GPIOD_STOP_ELBOW_LOW
#define GPIOD_KNOB_OFF       	    6 // WAS GPIOD_STOP_WRIST_HIGH
#define GPIOD_KNOB_RS485            7 // WAS GPIOD_STOP_WRIST_LOW 
#define GPIOD_KNOB_ANALOG           8 // WAS GPIOD_STOP_CLAMP_OPEN        
#define GPIOD_USART3_RX		    9
#define GPIOD_KNOB_TUNING     	    10 // WAS GPIOD_STOP_CLAMP_CLOSED
#define GPIOD_KNOB_ETHERNET         11
#define GPIOD_PWM_ELBOW             12 // timer 4 channel 1 WAS GPIOD_PWM_TURRET
#define GPIOD_PWM_SHOULDER          13 // timer 4 channel 2 WAS GPIOD_PWM_SHOULDER
#define GPIOD_PWM_CLAMP             14 // timer 4 channel 3 WAS GPIOD_PWM_ELBOW 
#define GPIOD_PWM_WRIST             15 // timer 4 channel 4 WAS GPIOD_PWM_WRIST

#define GPIOE_PIN0			 0 // WAS GPIOE_LVTTL_CMD_TURRET
#define GPIOE_ARM_BOARD_PLUGGED          1 // WAS GPIOE_LVTTL_CMD_TURRET_DIR
#define GPIOE_LCD_BOARD_PLUGGED          2 // WAS GPIOE_LVTTL_CMD_SHOULDER
#define GPIOE_DAUGHTERBOARD_PLUGGED      3 // WAS GPIOE_LVTTL_CMD_SHOULDER_DIR
#define GPIOE_CMD_CLAMP_DIR              4 // WAS GPIOE_LVTTL_CMD_ELBOW
#define GPIOE_CMD_CLAMP                  5 // WAS GPIOE_LVTTL_CMD_ELBOW_DIR
#define GPIOE_CMD_WRIST_DIR		 6 // WAS GPIOE_LVTTL_CMD_WRIST
#define GPIOE_CMD_WRIST			 7 // WAS GPIOE_LVTTL_CMD_WRIST_DIR
#define GPIOE_CMD_ELBOW_DIR		 8 // WAS GPIOE_LVTTL_CMD_CLAMP
#define GPIOE_CMD_ELBOW             	 9 // WAS GPIOE_LVTTL_CMD_CLAMP_DIR
#define GPIOE_CMD_SHOULDER_DIR           10 // WAS GPIOE_JOYSTICK_UP
#define GPIOE_CMD_SHOULDER         	 11 // WAS GPIOE_JOYSTICK_DOWN
#define GPIOE_CMD_TURRET_DIR         	 12 // WAS GPIOE_JOYSTICK_LEFT
#define GPIOE_CMD_TURRET        	 13 // WAS GPIOE_JOYSTICK_RIGHT
#define GPIOE_BUTTON_RED       	         14 // WAS GPIOE_JOYSTICK_CLICK
#define GPIOE_BUTTON_GREEN             	 15 

#define GPIOF_I2C2_SDA              0 // I2C ADS7828 ADC for SERVO POSITION FEEDBACK AND CURRENT CONSUMPTION
#define GPIOF_I2C2_SCL              1 // I2C ADS7828 ADC for SERVO POSITION FEEDBACK AND CURRENT CONSUMPTION
#define GPIOF_PIN2                  2
#define GPIOF_ADC_CMD_CLAMP         3 // ADC3 IN9
#define GPIOF_ADC_CMD_WRIST         4 // ADC3 IN14
#define GPIOF_ADC_CMD_SHOULDER      5 // ADC3 IN15
#define GPIOF_ADC_CMD_ELBOW         6 // ADC3 IN4
#define GPIOF_ADC_CMD_TURRET        7 // ADC3 IN5
#define GPIOF_NAKED_TEST_OUT        8 // WAS GPIOF_ADC_CURRENT_TURRET   ADC3 IN6
#define GPIOF_NAKED_TEST_IN         9 // WAS GPIOF_ADC_CURRENT_SHOULDER ADC3 IN7
#define GPIOF_PIN10                 10
#define GPIOF_RAPIDE_IN             11 // WAS  GPIOF_BUTTON_GREEN
#define GPIOF_STOP_TURRET_RIGHT     12 // WAS  GPIOF_BUTTON_RED
#define GPIOF_LED_RED               13
#define GPIOF_PIN14                 14 // WAS  GPIOF_LED_RED (OUT, PP, LOW)
#define GPIOF_PIN15                 15

#define CMD_TURRET_ADC_IDX		3        
#define CMD_SHOULDER_ADC_IDX		3      
#define CMD_ELBOW_ADC_IDX		3         
#define CMD_WRIST_ADC_IDX 		3         
#define CMD_CLAMP_ADC_IDX 		3         
//#define CURRENT_TURRET_ADC_IDX	3    
//#define CURRENT_SHOULDER_ADC_IDX	3  

#define GPIOF_ADC_CMD_CLAMP_CHANNEL        	ADC_CHANNEL_IN9
#define GPIOF_ADC_CMD_WRIST_CHANNEL      	ADC_CHANNEL_IN14
#define GPIOF_ADC_CMD_SHOULDER_CHANNEL         	ADC_CHANNEL_IN15
#define GPIOF_ADC_CMD_ELBOW_CHANNEL         	ADC_CHANNEL_IN4
#define GPIOF_ADC_CMD_TURRET_CHANNEL         	ADC_CHANNEL_IN5
//#define GPIOF_ADC_CURRENT_TURRET_CHANNEL    	ADC_CHANNEL_IN6
//#define GPIOF_ADC_CURRENT_SHOULDER_CHANNEL  	ADC_CHANNEL_IN7
#define ADC_ADC3_NUM_CHANNELS			5

#define GPIOG_STOP_CLAMP_OPEN         0 // WAS GPIOG_KNOB_LVTTL
#define GPIOG_STOP_CLAMP_CLOSED       1 // WAS GPIOG_KNOB_ANALOG 
#define GPIOG_STOP_WRIST_HIGH         2 // WAS GPIOG_KNOB_RS485
#define GPIOG_STOP_WRIST_LOW          3 // WAS GPIOG_KNOB_ETHERNET 
#define GPIOG_STOP_ELBOW_HIGH         4 // WAS GPIOG_KNOB_UNUSED    
#define GPIOG_STOP_ELBOW_LOW          5 // WAS GPIOG_KNOB_TUNING    
#define GPIOG_STOP_SHOULDER_FRONT     6 
#define GPIOG_LCD_SCK                 7
#define GPIOG_STOP_TURRET_LEFT        8 
#define GPIOG_STOP_SHOULDER_BACK      9 
#define GPIOG_LCD_CS                  10
#define GPIOG_ETH_RMII_TXEN           11
#define GPIOG_LED_GREEN                 12 // WAS GPIOG_RAPIDE_OUT
#define GPIOG_ETH_RMII_TXD0           13
#define GPIOG_ETH_RMII_TXD1           14
#define GPIOG_RAPIDE_OUT              15

#define GPIOH_OSC_IN                0
#define GPIOH_OSC_OUT               1
#define GPIOH_PIN2                  2
#define GPIOH_PIN3                  3
#define GPIOH_PIN4                  4
#define GPIOH_PIN5                  5
#define GPIOH_PIN6                  6
#define GPIOH_PIN7                  7
#define GPIOH_PIN8                  8
#define GPIOH_PIN9                  9
#define GPIOH_PIN10                 10
#define GPIOH_PIN11                 11
#define GPIOH_PIN12                 12
#define GPIOH_PIN13                 13
#define GPIOH_PIN14                 14
#define GPIOH_PIN15                 15

#define GPIOI_PIN0                  0
#define GPIOI_PIN1                  1
#define GPIOI_PIN2                  2
#define GPIOI_PIN3                  3
#define GPIOI_PIN4                  4
#define GPIOI_PIN5                  5
#define GPIOI_PIN6                  6
#define GPIOI_PIN7                  7
#define GPIOI_PIN8                  8
#define GPIOI_PIN9                  9
#define GPIOI_PIN10                 10
#define GPIOI_PIN11                 11
#define GPIOI_PIN12                 12
#define GPIOI_PIN13                 13
#define GPIOI_PIN14                 14
#define GPIOI_PIN15                 15

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_2M(n)            (0U << ((n) * 2))
#define PIN_OSPEED_25M(n)           (1U << ((n) * 2))
#define PIN_OSPEED_50M(n)           (2U << ((n) * 2))
#define PIN_OSPEED_100M(n)          (3U << ((n) * 2))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2))
#define PIN_AFIO_AF(n, v)           ((v##U) << ((n % 8) * 4))

/*
 * GPIOA setup:
 *
 * PA0  - BUTTON_WKUP               (input floating).
 * PA1  - ETH_RMII_REF_CLK          (alternate 11).
 * PA2  - ETH_RMII_MDIO             (alternate 11).
 * PA3  - ETH_RMII_MDINT            (input floating).
 * PA4  - PIN4                      (input pullup).
 * PA5  - PIN5                      (input pullup).
 * PA6  - PIN6                      (input pullup).
 * PA7  - ETH_RMII_CRS_DV           (alternate 11).
 * PA8  - USB_HS_BUSON              (output pushpull maximum).
 * PA9  - OTG_FS_VBUS               (input pulldown).
 * PA10 - OTG_FS_ID                 (alternate 10).
 * PA11 - OTG_FS_DM                 (alternate 10).
 * PA12 - OTG_FS_DP                 (alternate 10).
 * PA13 - JTAG_TMS                  (alternate 0).
 * PA14 - JTAG_TCK                  (alternate 0).
 * PA15 - JTAG_TDI                  (alternate 0).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_BUTTON_WKUP) |    \
                                     PIN_MODE_ALTERNATE(GPIOA_ETH_RMII_REF_CLK) |\
                                     PIN_MODE_ALTERNATE(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_MODE_INPUT(GPIOA_ETH_RMII_MDINT) | \
                                     PIN_MODE_INPUT(GPIOA_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN6) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_MODE_OUTPUT(GPIOA_USB_HS_BUSON) |  \
                                     PIN_MODE_INPUT(GPIOA_OTG_FS_VBUS) |    \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_ID) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DM) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DP) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TMS) |   \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TCK) |   \
                                     PIN_MODE_ALTERNATE(GPIOA_JTAG_TDI))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_BUTTON_WKUP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_REF_CLK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_MDINT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_HS_BUSON) |\
                                     PIN_OTYPE_OPENDRAIN(GPIOA_OTG_FS_VBUS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_ID) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DM) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DP) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TMS) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TCK) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_JTAG_TDI))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_100M(GPIOA_BUTTON_WKUP) |   \
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_REF_CLK) |\
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_MDIO) | \
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_MDINT) |\
                                     PIN_OSPEED_100M(GPIOA_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOA_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOA_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_OSPEED_100M(GPIOA_USB_HS_BUSON) |  \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_VBUS) |   \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_ID) |     \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_DM) |     \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_DP) |     \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TMS) |      \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TCK) |      \
                                     PIN_OSPEED_100M(GPIOA_JTAG_TDI))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_BUTTON_WKUP) |\
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_REF_CLK) |\
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_MDIO) |\
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_MDINT) |\
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN4) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN5) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOA_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_ETH_RMII_CRS_DV) |\
                                     PIN_PUPDR_FLOATING(GPIOA_USB_HS_BUSON) |\
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_VBUS) |\
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_ID) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DM) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DP) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_JTAG_TMS) |   \
                                     PIN_PUPDR_PULLDOWN(GPIOA_JTAG_TCK) |   \
                                     PIN_PUPDR_FLOATING(GPIOA_JTAG_TDI))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_BUTTON_WKUP) |      \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_REF_CLK) | \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_MDIO) |    \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_MDINT) |   \
                                     PIN_ODR_HIGH(GPIOA_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOA_ETH_RMII_CRS_DV) |  \
                                     PIN_ODR_HIGH(GPIOA_USB_HS_BUSON) |     \
                                     PIN_ODR_LOW(GPIOA_OTG_FS_VBUS) |      \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_ID) |        \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_DM) |        \
                                     PIN_ODR_HIGH(GPIOA_OTG_FS_DP) |        \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TMS) |         \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TCK) |         \
                                     PIN_ODR_HIGH(GPIOA_JTAG_TDI))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_BUTTON_WKUP, 0) |    \
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_REF_CLK, 11) |\
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_MDIO, 11) | \
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_MDINT, 0) | \
                                     PIN_AFIO_AF(GPIOA_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOA_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOA_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOA_ETH_RMII_CRS_DV, 11))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_USB_HS_BUSON, 0) |   \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_VBUS, 0) |    \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_ID, 10) |     \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DM, 10) |     \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DP, 10) |     \
                                     PIN_AFIO_AF(GPIOA_JTAG_TMS, 0) |       \
                                     PIN_AFIO_AF(GPIOA_JTAG_TCK, 0) |       \
                                     PIN_AFIO_AF(GPIOA_JTAG_TDI, 0))

/*
 * GPIOB setup:
 *
 * PB0  - USB_FS_BUSON              (output pushpull maximum).
 * PB1  - USB_HS_FAULT              (input floating).
 * PB2  - BOOT1                     (input floating).
 * PB3  - JTAG_TDO                  (alternate 0).
 * PB4  - JTAG_TRST                 (alternate 0).
 * PB5  - PIN5                      (input pullup).
 * PB6  - PIN6                      (input pullup).
 * PB7  - PIN7                      (input pullup).
 * PB8  - I2C1_SCL                  (alternate 4).
 * PB9  - I2C1_SDA                  (alternate 4).
 * PB10 - SPI2_SCK                  (alternate 5).
 * PB11 - PIN11                     (input pullup).
 * PB12 - OTG_HS_ID                 (alternate 12).
 * PB13 - OTG_HS_VBUS               (input pulldown).
 * PB14 - OTG_HS_DM                 (alternate 12).
 * PB15 - OTG_HS_DP                 (alternate 12).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_OUTPUT(GPIOB_USB_FS_BUSON) |  \
                                     PIN_MODE_INPUT(GPIOB_USB_HS_FAULT) |   \
                                     PIN_MODE_INPUT(GPIOB_BOOT1) |          \
                                     PIN_MODE_ALTERNATE(GPIOB_JTAG_TDO) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_JTAG_TRST) |  \
                                     PIN_MODE_ALTERNATE(GPIOB_PWM_TURRET) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN7) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C1_SCL) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C1_SDA) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_USART3_TX) |   \
                                     PIN_MODE_INPUT(GPIOB_PIN11) |          \
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ID) |  \
                                     PIN_MODE_INPUT(GPIOB_OTG_HS_VBUS) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_DM) |  \
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_USB_FS_BUSON) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_USB_HS_FAULT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_BOOT1) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_JTAG_TDO) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_JTAG_TRST) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PWM_TURRET) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN7) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C1_SCL) |  \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C1_SDA) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_USART3_TX) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ID) |  \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_OTG_HS_VBUS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_DM) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_100M(GPIOB_USB_FS_BUSON) |  \
                                     PIN_OSPEED_100M(GPIOB_USB_HS_FAULT) |  \
                                     PIN_OSPEED_100M(GPIOB_BOOT1) |         \
                                     PIN_OSPEED_100M(GPIOB_JTAG_TDO) |      \
                                     PIN_OSPEED_100M(GPIOB_JTAG_TRST) |     \
                                     PIN_OSPEED_100M(GPIOB_PWM_TURRET) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOB_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOB_I2C1_SCL) |      \
                                     PIN_OSPEED_100M(GPIOB_I2C1_SDA) |      \
                                     PIN_OSPEED_100M(GPIOB_USART3_TX) |      \
                                     PIN_OSPEED_100M(GPIOB_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_ID) |     \
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_VBUS) |   \
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_DM) |     \
                                     PIN_OSPEED_100M(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_USB_FS_BUSON) |\
                                     PIN_PUPDR_FLOATING(GPIOB_USB_HS_FAULT) |\
                                     PIN_PUPDR_FLOATING(GPIOB_BOOT1) |      \
                                     PIN_PUPDR_FLOATING(GPIOB_JTAG_TDO) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_JTAG_TRST) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_PWM_TURRET) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C1_SCL) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C1_SDA) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_USART3_TX) |   \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ID) |  \
                                     PIN_PUPDR_PULLDOWN(GPIOB_OTG_HS_VBUS) |\
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_DM) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_USB_FS_BUSON) |     \
                                     PIN_ODR_HIGH(GPIOB_USB_HS_FAULT) |     \
                                     PIN_ODR_HIGH(GPIOB_BOOT1) |            \
                                     PIN_ODR_HIGH(GPIOB_JTAG_TDO) |         \
                                     PIN_ODR_HIGH(GPIOB_JTAG_TRST) |        \
                                     PIN_ODR_HIGH(GPIOB_PWM_TURRET) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOB_I2C1_SCL) |         \
                                     PIN_ODR_HIGH(GPIOB_I2C1_SDA) |         \
                                     PIN_ODR_HIGH(GPIOB_USART3_TX) |         \
                                     PIN_ODR_HIGH(GPIOB_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_ID) |        \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_VBUS) |      \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_DM) |        \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_USB_FS_BUSON, 0) |   \
                                     PIN_AFIO_AF(GPIOB_USB_HS_FAULT, 0) |   \
                                     PIN_AFIO_AF(GPIOB_BOOT1, 0) |          \
                                     PIN_AFIO_AF(GPIOB_JTAG_TDO, 0) |       \
                                     PIN_AFIO_AF(GPIOB_JTAG_TRST, 0) |      \
                                     PIN_AFIO_AF(GPIOB_PWM_TURRET, 2) |           \
                                     PIN_AFIO_AF(GPIOB_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOB_PIN7, 0))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_I2C1_SCL, 4) |       \
                                     PIN_AFIO_AF(GPIOB_I2C1_SDA, 4) |       \
                                     PIN_AFIO_AF(GPIOB_USART3_TX, 7) |       \
                                     PIN_AFIO_AF(GPIOB_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_ID, 12) |     \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_VBUS, 0) |    \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_DM, 12) |     \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_DP, 12))

/*
 * GPIOC setup:
 *
 * PC0  - PIN0                      (input pullup).
 * PC1  - ETH_RMII_MDC              (alternate 11).
 * PC2  - SPI2_MISO                 (alternate 5).
 * PC3  - SPI2_MOSI                 (alternate 5).
 * PC4  - ETH_RMII_RXD0             (alternate 11).
 * PC5  - ETH_RMII_RXD1             (alternate 11).
 * PC6  - USART6_TX                 (alternate 8).
 * PC7  - USART6_RX                 (alternate 8).
 * PC8  - SD_D0                     (alternate 12).
 * PC9  - SD_D1                     (alternate 12).
 * PC10 - SD_D2                     (alternate 12).
 * PC11 - SD_D3                     (alternate 12).
 * PC12 - SD_CLK                    (alternate 12).
 * PC13 - LED                       (output pushpull maximum).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(GPIOC_PIN0) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_ETH_RMII_MDC) |\
                                     PIN_MODE_OUTPUT(GPIOC_LCD_RST) |  \
                                     PIN_MODE_OUTPUT(GPIOC_LCD_BL) |  \
                                     PIN_MODE_ALTERNATE(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_MODE_ALTERNATE(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_MODE_ALTERNATE(GPIOC_LCD_TX6) |  \
                                     PIN_MODE_ALTERNATE(GPIOC_LCD_RX6) |  \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_D0) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_D1) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_D2) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_D3) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_SD_CLK) |     \
                                     PIN_MODE_OUTPUT(GPIOC_LED) |           \
                                     PIN_MODE_INPUT(GPIOC_OSC32_IN) |       \
                                     PIN_MODE_INPUT(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_RMII_MDC) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_LCD_RST) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_LCD_BL) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_LCD_TX6) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_LCD_RX6) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_D0) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_D1) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_D2) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_D3) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SD_CLK) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_LED) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_IN) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_100M(GPIOC_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOC_ETH_RMII_MDC) |  \
                                     PIN_OSPEED_100M(GPIOC_LCD_RST) |     \
                                     PIN_OSPEED_100M(GPIOC_LCD_BL) |     \
                                     PIN_OSPEED_100M(GPIOC_ETH_RMII_RXD0) | \
                                     PIN_OSPEED_100M(GPIOC_ETH_RMII_RXD1) | \
                                     PIN_OSPEED_100M(GPIOC_LCD_TX6) |     \
                                     PIN_OSPEED_100M(GPIOC_LCD_RX6) |     \
                                     PIN_OSPEED_100M(GPIOC_SD_D0) |         \
                                     PIN_OSPEED_100M(GPIOC_SD_D1) |         \
                                     PIN_OSPEED_100M(GPIOC_SD_D2) |         \
                                     PIN_OSPEED_100M(GPIOC_SD_D3) |         \
                                     PIN_OSPEED_100M(GPIOC_SD_CLK) |        \
                                     PIN_OSPEED_100M(GPIOC_LED) |           \
                                     PIN_OSPEED_100M(GPIOC_OSC32_IN) |      \
                                     PIN_OSPEED_100M(GPIOC_OSC32_OUT))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_PULLUP(GPIOC_PIN0) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_RMII_MDC) |\
                                     PIN_PUPDR_FLOATING(GPIOC_LCD_RST) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_LCD_BL) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_RMII_RXD0) |\
                                     PIN_PUPDR_FLOATING(GPIOC_ETH_RMII_RXD1) |\
                                     PIN_PUPDR_FLOATING(GPIOC_LCD_TX6) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_LCD_RX6) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_D0) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_D1) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_D2) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_D3) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_SD_CLK) |     \
                                     PIN_PUPDR_FLOATING(GPIOC_LED) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_IN) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_OUT))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOC_ETH_RMII_MDC) |     \
                                     PIN_ODR_LOW(GPIOC_LCD_RST) |        \
                                     PIN_ODR_LOW(GPIOC_LCD_BL) |        \
                                     PIN_ODR_HIGH(GPIOC_ETH_RMII_RXD0) |    \
                                     PIN_ODR_HIGH(GPIOC_ETH_RMII_RXD1) |    \
                                     PIN_ODR_LOW(GPIOC_LCD_TX6) |        \
                                     PIN_ODR_LOW(GPIOC_LCD_RX6) |        \
                                     PIN_ODR_HIGH(GPIOC_SD_D0) |            \
                                     PIN_ODR_HIGH(GPIOC_SD_D1) |            \
                                     PIN_ODR_HIGH(GPIOC_SD_D2) |            \
                                     PIN_ODR_HIGH(GPIOC_SD_D3) |            \
                                     PIN_ODR_HIGH(GPIOC_SD_CLK) |           \
                                     PIN_ODR_HIGH(GPIOC_LED) |              \
                                     PIN_ODR_HIGH(GPIOC_OSC32_IN) |         \
                                     PIN_ODR_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOC_ETH_RMII_MDC, 11) |  \
                                     PIN_AFIO_AF(GPIOC_LCD_RST, 0) |      \
                                     PIN_AFIO_AF(GPIOC_LCD_BL, 0) |      \
                                     PIN_AFIO_AF(GPIOC_ETH_RMII_RXD0, 11) | \
                                     PIN_AFIO_AF(GPIOC_ETH_RMII_RXD1, 11) | \
                                     PIN_AFIO_AF(GPIOC_LCD_TX6, 8) |      \
                                     PIN_AFIO_AF(GPIOC_LCD_RX6, 8))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_SD_D0, 12) |         \
                                     PIN_AFIO_AF(GPIOC_SD_D1, 12) |         \
                                     PIN_AFIO_AF(GPIOC_SD_D2, 12) |         \
                                     PIN_AFIO_AF(GPIOC_SD_D3, 12) |         \
                                     PIN_AFIO_AF(GPIOC_SD_CLK, 12) |        \
                                     PIN_AFIO_AF(GPIOC_LED, 0) |            \
                                     PIN_AFIO_AF(GPIOC_OSC32_IN, 0) |       \
                                     PIN_AFIO_AF(GPIOC_OSC32_OUT, 0))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - SD_CMD                    (alternate 12).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_JOYSTICK_DOWN) |           \
                                     PIN_MODE_INPUT(GPIOD_JOYSTICK_LEFT) |           \
                                     PIN_MODE_INPUT(GPIOD_JOYSTICK_RIGHT) |     \
                                     PIN_MODE_INPUT(GPIOD_JOYSTICK_CLICK) |           \
                                     PIN_MODE_INPUT(GPIOD_JOYSTICK_UP) |           \
                                     PIN_MODE_INPUT(GPIOD_KNOB_LVTTL) |           \
                                     PIN_MODE_INPUT(GPIOD_KNOB_OFF) |           \
                                     PIN_MODE_INPUT(GPIOD_KNOB_RS485) |           \
                                     PIN_MODE_INPUT(GPIOD_KNOB_ANALOG) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_USART3_RX) |           \
                                     PIN_MODE_INPUT(GPIOD_KNOB_TUNING) |          \
                                     PIN_MODE_INPUT(GPIOD_KNOB_ETHERNET) |          \
                                     PIN_MODE_ALTERNATE(GPIOD_PWM_ELBOW) |          \
                                     PIN_MODE_ALTERNATE(GPIOD_PWM_SHOULDER) |          \
                                     PIN_MODE_ALTERNATE(GPIOD_PWM_CLAMP) |          \
                                     PIN_MODE_ALTERNATE(GPIOD_PWM_WRIST))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_JOYSTICK_DOWN) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_JOYSTICK_LEFT) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_JOYSTICK_RIGHT) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_JOYSTICK_CLICK) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_JOYSTICK_UP) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_KNOB_LVTTL) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_KNOB_OFF) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_KNOB_RS485) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_KNOB_ANALOG) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_USART3_RX) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_KNOB_TUNING) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_KNOB_ETHERNET) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PWM_ELBOW) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PWM_SHOULDER) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PWM_CLAMP) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PWM_WRIST))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_100M(GPIOD_JOYSTICK_DOWN) |          \
                                     PIN_OSPEED_100M(GPIOD_JOYSTICK_LEFT) |          \
                                     PIN_OSPEED_100M(GPIOD_JOYSTICK_RIGHT) |        \
                                     PIN_OSPEED_100M(GPIOD_JOYSTICK_CLICK) |          \
                                     PIN_OSPEED_100M(GPIOD_JOYSTICK_UP) |          \
                                     PIN_OSPEED_100M(GPIOD_KNOB_LVTTL) |          \
                                     PIN_OSPEED_100M(GPIOD_KNOB_OFF) |          \
                                     PIN_OSPEED_100M(GPIOD_KNOB_RS485) |          \
                                     PIN_OSPEED_100M(GPIOD_KNOB_ANALOG) |          \
                                     PIN_OSPEED_100M(GPIOD_USART3_RX) |          \
                                     PIN_OSPEED_100M(GPIOD_KNOB_TUNING) |         \
                                     PIN_OSPEED_100M(GPIOD_KNOB_ETHERNET) |         \
                                     PIN_OSPEED_100M(GPIOD_PWM_ELBOW) |         \
                                     PIN_OSPEED_100M(GPIOD_PWM_SHOULDER) |         \
                                     PIN_OSPEED_100M(GPIOD_PWM_CLAMP) |         \
                                     PIN_OSPEED_100M(GPIOD_PWM_WRIST))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_JOYSTICK_DOWN) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_JOYSTICK_LEFT) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_JOYSTICK_RIGHT) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_JOYSTICK_CLICK) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_JOYSTICK_UP) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_KNOB_LVTTL) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_KNOB_OFF) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_KNOB_RS485) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_KNOB_ANALOG) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_USART3_RX) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_KNOB_TUNING) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_KNOB_ETHERNET) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PWM_ELBOW) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PWM_SHOULDER) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PWM_CLAMP) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_PWM_WRIST))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_JOYSTICK_DOWN) |             \
                                     PIN_ODR_HIGH(GPIOD_JOYSTICK_LEFT) |             \
                                     PIN_ODR_HIGH(GPIOD_JOYSTICK_RIGHT) |           \
                                     PIN_ODR_HIGH(GPIOD_JOYSTICK_CLICK) |             \
                                     PIN_ODR_HIGH(GPIOD_JOYSTICK_UP) |             \
                                     PIN_ODR_HIGH(GPIOD_KNOB_LVTTL) |             \
                                     PIN_ODR_HIGH(GPIOD_KNOB_OFF) |             \
                                     PIN_ODR_HIGH(GPIOD_KNOB_RS485) |             \
                                     PIN_ODR_HIGH(GPIOD_KNOB_ANALOG) |             \
                                     PIN_ODR_HIGH(GPIOD_USART3_RX) |             \
                                     PIN_ODR_HIGH(GPIOD_KNOB_TUNING) |            \
                                     PIN_ODR_HIGH(GPIOD_KNOB_ETHERNET) |            \
                                     PIN_ODR_HIGH(GPIOD_PWM_ELBOW) |            \
                                     PIN_ODR_HIGH(GPIOD_PWM_SHOULDER) |            \
                                     PIN_ODR_HIGH(GPIOD_PWM_CLAMP) |            \
                                     PIN_ODR_HIGH(GPIOD_PWM_WRIST))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_JOYSTICK_DOWN, 0) |           \
                                     PIN_AFIO_AF(GPIOD_JOYSTICK_LEFT, 0) |           \
                                     PIN_AFIO_AF(GPIOD_JOYSTICK_RIGHT, 0) |        \
                                     PIN_AFIO_AF(GPIOD_JOYSTICK_CLICK, 0) |           \
                                     PIN_AFIO_AF(GPIOD_JOYSTICK_UP, 0) |           \
                                     PIN_AFIO_AF(GPIOD_KNOB_LVTTL, 0) |           \
                                     PIN_AFIO_AF(GPIOD_KNOB_OFF, 0) |           \
                                     PIN_AFIO_AF(GPIOD_KNOB_RS485, 0))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_KNOB_ANALOG, 0) |           \
                                     PIN_AFIO_AF(GPIOD_USART3_RX, 7) |           \
                                     PIN_AFIO_AF(GPIOD_KNOB_TUNING, 0) |          \
                                     PIN_AFIO_AF(GPIOD_KNOB_ETHERNET, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PWM_ELBOW, 2) |          \
                                     PIN_AFIO_AF(GPIOD_PWM_SHOULDER, 2) |          \
                                     PIN_AFIO_AF(GPIOD_PWM_CLAMP, 2) |          \
                                     PIN_AFIO_AF(GPIOD_PWM_WRIST, 2))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input pullup).
 * PE1  - PIN1                      (input pullup).
 * PE2  - PIN2                      (input pullup).
 * PE3  - PIN3                      (input pullup).
 * PE4  - PIN4                      (input pullup).
 * PE5  - PIN5                      (input pullup).
 * PE6  - PIN6                      (input pullup).
 * PE7  - PIN7                      (input pullup).
 * PE8  - PIN8                      (input pullup).
 * PE9  - PIN9                      (input pullup).
 * PE10 - PIN10                     (input pullup).
 * PE11 - PIN11                     (input pullup).
 * PE12 - PIN12                     (input pullup).
 * PE13 - PIN13                     (input pullup).
 * PE14 - PIN14                     (input pullup).
 * PE15 - PIN15                     (input pullup).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_ARM_BOARD_PLUGGED) |           \
                                     PIN_MODE_INPUT(GPIOE_LCD_BOARD_PLUGGED) |           \
                                     PIN_MODE_INPUT(GPIOE_DAUGHTERBOARD_PLUGGED) |           \
                                     PIN_MODE_INPUT(GPIOE_CMD_CLAMP_DIR) |           \
                                     PIN_MODE_INPUT(GPIOE_CMD_CLAMP) |           \
                                     PIN_MODE_INPUT(GPIOE_CMD_WRIST_DIR) |           \
                                     PIN_MODE_INPUT(GPIOE_CMD_WRIST) |           \
                                     PIN_MODE_INPUT(GPIOE_CMD_ELBOW_DIR) |           \
                                     PIN_MODE_INPUT(GPIOE_CMD_ELBOW) |           \
                                     PIN_MODE_INPUT(GPIOE_CMD_SHOULDER_DIR) |          \
                                     PIN_MODE_INPUT(GPIOE_CMD_SHOULDER) |          \
                                     PIN_MODE_INPUT(GPIOE_CMD_TURRET_DIR) |          \
                                     PIN_MODE_INPUT(GPIOE_CMD_TURRET) |          \
                                     PIN_MODE_INPUT(GPIOE_BUTTON_RED) |          \
                                     PIN_MODE_INPUT(GPIOE_BUTTON_GREEN))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_ARM_BOARD_PLUGGED) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_LCD_BOARD_PLUGGED) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_DAUGHTERBOARD_PLUGGED) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_CLAMP_DIR) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_CLAMP) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_WRIST_DIR) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_WRIST) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_ELBOW_DIR) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_ELBOW) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_SHOULDER_DIR) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_SHOULDER) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_TURRET_DIR) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CMD_TURRET) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_BUTTON_RED) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_BUTTON_GREEN))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_100M(GPIOE_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOE_ARM_BOARD_PLUGGED) |          \
                                     PIN_OSPEED_100M(GPIOE_LCD_BOARD_PLUGGED) |          \
                                     PIN_OSPEED_100M(GPIOE_DAUGHTERBOARD_PLUGGED) |          \
                                     PIN_OSPEED_100M(GPIOE_CMD_CLAMP_DIR) |          \
                                     PIN_OSPEED_100M(GPIOE_CMD_CLAMP) |          \
                                     PIN_OSPEED_100M(GPIOE_CMD_WRIST_DIR) |          \
                                     PIN_OSPEED_100M(GPIOE_CMD_WRIST) |          \
                                     PIN_OSPEED_100M(GPIOE_CMD_ELBOW_DIR) |          \
                                     PIN_OSPEED_100M(GPIOE_CMD_ELBOW) |          \
                                     PIN_OSPEED_100M(GPIOE_CMD_SHOULDER_DIR) |         \
                                     PIN_OSPEED_100M(GPIOE_CMD_SHOULDER) |         \
                                     PIN_OSPEED_100M(GPIOE_CMD_TURRET_DIR) |         \
                                     PIN_OSPEED_100M(GPIOE_CMD_TURRET) |         \
                                     PIN_OSPEED_100M(GPIOE_BUTTON_RED) |         \
                                     PIN_OSPEED_100M(GPIOE_BUTTON_GREEN))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_PIN0) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOE_ARM_BOARD_PLUGGED) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOE_LCD_BOARD_PLUGGED) |         \
                                     PIN_PUPDR_PULLDOWN(GPIOE_DAUGHTERBOARD_PLUGGED) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_CLAMP_DIR) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_CLAMP) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_WRIST_DIR) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_WRIST) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_ELBOW_DIR) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_ELBOW) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_SHOULDER_DIR) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_SHOULDER) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_TURRET_DIR) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_CMD_TURRET) |        \
                                     PIN_PUPDR_FLOATING(GPIOE_BUTTON_RED) |        \
                                     PIN_PUPDR_FLOATING(GPIOE_BUTTON_GREEN))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_ARM_BOARD_PLUGGED) |             \
                                     PIN_ODR_HIGH(GPIOE_LCD_BOARD_PLUGGED) |             \
                                     PIN_ODR_HIGH(GPIOE_DAUGHTERBOARD_PLUGGED) |             \
                                     PIN_ODR_HIGH(GPIOE_CMD_CLAMP_DIR) |             \
                                     PIN_ODR_HIGH(GPIOE_CMD_CLAMP) |             \
                                     PIN_ODR_HIGH(GPIOE_CMD_WRIST_DIR) |             \
                                     PIN_ODR_HIGH(GPIOE_CMD_WRIST) |             \
                                     PIN_ODR_HIGH(GPIOE_CMD_ELBOW_DIR) |             \
                                     PIN_ODR_HIGH(GPIOE_CMD_ELBOW) |             \
                                     PIN_ODR_HIGH(GPIOE_CMD_SHOULDER_DIR) |            \
                                     PIN_ODR_HIGH(GPIOE_CMD_SHOULDER) |            \
                                     PIN_ODR_HIGH(GPIOE_CMD_TURRET_DIR) |            \
                                     PIN_ODR_HIGH(GPIOE_CMD_TURRET) |            \
                                     PIN_ODR_HIGH(GPIOE_BUTTON_RED) |            \
                                     PIN_ODR_HIGH(GPIOE_BUTTON_GREEN))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOE_ARM_BOARD_PLUGGED, 0) |           \
                                     PIN_AFIO_AF(GPIOE_LCD_BOARD_PLUGGED, 0) |           \
                                     PIN_AFIO_AF(GPIOE_DAUGHTERBOARD_PLUGGED, 0) |           \
                                     PIN_AFIO_AF(GPIOE_CMD_CLAMP_DIR, 0) |           \
                                     PIN_AFIO_AF(GPIOE_CMD_CLAMP, 0) |           \
                                     PIN_AFIO_AF(GPIOE_CMD_WRIST_DIR, 0) |           \
                                     PIN_AFIO_AF(GPIOE_CMD_WRIST, 0))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_CMD_ELBOW_DIR, 0) |           \
                                     PIN_AFIO_AF(GPIOE_CMD_ELBOW, 0) |	\
                                     PIN_AFIO_AF(GPIOE_CMD_SHOULDER_DIR, 0) |          \
                                     PIN_AFIO_AF(GPIOE_CMD_SHOULDER, 0) |          \
                                     PIN_AFIO_AF(GPIOE_CMD_TURRET_DIR, 0) |          \
                                     PIN_AFIO_AF(GPIOE_CMD_TURRET, 0) |          \
                                     PIN_AFIO_AF(GPIOE_BUTTON_RED, 0) |          \
                                     PIN_AFIO_AF(GPIOE_BUTTON_GREEN, 0))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input pullup).
 * PF1  - PIN1                      (input pullup).
 * PF2  - PIN2                      (input pullup).
 * PF3  - PIN3                      (input pullup).
 * PF4  - PIN4                      (input pullup).
 * PF5  - PIN5                      (input pullup).
 * PF6  - PIN6                      (input pullup).
 * PF7  - PIN7                      (input pullup).
 * PF8  - PIN8                      (input pullup).
 * PF9  - PIN9                      (input pullup).
 * PF10 - PIN10                     (input pullup).
 * PF11 - USB_FS_FAULT              (input floating).
 * PF12 - PIN12                     (input pullup).
 * PF13 - PIN13                     (input pullup).
 * PF14 - PIN14                     (input pullup).
 * PF15 - PIN15                     (input pullup).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_ALTERNATE(GPIOF_I2C2_SDA) |           \
                                     PIN_MODE_ALTERNATE(GPIOF_I2C2_SCL) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_ANALOG(GPIOF_ADC_CMD_CLAMP) |           \
                                     PIN_MODE_ANALOG(GPIOF_ADC_CMD_WRIST) |           \
                                     PIN_MODE_ANALOG(GPIOF_ADC_CMD_SHOULDER) |           \
                                     PIN_MODE_ANALOG(GPIOF_ADC_CMD_ELBOW) |           \
                                     PIN_MODE_ANALOG(GPIOF_ADC_CMD_TURRET) |           \
                                     PIN_MODE_OUTPUT(GPIOF_NAKED_TEST_OUT) |           \
                                     PIN_MODE_INPUT(GPIOF_NAKED_TEST_IN) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_RAPIDE_IN) |   \
                                     PIN_MODE_OUTPUT(GPIOF_STOP_TURRET_RIGHT) |          \
                                     PIN_MODE_OUTPUT(GPIOF_LED_RED) |          \
                                     PIN_MODE_OUTPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_OPENDRAIN(GPIOF_I2C2_SDA) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_I2C2_SCL) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ADC_CMD_CLAMP) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ADC_CMD_WRIST) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ADC_CMD_SHOULDER) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ADC_CMD_ELBOW) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_ADC_CMD_TURRET) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOF_NAKED_TEST_OUT) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_NAKED_TEST_IN) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_RAPIDE_IN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_STOP_TURRET_RIGHT) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_LED_RED) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_100M(GPIOF_I2C2_SDA) |          \
                                     PIN_OSPEED_100M(GPIOF_I2C2_SCL) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOF_ADC_CMD_CLAMP) |          \
                                     PIN_OSPEED_100M(GPIOF_ADC_CMD_WRIST) |          \
                                     PIN_OSPEED_100M(GPIOF_ADC_CMD_SHOULDER) |          \
                                     PIN_OSPEED_100M(GPIOF_ADC_CMD_ELBOW) |          \
                                     PIN_OSPEED_100M(GPIOF_ADC_CMD_TURRET) |          \
                                     PIN_OSPEED_100M(GPIOF_NAKED_TEST_OUT) |          \
                                     PIN_OSPEED_100M(GPIOF_NAKED_TEST_IN) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOF_RAPIDE_IN) |  \
                                     PIN_OSPEED_100M(GPIOF_STOP_TURRET_RIGHT) |         \
                                     PIN_OSPEED_100M(GPIOF_LED_RED) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_I2C2_SDA) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_I2C2_SCL) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_ADC_CMD_CLAMP) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_ADC_CMD_WRIST) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_ADC_CMD_SHOULDER) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_ADC_CMD_ELBOW) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_ADC_CMD_TURRET) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_NAKED_TEST_OUT) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_NAKED_TEST_IN) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN10) |        \
                                     PIN_PUPDR_FLOATING(GPIOF_RAPIDE_IN) |\
                                     PIN_PUPDR_FLOATING(GPIOF_STOP_TURRET_RIGHT) |        \
                                     PIN_PUPDR_FLOATING(GPIOF_LED_RED) |        \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_I2C2_SDA) |             \
                                     PIN_ODR_HIGH(GPIOF_I2C2_SCL) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_ADC_CMD_CLAMP) |             \
                                     PIN_ODR_HIGH(GPIOF_ADC_CMD_WRIST) |             \
                                     PIN_ODR_HIGH(GPIOF_ADC_CMD_SHOULDER) |             \
                                     PIN_ODR_HIGH(GPIOF_ADC_CMD_ELBOW) |             \
                                     PIN_ODR_HIGH(GPIOF_ADC_CMD_TURRET) |             \
                                     PIN_ODR_HIGH(GPIOF_NAKED_TEST_OUT) |             \
                                     PIN_ODR_HIGH(GPIOF_NAKED_TEST_IN) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_RAPIDE_IN) |     \
                                     PIN_ODR_LOW(GPIOF_STOP_TURRET_RIGHT) |            \
                                     PIN_ODR_LOW(GPIOF_LED_RED) |            \
                                     PIN_ODR_LOW(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_I2C2_SDA, 4) |           \
                                     PIN_AFIO_AF(GPIOF_I2C2_SCL, 4) |           \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOF_ADC_CMD_CLAMP, 0) |           \
                                     PIN_AFIO_AF(GPIOF_ADC_CMD_WRIST, 0) |           \
                                     PIN_AFIO_AF(GPIOF_ADC_CMD_SHOULDER, 0) |           \
                                     PIN_AFIO_AF(GPIOF_ADC_CMD_ELBOW, 0) |           \
                                     PIN_AFIO_AF(GPIOF_ADC_CMD_TURRET, 0))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_NAKED_TEST_OUT, 0) |           \
                                     PIN_AFIO_AF(GPIOF_NAKED_TEST_IN, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOF_RAPIDE_IN, 0) |   \
                                     PIN_AFIO_AF(GPIOF_STOP_TURRET_RIGHT, 0) |          \
                                     PIN_AFIO_AF(GPIOF_LED_RED, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input pullup).
 * PG1  - PIN1                      (input pullup).
 * PG2  - PIN2                      (input pullup).
 * PG3  - PIN3                      (input pullup).
 * PG4  - PIN4                      (input pullup).
 * PG5  - PIN5                      (input pullup).
 * PG6  - PIN6                      (input pullup).
 * PG7  - PIN7                      (input pullup).
 * PG8  - PIN8                      (input pullup).
 * PG9  - PIN9                      (input pullup).
 * PG10 - SPI2_CS                   (output pushpull maximum).
 * PG11 - ETH_RMII_TXEN             (alternate 11).
 * PG12 - PIN12                     (input pullup).
 * PG13 - ETH_RMII_TXD0             (alternate 11).
 * PG14 - ETH_RMII_TXD1             (alternate 11).
 * PG15 - PIN15                     (input pullup).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_OUTPUT(GPIOG_STOP_CLAMP_OPEN) |           \
                                     PIN_MODE_OUTPUT(GPIOG_STOP_CLAMP_CLOSED) |           \
                                     PIN_MODE_OUTPUT(GPIOG_STOP_WRIST_HIGH) |           \
                                     PIN_MODE_OUTPUT(GPIOG_STOP_WRIST_LOW) |           \
                                     PIN_MODE_OUTPUT(GPIOG_STOP_ELBOW_HIGH) |           \
                                     PIN_MODE_OUTPUT(GPIOG_STOP_ELBOW_LOW) |           \
                                     PIN_MODE_OUTPUT(GPIOG_STOP_SHOULDER_FRONT) |           \
                                     PIN_MODE_OUTPUT(GPIOG_LCD_SCK) |           \
                                     PIN_MODE_OUTPUT(GPIOG_STOP_TURRET_LEFT) |           \
                                     PIN_MODE_OUTPUT(GPIOG_STOP_SHOULDER_BACK) |           \
                                     PIN_MODE_OUTPUT(GPIOG_LCD_CS) |       \
                                     PIN_MODE_ALTERNATE(GPIOG_ETH_RMII_TXEN) |\
                                     PIN_MODE_OUTPUT(GPIOG_LED_GREEN) |          \
                                     PIN_MODE_ALTERNATE(GPIOG_ETH_RMII_TXD0) |\
                                     PIN_MODE_ALTERNATE(GPIOG_ETH_RMII_TXD1) |\
                                     PIN_MODE_OUTPUT(GPIOG_RAPIDE_OUT))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_STOP_CLAMP_OPEN) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_STOP_CLAMP_CLOSED) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_STOP_WRIST_HIGH) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_STOP_WRIST_LOW) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_STOP_ELBOW_HIGH) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_STOP_ELBOW_LOW) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_STOP_SHOULDER_FRONT) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_LCD_SCK) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_STOP_TURRET_LEFT) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_STOP_SHOULDER_BACK) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_LCD_CS) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_ETH_RMII_TXEN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_LED_GREEN) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_ETH_RMII_TXD0) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_ETH_RMII_TXD1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_RAPIDE_OUT))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_100M(GPIOG_STOP_CLAMP_OPEN) |          \
                                     PIN_OSPEED_100M(GPIOG_STOP_CLAMP_CLOSED) |          \
                                     PIN_OSPEED_100M(GPIOG_STOP_WRIST_HIGH) |          \
                                     PIN_OSPEED_100M(GPIOG_STOP_WRIST_LOW) |          \
                                     PIN_OSPEED_100M(GPIOG_STOP_ELBOW_HIGH) |          \
                                     PIN_OSPEED_100M(GPIOG_STOP_ELBOW_LOW) |          \
                                     PIN_OSPEED_100M(GPIOG_STOP_SHOULDER_FRONT) |          \
                                     PIN_OSPEED_100M(GPIOG_LCD_SCK) |          \
                                     PIN_OSPEED_100M(GPIOG_STOP_TURRET_LEFT) |          \
                                     PIN_OSPEED_100M(GPIOG_STOP_SHOULDER_BACK) |          \
                                     PIN_OSPEED_100M(GPIOG_LCD_CS) |       \
                                     PIN_OSPEED_100M(GPIOG_ETH_RMII_TXEN) | \
                                     PIN_OSPEED_100M(GPIOG_LED_GREEN) |         \
                                     PIN_OSPEED_100M(GPIOG_ETH_RMII_TXD0) | \
                                     PIN_OSPEED_100M(GPIOG_ETH_RMII_TXD1) | \
                                     PIN_OSPEED_100M(GPIOG_RAPIDE_OUT))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_FLOATING(GPIOG_STOP_CLAMP_OPEN) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_STOP_CLAMP_CLOSED) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_STOP_WRIST_HIGH) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_STOP_WRIST_LOW) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_STOP_ELBOW_HIGH) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_STOP_ELBOW_LOW) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_STOP_SHOULDER_FRONT) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_LCD_SCK) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_STOP_TURRET_LEFT) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_STOP_SHOULDER_BACK) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_LCD_CS) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_ETH_RMII_TXEN) |\
                                     PIN_PUPDR_FLOATING(GPIOG_LED_GREEN) |        \
                                     PIN_PUPDR_FLOATING(GPIOG_ETH_RMII_TXD0) |\
                                     PIN_PUPDR_FLOATING(GPIOG_ETH_RMII_TXD1) |\
                                     PIN_PUPDR_FLOATING(GPIOG_RAPIDE_OUT))
#define VAL_GPIOG_ODR               (PIN_ODR_LOW(GPIOG_STOP_CLAMP_OPEN) |             \
                                     PIN_ODR_LOW(GPIOG_STOP_CLAMP_CLOSED) |             \
                                     PIN_ODR_LOW(GPIOG_STOP_WRIST_LOW) |             \
                                     PIN_ODR_LOW(GPIOG_STOP_WRIST_LOW) |             \
                                     PIN_ODR_LOW(GPIOG_STOP_ELBOW_LOW) |             \
                                     PIN_ODR_LOW(GPIOG_STOP_ELBOW_LOW) |             \
                                     PIN_ODR_LOW(GPIOG_STOP_SHOULDER_FRONT) |             \
                                     PIN_ODR_LOW(GPIOG_LCD_SCK) |             \
                                     PIN_ODR_LOW(GPIOG_STOP_TURRET_LEFT) |             \
                                     PIN_ODR_LOW(GPIOG_STOP_SHOULDER_BACK) |             \
                                     PIN_ODR_LOW(GPIOG_LCD_CS) |          \
                                     PIN_ODR_HIGH(GPIOG_ETH_RMII_TXEN) |    \
                                     PIN_ODR_LOW(GPIOG_LED_GREEN) |            \
                                     PIN_ODR_HIGH(GPIOG_ETH_RMII_TXD0) |    \
                                     PIN_ODR_HIGH(GPIOG_ETH_RMII_TXD1) |    \
                                     PIN_ODR_LOW(GPIOG_RAPIDE_OUT))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_STOP_CLAMP_OPEN, 0) |           \
                                     PIN_AFIO_AF(GPIOG_STOP_CLAMP_CLOSED, 0) |           \
                                     PIN_AFIO_AF(GPIOG_STOP_WRIST_HIGH, 0) |           \
                                     PIN_AFIO_AF(GPIOG_STOP_WRIST_LOW, 0) |           \
                                     PIN_AFIO_AF(GPIOG_STOP_ELBOW_HIGH, 0) |           \
                                     PIN_AFIO_AF(GPIOG_STOP_ELBOW_LOW, 0) |           \
                                     PIN_AFIO_AF(GPIOG_STOP_SHOULDER_FRONT, 0) |           \
                                     PIN_AFIO_AF(GPIOG_LCD_SCK, 0))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_STOP_TURRET_LEFT, 0) |           \
                                     PIN_AFIO_AF(GPIOG_STOP_SHOULDER_BACK, 0) |           \
                                     PIN_AFIO_AF(GPIOG_LCD_CS, 0) |        \
                                     PIN_AFIO_AF(GPIOG_ETH_RMII_TXEN, 11) | \
                                     PIN_AFIO_AF(GPIOG_LED_GREEN, 0) |          \
                                     PIN_AFIO_AF(GPIOG_ETH_RMII_TXD0, 11) | \
                                     PIN_AFIO_AF(GPIOG_ETH_RMII_TXD1, 11) | \
                                     PIN_AFIO_AF(GPIOG_RAPIDE_OUT, 0))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - PIN2                      (input pullup).
 * PH3  - PIN3                      (input pullup).
 * PH4  - PIN4                      (input pullup).
 * PH5  - PIN5                      (input pullup).
 * PH6  - PIN6                      (input pullup).
 * PH7  - PIN7                      (input pullup).
 * PH8  - PIN8                      (input pullup).
 * PH9  - PIN9                      (input pullup).
 * PH10 - PIN10                     (input pullup).
 * PH11 - PIN11                     (input pullup).
 * PH12 - PIN12                     (input pullup).
 * PH13 - PIN13                     (input pullup).
 * PH14 - PIN14                     (input pullup).
 * PH15 - PIN15                     (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_100M(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_100M(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_100M(GPIOH_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0) |         \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0) |        \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0))

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input pullup).
 * PI1  - PIN1                      (input pullup).
 * PI2  - PIN2                      (input pullup).
 * PI3  - PIN3                      (input pullup).
 * PI4  - PIN4                      (input pullup).
 * PI5  - PIN5                      (input pullup).
 * PI6  - PIN6                      (input pullup).
 * PI7  - PIN7                      (input pullup).
 * PI8  - PIN8                      (input pullup).
 * PI9  - PIN9                      (input pullup).
 * PI10 - PIN10                     (input pullup).
 * PI11 - PIN11                     (input pullup).
 * PI12 - PIN12                     (input pullup).
 * PI13 - PIN13                     (input pullup).
 * PI14 - PIN14                     (input pullup).
 * PI15 - PIN15                     (input pullup).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_100M(GPIOI_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLUP(GPIOI_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
