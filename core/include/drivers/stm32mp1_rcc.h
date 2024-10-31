/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2017-2018, STMicroelectronics
 */

#ifndef __DRIVERS_STM32MP1_RCC_H__
#define __DRIVERS_STM32MP1_RCC_H__

#include <util.h>

#define RCC_TZCR			0x00
#define RCC_OCENSETR			0x0C
#define RCC_OCENCLRR			0x10
#define RCC_HSICFGR			0x18
#define RCC_CSICFGR			0x1C
#define RCC_MPCKSELR			0x20
#define RCC_ASSCKSELR			0x24
#define RCC_RCK12SELR			0x28
#define RCC_MPCKDIVR			0x2C
#define RCC_AXIDIVR			0x30
#define RCC_APB4DIVR			0x3C
#define RCC_APB5DIVR			0x40
#define RCC_RTCDIVR			0x44
#define RCC_MSSCKSELR			0x48
#define RCC_PLL1CR			0x80
#define RCC_PLL1CFGR1			0x84
#define RCC_PLL1CFGR2			0x88
#define RCC_PLL1FRACR			0x8C
#define RCC_PLL1CSGR			0x90
#define RCC_PLL2CR			0x94
#define RCC_PLL2CFGR1			0x98
#define RCC_PLL2CFGR2			0x9C
#define RCC_PLL2FRACR			0xA0
#define RCC_PLL2CSGR			0xA4
#define RCC_I2C46CKSELR			0xC0
#define RCC_SPI6CKSELR			0xC4
#define RCC_UART1CKSELR			0xC8
#define RCC_RNG1CKSELR			0xCC
#define RCC_CPERCKSELR			0xD0
#define RCC_STGENCKSELR			0xD4
#define RCC_DDRITFCR			0xD8
#define RCC_MP_BOOTCR			0x100
#define RCC_MP_SREQSETR			0x104
#define RCC_MP_SREQCLRR			0x108
#define RCC_MP_GCR			0x10C
#define RCC_MP_APRSTCR			0x110
#define RCC_MP_APRSTSR			0x114
#define RCC_BDCR			0x140
#define RCC_RDLSICR			0x144
#define RCC_APB4RSTSETR			0x180
#define RCC_APB4RSTCLRR			0x184
#define RCC_APB5RSTSETR			0x188
#define RCC_APB5RSTCLRR			0x18C
#define RCC_AHB5RSTSETR			0x190
#define RCC_AHB5RSTCLRR			0x194
#define RCC_AHB6RSTSETR			0x198
#define RCC_AHB6RSTCLRR			0x19C
#define RCC_TZAHB6RSTSETR		0x1A0
#define RCC_TZAHB6RSTCLRR		0x1A4
#define RCC_MP_APB4ENSETR		0x200
#define RCC_MP_APB4ENCLRR		0x204
#define RCC_MP_APB5ENSETR		0x208
#define RCC_MP_APB5ENCLRR		0x20C
#define RCC_MP_AHB5ENSETR		0x210
#define RCC_MP_AHB5ENCLRR		0x214
#define RCC_MP_AHB6ENSETR		0x218
#define RCC_MP_AHB6ENCLRR		0x21C
#define RCC_MP_TZAHB6ENSETR		0x220
#define RCC_MP_TZAHB6ENCLRR		0x224
#define RCC_MC_APB4ENSETR		0x280
#define RCC_MC_APB4ENCLRR		0x284
#define RCC_MC_APB5ENSETR		0x288
#define RCC_MC_APB5ENCLRR		0x28C
#define RCC_MC_AHB5ENSETR		0x290
#define RCC_MC_AHB5ENCLRR		0x294
#define RCC_MC_AHB6ENSETR		0x298
#define RCC_MC_AHB6ENCLRR		0x29C
#define RCC_MP_APB4LPENSETR		0x300
#define RCC_MP_APB4LPENCLRR		0x304
#define RCC_MP_APB5LPENSETR		0x308
#define RCC_MP_APB5LPENCLRR		0x30C
#define RCC_MP_AHB5LPENSETR		0x310
#define RCC_MP_AHB5LPENCLRR		0x314
#define RCC_MP_AHB6LPENSETR		0x318
#define RCC_MP_AHB6LPENCLRR		0x31C
#define RCC_MP_TZAHB6LPENSETR		0x320
#define RCC_MP_TZAHB6LPENCLRR		0x324
#define RCC_MC_APB4LPENSETR		0x380
#define RCC_MC_APB4LPENCLRR		0x384
#define RCC_MC_APB5LPENSETR		0x388
#define RCC_MC_APB5LPENCLRR		0x38C
#define RCC_MC_AHB5LPENSETR		0x390
#define RCC_MC_AHB5LPENCLRR		0x394
#define RCC_MC_AHB6LPENSETR		0x398
#define RCC_MC_AHB6LPENCLRR		0x39C
#define RCC_BR_RSTSCLRR			0x400
#define RCC_MP_GRSTCSETR		0x404
#define RCC_MP_RSTSCLRR			0x408
#define RCC_MP_IWDGFZSETR		0x40C
#define RCC_MP_IWDGFZCLRR		0x410
#define RCC_MP_CIER			0x414
#define RCC_MP_CIFR			0x418
#define RCC_PWRLPDLYCR			0x41C
#define RCC_MP_RSTSSETR			0x420
#define RCC_MCO1CFGR			0x800
#define RCC_MCO2CFGR			0x804
#define RCC_OCRDYR			0x808
#define RCC_DBGCFGR			0x80C
#define RCC_RCK3SELR			0x820
#define RCC_RCK4SELR			0x824
#define RCC_TIMG1PRER			0x828
#define RCC_TIMG2PRER			0x82C
#define RCC_MCUDIVR			0x830
#define RCC_APB1DIVR			0x834
#define RCC_APB2DIVR			0x838
#define RCC_APB3DIVR			0x83C
#define RCC_PLL3CR			0x880
#define RCC_PLL3CFGR1			0x884
#define RCC_PLL3CFGR2			0x888
#define RCC_PLL3FRACR			0x88C
#define RCC_PLL3CSGR			0x890
#define RCC_PLL4CR			0x894
#define RCC_PLL4CFGR1			0x898
#define RCC_PLL4CFGR2			0x89C
#define RCC_PLL4FRACR			0x8A0
#define RCC_PLL4CSGR			0x8A4
#define RCC_I2C12CKSELR			0x8C0
#define RCC_I2C35CKSELR			0x8C4
#define RCC_SAI1CKSELR			0x8C8
#define RCC_SAI2CKSELR			0x8CC
#define RCC_SAI3CKSELR			0x8D0
#define RCC_SAI4CKSELR			0x8D4
#define RCC_SPI2S1CKSELR		0x8D8
#define RCC_SPI2S23CKSELR		0x8DC
#define RCC_SPI45CKSELR			0x8E0
#define RCC_UART6CKSELR			0x8E4
#define RCC_UART24CKSELR		0x8E8
#define RCC_UART35CKSELR		0x8EC
#define RCC_UART78CKSELR		0x8F0
#define RCC_SDMMC12CKSELR		0x8F4
#define RCC_SDMMC3CKSELR		0x8F8
#define RCC_ETHCKSELR			0x8FC
#define RCC_QSPICKSELR			0x900
#define RCC_FMCCKSELR			0x904
#define RCC_FDCANCKSELR			0x90C
#define RCC_SPDIFCKSELR			0x914
#define RCC_CECCKSELR			0x918
#define RCC_USBCKSELR			0x91C
#define RCC_RNG2CKSELR			0x920
#define RCC_DSICKSELR			0x924
#define RCC_ADCCKSELR			0x928
#define RCC_LPTIM45CKSELR		0x92C
#define RCC_LPTIM23CKSELR		0x930
#define RCC_LPTIM1CKSELR		0x934
#define RCC_APB1RSTSETR			0x980
#define RCC_APB1RSTCLRR			0x984
#define RCC_APB2RSTSETR			0x988
#define RCC_APB2RSTCLRR			0x98C
#define RCC_APB3RSTSETR			0x990
#define RCC_APB3RSTCLRR			0x994
#define RCC_AHB2RSTSETR			0x998
#define RCC_AHB2RSTCLRR			0x99C
#define RCC_AHB3RSTSETR			0x9A0
#define RCC_AHB3RSTCLRR			0x9A4
#define RCC_AHB4RSTSETR			0x9A8
#define RCC_AHB4RSTCLRR			0x9AC
#define RCC_MP_APB1ENSETR		0xA00
#define RCC_MP_APB1ENCLRR		0xA04
#define RCC_MP_APB2ENSETR		0xA08
#define RCC_MP_APB2ENCLRR		0xA0C
#define RCC_MP_APB3ENSETR		0xA10
#define RCC_MP_APB3ENCLRR		0xA14
#define RCC_MP_AHB2ENSETR		0xA18
#define RCC_MP_AHB2ENCLRR		0xA1C
#define RCC_MP_AHB3ENSETR		0xA20
#define RCC_MP_AHB3ENCLRR		0xA24
#define RCC_MP_AHB4ENSETR		0xA28
#define RCC_MP_AHB4ENCLRR		0xA2C
#define RCC_MP_MLAHBENSETR		0xA38
#define RCC_MP_MLAHBENCLRR		0xA3C
#define RCC_MC_APB1ENSETR		0xA80
#define RCC_MC_APB1ENCLRR		0xA84
#define RCC_MC_APB2ENSETR		0xA88
#define RCC_MC_APB2ENCLRR		0xA8C
#define RCC_MC_APB3ENSETR		0xA90
#define RCC_MC_APB3ENCLRR		0xA94
#define RCC_MC_AHB2ENSETR		0xA98
#define RCC_MC_AHB2ENCLRR		0xA9C
#define RCC_MC_AHB3ENSETR		0xAA0
#define RCC_MC_AHB3ENCLRR		0xAA4
#define RCC_MC_AHB4ENSETR		0xAA8
#define RCC_MC_AHB4ENCLRR		0xAAC
#define RCC_MC_AXIMENSETR		0xAB0
#define RCC_MC_AXIMENCLRR		0xAB4
#define RCC_MC_MLAHBENSETR		0xAB8
#define RCC_MC_MLAHBENCLRR		0xABC
#define RCC_MP_APB1LPENSETR		0xB00
#define RCC_MP_APB1LPENCLRR		0xB04
#define RCC_MP_APB2LPENSETR		0xB08
#define RCC_MP_APB2LPENCLRR		0xB0C
#define RCC_MP_APB3LPENSETR		0xB10
#define RCC_MP_APB3LPENCLRR		0xB14
#define RCC_MP_AHB2LPENSETR		0xB18
#define RCC_MP_AHB2LPENCLRR		0xB1C
#define RCC_MP_AHB3LPENSETR		0xB20
#define RCC_MP_AHB3LPENCLRR		0xB24
#define RCC_MP_AHB4LPENSETR		0xB28
#define RCC_MP_AHB4LPENCLRR		0xB2C
#define RCC_MP_AXIMLPENSETR		0xB30
#define RCC_MP_AXIMLPENCLRR		0xB34
#define RCC_MP_MLAHBLPENSETR		0xB38
#define RCC_MP_MLAHBLPENCLRR		0xB3C
#define RCC_MC_APB1LPENSETR		0xB80
#define RCC_MC_APB1LPENCLRR		0xB84
#define RCC_MC_APB2LPENSETR		0xB88
#define RCC_MC_APB2LPENCLRR		0xB8C
#define RCC_MC_APB3LPENSETR		0xB90
#define RCC_MC_APB3LPENCLRR		0xB94
#define RCC_MC_AHB2LPENSETR		0xB98
#define RCC_MC_AHB2LPENCLRR		0xB9C
#define RCC_MC_AHB3LPENSETR		0xBA0
#define RCC_MC_AHB3LPENCLRR		0xBA4
#define RCC_MC_AHB4LPENSETR		0xBA8
#define RCC_MC_AHB4LPENCLRR		0xBAC
#define RCC_MC_AXIMLPENSETR		0xBB0
#define RCC_MC_AXIMLPENCLRR		0xBB4
#define RCC_MC_MLAHBLPENSETR		0xBB8
#define RCC_MC_MLAHBLPENCLRR		0xBBC
#define RCC_MC_RSTSCLRR			0xC00
#define RCC_MC_CIER			0xC14
#define RCC_MC_CIFR			0xC18
#define RCC_VERR			0xFF4
#define RCC_IDR				0xFF8
#define RCC_SIDR			0xFFC

#define RCC_OFFSET_MASK			GENMASK_32(11, 0)

/* Values for RCC_TZCR register */
#define RCC_TZCR_TZEN			BIT(0)
#define RCC_TZCR_MCKPROT		BIT(1)

/* Used for most of RCC_<x>SELR registers */
#define RCC_SELR_SRC_MASK		GENMASK_32(2, 0)
#define RCC_SELR_REFCLK_SRC_MASK	GENMASK_32(1, 0)
#define RCC_SELR_SRCRDY			BIT(31)

/* Values of RCC_MPCKSELR register */
#define RCC_MPCKSELR_HSI		0x00000000
#define RCC_MPCKSELR_HSE		0x00000001
#define RCC_MPCKSELR_PLL		0x00000002
#define RCC_MPCKSELR_PLL_MPUDIV		0x00000003

/* Values of RCC_ASSCKSELR register */
#define RCC_ASSCKSELR_HSI		0x00000000
#define RCC_ASSCKSELR_HSE		0x00000001
#define RCC_ASSCKSELR_PLL		0x00000002

/* Values of RCC_MSSCKSELR register */
#define RCC_MSSCKSELR_HSI		0x00000000
#define RCC_MSSCKSELR_HSE		0x00000001
#define RCC_MSSCKSELR_CSI		0x00000002
#define RCC_MSSCKSELR_PLL		0x00000003

/* Values of RCC_CPERCKSELR register */
#define RCC_CPERCKSELR_HSI		0x00000000
#define RCC_CPERCKSELR_CSI		0x00000001
#define RCC_CPERCKSELR_HSE		0x00000002

/* used for most of RCC_<x>DIVR registers: max div for RTC */
#define RCC_DIVR_DIV_MASK		GENMASK_32(5, 0)
#define RCC_DIVR_DIVRDY			BIT(31)

/* Masks for specific DIVR registers */
#define RCC_APBXDIV_MASK		GENMASK_32(2, 0)
#define RCC_MPUDIV_MASK			GENMASK_32(2, 0)
#define RCC_AXIDIV_MASK			GENMASK_32(2, 0)
#define RCC_MCUDIV_MASK			GENMASK_32(3, 0)

/* Used for TIMER Prescaler */
#define RCC_TIMGXPRER_TIMGXPRE		BIT(0)

/* Offset between RCC_MP_xxxENSETR and RCC_MP_xxxENCLRR registers */
#define RCC_MP_ENCLRR_OFFSET		4u

/* Offset between RCC_MP_xxxRSTSETR and RCC_MP_xxxRSTCLRR registers */
#define RCC_MP_RSTCLRR_OFFSET		4u

/* Fields of RCC_BDCR register */
#define RCC_BDCR_LSEON			BIT(0)
#define RCC_BDCR_LSEBYP			BIT(1)
#define RCC_BDCR_LSERDY			BIT(2)
#define RCC_BDCR_DIGBYP			BIT(3)
#define RCC_BDCR_LSEDRV_MASK		GENMASK_32(5, 4)
#define RCC_BDCR_LSEDRV_SHIFT		4
#define RCC_BDCR_LSECSSON		BIT(8)
#define RCC_BDCR_RTCCKEN_POS		20
#define RCC_BDCR_RTCCKEN		BIT(RCC_BDCR_RTCCKEN_POS)
#define RCC_BDCR_RTCSRC_MASK		GENMASK_32(17, 16)
#define RCC_BDCR_RTCSRC_SHIFT		16
#define RCC_BDCR_VSWRST			BIT(31)

/* Fields of RCC_RDLSICR register */
#define RCC_RDLSICR_LSION		BIT(0)
#define RCC_RDLSICR_LSIRDY		BIT(1)

/* Used for all RCC_PLL<n>CR registers */
#define RCC_PLLNCR_PLLON		BIT(0)
#define RCC_PLLNCR_PLLRDY		BIT(1)
#define RCC_PLLNCR_SSCG_CTRL		BIT(2)
#define RCC_PLLNCR_DIVPEN		BIT(4)
#define RCC_PLLNCR_DIVQEN		BIT(5)
#define RCC_PLLNCR_DIVREN		BIT(6)
#define RCC_PLLNCR_DIVEN_SHIFT		4

/* Used for all RCC_PLL<n>CFGR1 registers */
#define RCC_PLLNCFGR1_DIVM_SHIFT	16
#define RCC_PLLNCFGR1_DIVM_MASK		GENMASK_32(21, 16)
#define RCC_PLLNCFGR1_DIVN_SHIFT	0
#define RCC_PLLNCFGR1_DIVN_MASK		GENMASK_32(8, 0)
/* Only for PLL3 and PLL4 */
#define RCC_PLLNCFGR1_IFRGE_SHIFT	24
#define RCC_PLLNCFGR1_IFRGE_MASK	GENMASK_32(25, 24)

/* Used for all RCC_PLL<n>CFGR2 registers */
#define RCC_PLLNCFGR2_DIVX_MASK		GENMASK_32(6, 0)
#define RCC_PLLNCFGR2_DIVP_SHIFT	0
#define RCC_PLLNCFGR2_DIVP_MASK		GENMASK_32(6, 0)
#define RCC_PLLNCFGR2_DIVQ_SHIFT	8
#define RCC_PLLNCFGR2_DIVQ_MASK		GENMASK_32(14, 8)
#define RCC_PLLNCFGR2_DIVR_SHIFT	16
#define RCC_PLLNCFGR2_DIVR_MASK		GENMASK_32(22, 16)

/* Used for all RCC_PLL<n>FRACR registers */
#define RCC_PLLNFRACR_FRACV_SHIFT	3
#define RCC_PLLNFRACR_FRACV_MASK	GENMASK_32(15, 3)
#define RCC_PLLNFRACR_FRACLE		BIT(16)

/* Used for all RCC_PLL<n>CSGR registers */
#define RCC_PLLNCSGR_INC_STEP_SHIFT	16
#define RCC_PLLNCSGR_INC_STEP_MASK	GENMASK_32(30, 16)
#define RCC_PLLNCSGR_MOD_PER_SHIFT	0
#define RCC_PLLNCSGR_MOD_PER_MASK	GENMASK_32(12, 0)
#define RCC_PLLNCSGR_SSCG_MODE_SHIFT	15
#define RCC_PLLNCSGR_SSCG_MODE_MASK	BIT(15)

/* Used for RCC_OCENSETR and RCC_OCENCLRR registers */
#define RCC_OCENR_HSION			BIT(0)
#define RCC_OCENR_HSIKERON		BIT(1)
#define RCC_OCENR_CSION			BIT(4)
#define RCC_OCENR_CSIKERON		BIT(5)
#define RCC_OCENR_DIGBYP		BIT(7)
#define RCC_OCENR_HSEON			BIT(8)
#define RCC_OCENR_HSEKERON		BIT(9)
#define RCC_OCENR_HSEBYP		BIT(10)
#define RCC_OCENR_HSECSSON		BIT(11)

/* Fields of RCC_OCRDYR register */
#define RCC_OCRDYR_HSIRDY		BIT(0)
#define RCC_OCRDYR_HSIDIVRDY		BIT(2)
#define RCC_OCRDYR_CSIRDY		BIT(4)
#define RCC_OCRDYR_HSERDY		BIT(8)

/* Fields of RCC_DDRITFCR register */
#define RCC_DDRITFCR_DDRC1EN		BIT(0)
#define RCC_DDRITFCR_DDRC1LPEN		BIT(1)
#define RCC_DDRITFCR_DDRC2EN		BIT(2)
#define RCC_DDRITFCR_DDRC2LPEN		BIT(3)
#define RCC_DDRITFCR_DDRPHYCEN		BIT(4)
#define RCC_DDRITFCR_DDRPHYCLPEN	BIT(5)
#define RCC_DDRITFCR_DDRCAPBEN		BIT(6)
#define RCC_DDRITFCR_DDRCAPBLPEN	BIT(7)
#define RCC_DDRITFCR_AXIDCGEN		BIT(8)
#define RCC_DDRITFCR_DDRPHYCAPBEN	BIT(9)
#define RCC_DDRITFCR_DDRPHYCAPBLPEN	BIT(10)
#define RCC_DDRITFCR_DDRCAPBRST		BIT(14)
#define RCC_DDRITFCR_DDRCAXIRST		BIT(15)
#define RCC_DDRITFCR_DDRCORERST		BIT(16)
#define RCC_DDRITFCR_DPHYAPBRST		BIT(17)
#define RCC_DDRITFCR_DPHYRST		BIT(18)
#define RCC_DDRITFCR_DPHYCTLRST		BIT(19)
#define RCC_DDRITFCR_DDRCKMOD_MASK	GENMASK_32(22, 20)
#define RCC_DDRITFCR_DDRCKMOD_SHIFT	20
#define RCC_DDRITFCR_DDRCKMOD_SSR	0
#define RCC_DDRITFCR_DDRCKMOD_ASR1	BIT(20)
#define RCC_DDRITFCR_DDRCKMOD_HSR1	BIT(21)
#define RCC_DDRITFCR_GSKPCTRL		BIT(24)

/* Fields of RCC_HSICFGR register */
#define RCC_HSICFGR_HSIDIV_MASK		GENMASK_32(1, 0)
#define RCC_HSICFGR_HSITRIM_SHIFT	8
#define RCC_HSICFGR_HSITRIM_MASK	GENMASK_32(14, 8)
#define RCC_HSICFGR_HSICAL_SHIFT	16
#define RCC_HSICFGR_HSICAL_MASK		GENMASK_32(27, 16)

/* Fields of RCC_CSICFGR register */
#define RCC_CSICFGR_CSITRIM_SHIFT	8
#define RCC_CSICFGR_CSITRIM_MASK	GENMASK_32(12, 8)
#define RCC_CSICFGR_CSICAL_SHIFT	16
#define RCC_CSICFGR_CSICAL_MASK		GENMASK_32(23, 16)

/* Used for RCC_MCO related operations */
#define RCC_MCOCFG_MCOON		BIT(12)
#define RCC_MCOCFG_MCODIV_MASK		GENMASK_32(7, 4)
#define RCC_MCOCFG_MCODIV_SHIFT		4
#define RCC_MCOCFG_MCOSRC_MASK		GENMASK_32(2, 0)

/* Fields of RCC_DBGCFGR register */
#define RCC_DBGCFGR_DBGCKEN		BIT(8)

/* RCC register fields for reset reasons */
#define RCC_MP_RSTSCLRR_PORRSTF		BIT(0)
#define RCC_MP_RSTSCLRR_BORRSTF		BIT(1)
#define RCC_MP_RSTSCLRR_PADRSTF		BIT(2)
#define RCC_MP_RSTSCLRR_HCSSRSTF	BIT(3)
#define RCC_MP_RSTSCLRR_VCORERSTF	BIT(4)
#define RCC_MP_RSTSCLRR_MPSYSRSTF	BIT(6)
#define RCC_MP_RSTSCLRR_MCSYSRSTF	BIT(7)
#define RCC_MP_RSTSCLRR_IWDG1RSTF	BIT(8)
#define RCC_MP_RSTSCLRR_IWDG2RSTF	BIT(9)
#define RCC_MP_RSTSCLRR_STDBYRSTF	BIT(11)
#define RCC_MP_RSTSCLRR_CSTDBYRSTF	BIT(12)

/* Global Reset Register */
#define RCC_MP_GRSTCSETR_MPSYSRST	BIT(0)
#define RCC_MP_GRSTCSETR_MCURST		BIT(1)
#define RCC_MP_GRSTCSETR_MPUP0RST	BIT(4)
#define RCC_MP_GRSTCSETR_MPUP1RST	BIT(5)

/* Clock Source Interrupt Flag Register */
#define RCC_MP_CIFR_LSIRDYF		BIT(0)
#define RCC_MP_CIFR_LSERDYF		BIT(1)
#define RCC_MP_CIFR_HSIRDYF		BIT(2)
#define RCC_MP_CIFR_HSERDYF		BIT(3)
#define RCC_MP_CIFR_CSIRDYF		BIT(4)
#define RCC_MP_CIFR_PLL1DYF		BIT(8)
#define RCC_MP_CIFR_PLL2DYF		BIT(9)
#define RCC_MP_CIFR_PLL3DYF		BIT(10)
#define RCC_MP_CIFR_PLL4DYF		BIT(11)
#define RCC_MP_CIFR_LSECSSF		BIT(16)
#define RCC_MP_CIFR_WKUPF		BIT(20)
#define RCC_MP_CIFR_MASK	(RCC_MP_CIFR_LSIRDYF | RCC_MP_CIFR_LSERDYF | \
				 RCC_MP_CIFR_HSIRDYF | RCC_MP_CIFR_HSERDYF | \
				 RCC_MP_CIFR_CSIRDYF | RCC_MP_CIFR_PLL1DYF | \
				 RCC_MP_CIFR_PLL2DYF | RCC_MP_CIFR_PLL3DYF | \
				 RCC_MP_CIFR_PLL4DYF | RCC_MP_CIFR_LSECSSF | \
				 RCC_MP_CIFR_WKUPF)

/* Stop Request Set Register */
#define RCC_MP_SREQSETR_STPREQ_P0	BIT(0)
#define RCC_MP_SREQSETR_STPREQ_P1	BIT(1)

/* Stop Request Clear Register */
#define RCC_MP_SREQCLRR_STPREQ_P0	BIT(0)
#define RCC_MP_SREQCLRR_STPREQ_P1	BIT(1)

/* Values of RCC_PWRLPDLYCR register */
#define RCC_PWRLPDLYCR_PWRLP_DLY_MASK	GENMASK_32(21, 0)

/* Global Control Register */
#define RCC_MP_GCR_BOOT_MCU		BIT(0)

/* RCC_MP_APB5RST(SET|CLR)R bit fields */
#define RCC_APB5RSTSETR_SPI6RST		BIT(0)
#define RCC_APB5RSTSETR_I2C4RST		BIT(2)
#define RCC_APB5RSTSETR_I2C6RST		BIT(3)
#define RCC_APB5RSTSETR_USART1RST	BIT(4)
#define RCC_APB5RSTSETR_STGENRST	BIT(20)

/* RCC_MP_APB5EN(SET|CLR)R bit fields */
#define RCC_MP_APB5ENSETR_SPI6EN_POS		0
#define RCC_MP_APB5ENSETR_I2C4EN_POS		2
#define RCC_MP_APB5ENSETR_I2C6EN_POS		3
#define RCC_MP_APB5ENSETR_USART1EN_POS		4
#define RCC_MP_APB5ENSETR_RTCAPBEN_POS		8
#define RCC_MP_APB5ENSETR_TZC1EN_POS		11
#define RCC_MP_APB5ENSETR_TZC2EN_POS		12
#define RCC_MP_APB5ENSETR_TZPCEN_POS		13
#define RCC_MP_APB5ENSETR_IWDG1APBEN_POS	15
#define RCC_MP_APB5ENSETR_BSECEN_POS		16
#define RCC_MP_APB5ENSETR_STGENEN_POS		20

#define RCC_MP_APB5ENSETR_SPI6EN	BIT(RCC_MP_APB5ENSETR_SPI6EN_POS)
#define RCC_MP_APB5ENSETR_I2C4EN	BIT(RCC_MP_APB5ENSETR_I2C4EN_POS)
#define RCC_MP_APB5ENSETR_I2C6EN	BIT(RCC_MP_APB5ENSETR_I2C6EN_POS)
#define RCC_MP_APB5ENSETR_USART1EN	BIT(RCC_MP_APB5ENSETR_USART1EN_POS)
#define RCC_MP_APB5ENSETR_RTCAPBEN	BIT(RCC_MP_APB5ENSETR_RTCAPBEN_POS)
#define RCC_MP_APB5ENSETR_TZC1EN	BIT(RCC_MP_APB5ENSETR_TZC1EN_POS)
#define RCC_MP_APB5ENSETR_TZC2EN	BIT(RCC_MP_APB5ENSETR_TZC2EN_POS)
#define RCC_MP_APB5ENSETR_TZPCEN	BIT(RCC_MP_APB5ENSETR_TZPCEN_POS)
#define RCC_MP_APB5ENSETR_IWDG1APBEN	BIT(RCC_MP_APB5ENSETR_IWDG1APBEN_POS)
#define RCC_MP_APB5ENSETR_BSECEN	BIT(RCC_MP_APB5ENSETR_BSECEN_POS)
#define RCC_MP_APB5ENSETR_STGENEN	BIT(RCC_MP_APB5ENSETR_STGENEN_POS)

/* RCC_MP_APB5LPEN(SET|CLR)R bit fields */
#define RCC_MP_APB5LPENSETR_SPI6LPEN		BIT(0)
#define RCC_MP_APB5LPENSETR_I2C4LPEN		BIT(2)
#define RCC_MP_APB5LPENSETR_I2C6LPEN		BIT(3)
#define RCC_MP_APB5LPENSETR_USART1LPEN		BIT(4)
#define RCC_MP_APB5LPENSETR_RTCAPBLPEN		BIT(8)
#define RCC_MP_APB5LPENSETR_TZC1LPEN		BIT(11)
#define RCC_MP_APB5LPENSETR_TZC2LPEN		BIT(12)
#define RCC_MP_APB5LPENSETR_TZPCLPEN		BIT(13)
#define RCC_MP_APB5LPENSETR_IWDG1APBLPEN	BIT(15)
#define RCC_MP_APB5LPENSETR_BSECLPEN		BIT(16)
#define RCC_MP_APB5LPENSETR_STGENLPEN		BIT(20)
#define RCC_MP_APB5LPENSETR_STGENSTPEN		BIT(21)

/* RCC_MP_AHB5RST(SET|CLR)R bit fields */
#define RCC_AHB5RSTSETR_GPIOZRST		BIT(0)
#define RCC_AHB5RSTSETR_CRYP1RST		BIT(4)
#define RCC_AHB5RSTSETR_HASH1RST		BIT(5)
#define RCC_AHB5RSTSETR_RNG1RST			BIT(6)
#define RCC_AHB5RSTSETR_AXIMCRST		BIT(16)

/* RCC_MP_AHB6RST(SET|CLR)R bit fields */
#define RCC_AHB6RSTSETR_GPURST			BIT(5)

/* RCC_MP_AHB5EN(SET|CLR)R bit fields */
#define RCC_MP_AHB5ENSETR_GPIOZEN_POS		0
#define RCC_MP_AHB5ENSETR_CRYP1EN_POS		4
#define RCC_MP_AHB5ENSETR_HASH1EN_POS		5
#define RCC_MP_AHB5ENSETR_RNG1EN_POS		6
#define RCC_MP_AHB5ENSETR_BKPSRAMEN_POS		8
#define RCC_MP_AHB5ENSETR_AXIMCEN_POS		16

#define RCC_MP_AHB5ENSETR_GPIOZEN	BIT(RCC_MP_AHB5ENSETR_GPIOZEN_POS)
#define RCC_MP_AHB5ENSETR_CRYP1EN	BIT(RCC_MP_AHB5ENSETR_CRYP1EN_POS)
#define RCC_MP_AHB5ENSETR_HASH1EN	BIT(RCC_MP_AHB5ENSETR_HASH1EN_POS)
#define RCC_MP_AHB5ENSETR_RNG1EN	BIT(RCC_MP_AHB5ENSETR_RNG1EN_POS)
#define RCC_MP_AHB5ENSETR_BKPSRAMEN	BIT(RCC_MP_AHB5ENSETR_BKPSRAMEN_POS)
#define RCC_MP_AHB5ENSETR_AXIMCEN	BIT(RCC_MP_AHB5ENSETR_AXIMCEN_POS)

/* RCC_MP_AHB5LPEN(SET|CLR)R bit fields */
#define RCC_MP_AHB5LPENSETR_GPIOZLPEN		BIT(0)
#define RCC_MP_AHB5LPENSETR_CRYP1LPEN		BIT(4)
#define RCC_MP_AHB5LPENSETR_HASH1LPEN		BIT(5)
#define RCC_MP_AHB5LPENSETR_RNG1LPEN		BIT(6)
#define RCC_MP_AHB5LPENSETR_BKPSRAMLPEN		BIT(8)

/* RCC_MP_TZAHB6EN(SET|CLR)R bit fields */
#define RCC_MP_TZAHB6ENSETR_MDMA_POS	0
#define RCC_MP_TZAHB6ENSETR_MDMA	BIT(RCC_MP_TZAHB6ENSETR_MDMA_POS)

/* RCC_MP_IWDGFZ(SET|CLR)R bit fields */
#define RCC_MP_IWDGFZSETR_IWDG1			BIT(0)
#define RCC_MP_IWDGFZSETR_IWDG2			BIT(1)

#define DT_RCC_CLK_COMPAT		"st,stm32mp1-rcc"
#define DT_RCC_SECURE_CLK_COMPAT	"st,stm32mp1-rcc-secure"

#ifndef __ASSEMBLER__
#include <io.h>
#include <stdbool.h>
#include <types_ext.h>

vaddr_t stm32_rcc_base(void);

static inline bool stm32_rcc_is_secure(void)
{
	return io_read32(stm32_rcc_base() + RCC_TZCR) & RCC_TZCR_TZEN;
}

static inline bool stm32_rcc_is_mckprot(void)
{
	return io_read32(stm32_rcc_base() + RCC_TZCR) & RCC_TZCR_MCKPROT;
}
#endif /*__ASSEMBLER__*/

#endif /*__DRIVERS_STM32MP1_RCC_H__*/
