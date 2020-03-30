/**
 * \file IfxSent_reg.h
 * \brief
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC27XD_UM_V2.2.R1
 * Specification: tc27xD_um_v2.2_SFR.xml (Revision: UM_V2.2)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Sent_Cfg Sent address
 * \ingroup IfxLld_Sent
 * 
 * \defgroup IfxLld_Sent_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Sent_Cfg
 * 
 * \defgroup IfxLld_Sent_Cfg_Sent 2-SENT
 * \ingroup IfxLld_Sent_Cfg
 * 
 */
#ifndef IFXSENT_REG_H
#define IFXSENT_REG_H 1
/******************************************************************************/
#include "IfxSent_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Sent_Cfg_BaseAddress
 * \{  */

/** \brief  SENT object */
#define MODULE_SENT /*lint --e(923)*/ (*(Ifx_SENT*)0xF0003000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Sent_Cfg_Sent
 * \{  */

/** \brief  FC, Access Enable Register 0 */
#define SENT_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_SENT_ACCEN0*)0xF00030FCu)

/** \brief  F8, Access Enable Register 1 */
#define SENT_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_SENT_ACCEN1*)0xF00030F8u)

/** \brief  104, Channel Fractional Divider Register */
#define SENT_CH0_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003104u)

/** Alias (User Manual Name) for SENT_CH0_CFDR.
* To use register names with standard convension, please use SENT_CH0_CFDR.
*/
#define	SENT_CFDR0	(SENT_CH0_CFDR)

/** \brief  100, Channel Pre Divider Register */
#define SENT_CH0_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003100u)

/** Alias (User Manual Name) for SENT_CH0_CPDR.
* To use register names with standard convension, please use SENT_CH0_CPDR.
*/
#define	SENT_CPDR0	(SENT_CH0_CPDR)

/** \brief  130, Interrupt Node Pointer Register */
#define SENT_CH0_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003130u)

/** Alias (User Manual Name) for SENT_CH0_INP.
* To use register names with standard convension, please use SENT_CH0_INP.
*/
#define	SENT_INP0	(SENT_CH0_INP)

/** \brief  128, Interrupt Clear Register */
#define SENT_CH0_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003128u)

/** Alias (User Manual Name) for SENT_CH0_INTCLR.
* To use register names with standard convension, please use SENT_CH0_INTCLR.
*/
#define	SENT_INTCLR0	(SENT_CH0_INTCLR)

/** \brief  12C, Interrupt Enable Register */
#define SENT_CH0_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000312Cu)

/** Alias (User Manual Name) for SENT_CH0_INTEN.
* To use register names with standard convension, please use SENT_CH0_INTEN.
*/
#define	SENT_INTEN0	(SENT_CH0_INTEN)

/** \brief  124, Interrupt Set Register */
#define SENT_CH0_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003124u)

/** Alias (User Manual Name) for SENT_CH0_INTSET.
* To use register names with standard convension, please use SENT_CH0_INTSET.
*/
#define	SENT_INTSET0	(SENT_CH0_INTSET)

/** \brief  120, Interrupt Status Register */
#define SENT_CH0_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003120u)

/** Alias (User Manual Name) for SENT_CH0_INTSTAT.
* To use register names with standard convension, please use SENT_CH0_INTSTAT.
*/
#define	SENT_INTSTAT0	(SENT_CH0_INTSTAT)

/** \brief  114, Input and Output Control Register */
#define SENT_CH0_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003114u)

/** Alias (User Manual Name) for SENT_CH0_IOCR.
* To use register names with standard convension, please use SENT_CH0_IOCR.
*/
#define	SENT_IOCR0	(SENT_CH0_IOCR)

/** \brief  108, Receiver Control Register */
#define SENT_CH0_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003108u)

/** Alias (User Manual Name) for SENT_CH0_RCR.
* To use register names with standard convension, please use SENT_CH0_RCR.
*/
#define	SENT_RCR0	(SENT_CH0_RCR)

/** \brief  10C, Receive Status Register */
#define SENT_CH0_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000310Cu)

/** Alias (User Manual Name) for SENT_CH0_RSR.
* To use register names with standard convension, please use SENT_CH0_RSR.
*/
#define	SENT_RSR0	(SENT_CH0_RSR)

/** \brief  118, SPC Control Register */
#define SENT_CH0_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003118u)

/** Alias (User Manual Name) for SENT_CH0_SCR.
* To use register names with standard convension, please use SENT_CH0_SCR.
*/
#define	SENT_SCR0	(SENT_CH0_SCR)

/** \brief  110, Serial Data and Status Register */
#define SENT_CH0_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003110u)

/** Alias (User Manual Name) for SENT_CH0_SDS.
* To use register names with standard convension, please use SENT_CH0_SDS.
*/
#define	SENT_SDS0	(SENT_CH0_SDS)

/** \brief  11C, Receive Data View Register */
#define SENT_CH0_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000311Cu)

/** Alias (User Manual Name) for SENT_CH0_VIEW.
* To use register names with standard convension, please use SENT_CH0_VIEW.
*/
#define	SENT_VIEW0	(SENT_CH0_VIEW)

/** \brief  134, Watch Dog Timer Register */
#define SENT_CH0_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003134u)

/** Alias (User Manual Name) for SENT_CH0_WDT.
* To use register names with standard convension, please use SENT_CH0_WDT.
*/
#define	SENT_WDT0	(SENT_CH0_WDT)

/** \brief  144, Channel Fractional Divider Register */
#define SENT_CH1_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003144u)

/** Alias (User Manual Name) for SENT_CH1_CFDR.
* To use register names with standard convension, please use SENT_CH1_CFDR.
*/
#define	SENT_CFDR1	(SENT_CH1_CFDR)

/** \brief  140, Channel Pre Divider Register */
#define SENT_CH1_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003140u)

/** Alias (User Manual Name) for SENT_CH1_CPDR.
* To use register names with standard convension, please use SENT_CH1_CPDR.
*/
#define	SENT_CPDR1	(SENT_CH1_CPDR)

/** \brief  170, Interrupt Node Pointer Register */
#define SENT_CH1_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003170u)

/** Alias (User Manual Name) for SENT_CH1_INP.
* To use register names with standard convension, please use SENT_CH1_INP.
*/
#define	SENT_INP1	(SENT_CH1_INP)

/** \brief  168, Interrupt Clear Register */
#define SENT_CH1_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003168u)

/** Alias (User Manual Name) for SENT_CH1_INTCLR.
* To use register names with standard convension, please use SENT_CH1_INTCLR.
*/
#define	SENT_INTCLR1	(SENT_CH1_INTCLR)

/** \brief  16C, Interrupt Enable Register */
#define SENT_CH1_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000316Cu)

/** Alias (User Manual Name) for SENT_CH1_INTEN.
* To use register names with standard convension, please use SENT_CH1_INTEN.
*/
#define	SENT_INTEN1	(SENT_CH1_INTEN)

/** \brief  164, Interrupt Set Register */
#define SENT_CH1_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003164u)

/** Alias (User Manual Name) for SENT_CH1_INTSET.
* To use register names with standard convension, please use SENT_CH1_INTSET.
*/
#define	SENT_INTSET1	(SENT_CH1_INTSET)

/** \brief  160, Interrupt Status Register */
#define SENT_CH1_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003160u)

/** Alias (User Manual Name) for SENT_CH1_INTSTAT.
* To use register names with standard convension, please use SENT_CH1_INTSTAT.
*/
#define	SENT_INTSTAT1	(SENT_CH1_INTSTAT)

/** \brief  154, Input and Output Control Register */
#define SENT_CH1_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003154u)

/** Alias (User Manual Name) for SENT_CH1_IOCR.
* To use register names with standard convension, please use SENT_CH1_IOCR.
*/
#define	SENT_IOCR1	(SENT_CH1_IOCR)

/** \brief  148, Receiver Control Register */
#define SENT_CH1_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003148u)

/** Alias (User Manual Name) for SENT_CH1_RCR.
* To use register names with standard convension, please use SENT_CH1_RCR.
*/
#define	SENT_RCR1	(SENT_CH1_RCR)

/** \brief  14C, Receive Status Register */
#define SENT_CH1_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000314Cu)

/** Alias (User Manual Name) for SENT_CH1_RSR.
* To use register names with standard convension, please use SENT_CH1_RSR.
*/
#define	SENT_RSR1	(SENT_CH1_RSR)

/** \brief  158, SPC Control Register */
#define SENT_CH1_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003158u)

/** Alias (User Manual Name) for SENT_CH1_SCR.
* To use register names with standard convension, please use SENT_CH1_SCR.
*/
#define	SENT_SCR1	(SENT_CH1_SCR)

/** \brief  150, Serial Data and Status Register */
#define SENT_CH1_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003150u)

/** Alias (User Manual Name) for SENT_CH1_SDS.
* To use register names with standard convension, please use SENT_CH1_SDS.
*/
#define	SENT_SDS1	(SENT_CH1_SDS)

/** \brief  15C, Receive Data View Register */
#define SENT_CH1_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000315Cu)

/** Alias (User Manual Name) for SENT_CH1_VIEW.
* To use register names with standard convension, please use SENT_CH1_VIEW.
*/
#define	SENT_VIEW1	(SENT_CH1_VIEW)

/** \brief  174, Watch Dog Timer Register */
#define SENT_CH1_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003174u)

/** Alias (User Manual Name) for SENT_CH1_WDT.
* To use register names with standard convension, please use SENT_CH1_WDT.
*/
#define	SENT_WDT1	(SENT_CH1_WDT)

/** \brief  184, Channel Fractional Divider Register */
#define SENT_CH2_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003184u)

/** Alias (User Manual Name) for SENT_CH2_CFDR.
* To use register names with standard convension, please use SENT_CH2_CFDR.
*/
#define	SENT_CFDR2	(SENT_CH2_CFDR)

/** \brief  180, Channel Pre Divider Register */
#define SENT_CH2_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003180u)

/** Alias (User Manual Name) for SENT_CH2_CPDR.
* To use register names with standard convension, please use SENT_CH2_CPDR.
*/
#define	SENT_CPDR2	(SENT_CH2_CPDR)

/** \brief  1B0, Interrupt Node Pointer Register */
#define SENT_CH2_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00031B0u)

/** Alias (User Manual Name) for SENT_CH2_INP.
* To use register names with standard convension, please use SENT_CH2_INP.
*/
#define	SENT_INP2	(SENT_CH2_INP)

/** \brief  1A8, Interrupt Clear Register */
#define SENT_CH2_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00031A8u)

/** Alias (User Manual Name) for SENT_CH2_INTCLR.
* To use register names with standard convension, please use SENT_CH2_INTCLR.
*/
#define	SENT_INTCLR2	(SENT_CH2_INTCLR)

/** \brief  1AC, Interrupt Enable Register */
#define SENT_CH2_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00031ACu)

/** Alias (User Manual Name) for SENT_CH2_INTEN.
* To use register names with standard convension, please use SENT_CH2_INTEN.
*/
#define	SENT_INTEN2	(SENT_CH2_INTEN)

/** \brief  1A4, Interrupt Set Register */
#define SENT_CH2_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00031A4u)

/** Alias (User Manual Name) for SENT_CH2_INTSET.
* To use register names with standard convension, please use SENT_CH2_INTSET.
*/
#define	SENT_INTSET2	(SENT_CH2_INTSET)

/** \brief  1A0, Interrupt Status Register */
#define SENT_CH2_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00031A0u)

/** Alias (User Manual Name) for SENT_CH2_INTSTAT.
* To use register names with standard convension, please use SENT_CH2_INTSTAT.
*/
#define	SENT_INTSTAT2	(SENT_CH2_INTSTAT)

/** \brief  194, Input and Output Control Register */
#define SENT_CH2_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003194u)

/** Alias (User Manual Name) for SENT_CH2_IOCR.
* To use register names with standard convension, please use SENT_CH2_IOCR.
*/
#define	SENT_IOCR2	(SENT_CH2_IOCR)

/** \brief  188, Receiver Control Register */
#define SENT_CH2_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003188u)

/** Alias (User Manual Name) for SENT_CH2_RCR.
* To use register names with standard convension, please use SENT_CH2_RCR.
*/
#define	SENT_RCR2	(SENT_CH2_RCR)

/** \brief  18C, Receive Status Register */
#define SENT_CH2_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000318Cu)

/** Alias (User Manual Name) for SENT_CH2_RSR.
* To use register names with standard convension, please use SENT_CH2_RSR.
*/
#define	SENT_RSR2	(SENT_CH2_RSR)

/** \brief  198, SPC Control Register */
#define SENT_CH2_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003198u)

/** Alias (User Manual Name) for SENT_CH2_SCR.
* To use register names with standard convension, please use SENT_CH2_SCR.
*/
#define	SENT_SCR2	(SENT_CH2_SCR)

/** \brief  190, Serial Data and Status Register */
#define SENT_CH2_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003190u)

/** Alias (User Manual Name) for SENT_CH2_SDS.
* To use register names with standard convension, please use SENT_CH2_SDS.
*/
#define	SENT_SDS2	(SENT_CH2_SDS)

/** \brief  19C, Receive Data View Register */
#define SENT_CH2_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000319Cu)

/** Alias (User Manual Name) for SENT_CH2_VIEW.
* To use register names with standard convension, please use SENT_CH2_VIEW.
*/
#define	SENT_VIEW2	(SENT_CH2_VIEW)

/** \brief  1B4, Watch Dog Timer Register */
#define SENT_CH2_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00031B4u)

/** Alias (User Manual Name) for SENT_CH2_WDT.
* To use register names with standard convension, please use SENT_CH2_WDT.
*/
#define	SENT_WDT2	(SENT_CH2_WDT)

/** \brief  1C4, Channel Fractional Divider Register */
#define SENT_CH3_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF00031C4u)

/** Alias (User Manual Name) for SENT_CH3_CFDR.
* To use register names with standard convension, please use SENT_CH3_CFDR.
*/
#define	SENT_CFDR3	(SENT_CH3_CFDR)

/** \brief  1C0, Channel Pre Divider Register */
#define SENT_CH3_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF00031C0u)

/** Alias (User Manual Name) for SENT_CH3_CPDR.
* To use register names with standard convension, please use SENT_CH3_CPDR.
*/
#define	SENT_CPDR3	(SENT_CH3_CPDR)

/** \brief  1F0, Interrupt Node Pointer Register */
#define SENT_CH3_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00031F0u)

/** Alias (User Manual Name) for SENT_CH3_INP.
* To use register names with standard convension, please use SENT_CH3_INP.
*/
#define	SENT_INP3	(SENT_CH3_INP)

/** \brief  1E8, Interrupt Clear Register */
#define SENT_CH3_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00031E8u)

/** Alias (User Manual Name) for SENT_CH3_INTCLR.
* To use register names with standard convension, please use SENT_CH3_INTCLR.
*/
#define	SENT_INTCLR3	(SENT_CH3_INTCLR)

/** \brief  1EC, Interrupt Enable Register */
#define SENT_CH3_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00031ECu)

/** Alias (User Manual Name) for SENT_CH3_INTEN.
* To use register names with standard convension, please use SENT_CH3_INTEN.
*/
#define	SENT_INTEN3	(SENT_CH3_INTEN)

/** \brief  1E4, Interrupt Set Register */
#define SENT_CH3_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00031E4u)

/** Alias (User Manual Name) for SENT_CH3_INTSET.
* To use register names with standard convension, please use SENT_CH3_INTSET.
*/
#define	SENT_INTSET3	(SENT_CH3_INTSET)

/** \brief  1E0, Interrupt Status Register */
#define SENT_CH3_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00031E0u)

/** Alias (User Manual Name) for SENT_CH3_INTSTAT.
* To use register names with standard convension, please use SENT_CH3_INTSTAT.
*/
#define	SENT_INTSTAT3	(SENT_CH3_INTSTAT)

/** \brief  1D4, Input and Output Control Register */
#define SENT_CH3_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF00031D4u)

/** Alias (User Manual Name) for SENT_CH3_IOCR.
* To use register names with standard convension, please use SENT_CH3_IOCR.
*/
#define	SENT_IOCR3	(SENT_CH3_IOCR)

/** \brief  1C8, Receiver Control Register */
#define SENT_CH3_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF00031C8u)

/** Alias (User Manual Name) for SENT_CH3_RCR.
* To use register names with standard convension, please use SENT_CH3_RCR.
*/
#define	SENT_RCR3	(SENT_CH3_RCR)

/** \brief  1CC, Receive Status Register */
#define SENT_CH3_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF00031CCu)

/** Alias (User Manual Name) for SENT_CH3_RSR.
* To use register names with standard convension, please use SENT_CH3_RSR.
*/
#define	SENT_RSR3	(SENT_CH3_RSR)

/** \brief  1D8, SPC Control Register */
#define SENT_CH3_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF00031D8u)

/** Alias (User Manual Name) for SENT_CH3_SCR.
* To use register names with standard convension, please use SENT_CH3_SCR.
*/
#define	SENT_SCR3	(SENT_CH3_SCR)

/** \brief  1D0, Serial Data and Status Register */
#define SENT_CH3_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF00031D0u)

/** Alias (User Manual Name) for SENT_CH3_SDS.
* To use register names with standard convension, please use SENT_CH3_SDS.
*/
#define	SENT_SDS3	(SENT_CH3_SDS)

/** \brief  1DC, Receive Data View Register */
#define SENT_CH3_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF00031DCu)

/** Alias (User Manual Name) for SENT_CH3_VIEW.
* To use register names with standard convension, please use SENT_CH3_VIEW.
*/
#define	SENT_VIEW3	(SENT_CH3_VIEW)

/** \brief  1F4, Watch Dog Timer Register */
#define SENT_CH3_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00031F4u)

/** Alias (User Manual Name) for SENT_CH3_WDT.
* To use register names with standard convension, please use SENT_CH3_WDT.
*/
#define	SENT_WDT3	(SENT_CH3_WDT)

/** \brief  204, Channel Fractional Divider Register */
#define SENT_CH4_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003204u)

/** Alias (User Manual Name) for SENT_CH4_CFDR.
* To use register names with standard convension, please use SENT_CH4_CFDR.
*/
#define	SENT_CFDR4	(SENT_CH4_CFDR)

/** \brief  200, Channel Pre Divider Register */
#define SENT_CH4_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003200u)

/** Alias (User Manual Name) for SENT_CH4_CPDR.
* To use register names with standard convension, please use SENT_CH4_CPDR.
*/
#define	SENT_CPDR4	(SENT_CH4_CPDR)

/** \brief  230, Interrupt Node Pointer Register */
#define SENT_CH4_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003230u)

/** Alias (User Manual Name) for SENT_CH4_INP.
* To use register names with standard convension, please use SENT_CH4_INP.
*/
#define	SENT_INP4	(SENT_CH4_INP)

/** \brief  228, Interrupt Clear Register */
#define SENT_CH4_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003228u)

/** Alias (User Manual Name) for SENT_CH4_INTCLR.
* To use register names with standard convension, please use SENT_CH4_INTCLR.
*/
#define	SENT_INTCLR4	(SENT_CH4_INTCLR)

/** \brief  22C, Interrupt Enable Register */
#define SENT_CH4_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000322Cu)

/** Alias (User Manual Name) for SENT_CH4_INTEN.
* To use register names with standard convension, please use SENT_CH4_INTEN.
*/
#define	SENT_INTEN4	(SENT_CH4_INTEN)

/** \brief  224, Interrupt Set Register */
#define SENT_CH4_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003224u)

/** Alias (User Manual Name) for SENT_CH4_INTSET.
* To use register names with standard convension, please use SENT_CH4_INTSET.
*/
#define	SENT_INTSET4	(SENT_CH4_INTSET)

/** \brief  220, Interrupt Status Register */
#define SENT_CH4_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003220u)

/** Alias (User Manual Name) for SENT_CH4_INTSTAT.
* To use register names with standard convension, please use SENT_CH4_INTSTAT.
*/
#define	SENT_INTSTAT4	(SENT_CH4_INTSTAT)

/** \brief  214, Input and Output Control Register */
#define SENT_CH4_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003214u)

/** Alias (User Manual Name) for SENT_CH4_IOCR.
* To use register names with standard convension, please use SENT_CH4_IOCR.
*/
#define	SENT_IOCR4	(SENT_CH4_IOCR)

/** \brief  208, Receiver Control Register */
#define SENT_CH4_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003208u)

/** Alias (User Manual Name) for SENT_CH4_RCR.
* To use register names with standard convension, please use SENT_CH4_RCR.
*/
#define	SENT_RCR4	(SENT_CH4_RCR)

/** \brief  20C, Receive Status Register */
#define SENT_CH4_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000320Cu)

/** Alias (User Manual Name) for SENT_CH4_RSR.
* To use register names with standard convension, please use SENT_CH4_RSR.
*/
#define	SENT_RSR4	(SENT_CH4_RSR)

/** \brief  218, SPC Control Register */
#define SENT_CH4_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003218u)

/** Alias (User Manual Name) for SENT_CH4_SCR.
* To use register names with standard convension, please use SENT_CH4_SCR.
*/
#define	SENT_SCR4	(SENT_CH4_SCR)

/** \brief  210, Serial Data and Status Register */
#define SENT_CH4_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003210u)

/** Alias (User Manual Name) for SENT_CH4_SDS.
* To use register names with standard convension, please use SENT_CH4_SDS.
*/
#define	SENT_SDS4	(SENT_CH4_SDS)

/** \brief  21C, Receive Data View Register */
#define SENT_CH4_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000321Cu)

/** Alias (User Manual Name) for SENT_CH4_VIEW.
* To use register names with standard convension, please use SENT_CH4_VIEW.
*/
#define	SENT_VIEW4	(SENT_CH4_VIEW)

/** \brief  234, Watch Dog Timer Register */
#define SENT_CH4_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003234u)

/** Alias (User Manual Name) for SENT_CH4_WDT.
* To use register names with standard convension, please use SENT_CH4_WDT.
*/
#define	SENT_WDT4	(SENT_CH4_WDT)

/** \brief  244, Channel Fractional Divider Register */
#define SENT_CH5_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003244u)

/** Alias (User Manual Name) for SENT_CH5_CFDR.
* To use register names with standard convension, please use SENT_CH5_CFDR.
*/
#define	SENT_CFDR5	(SENT_CH5_CFDR)

/** \brief  240, Channel Pre Divider Register */
#define SENT_CH5_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003240u)

/** Alias (User Manual Name) for SENT_CH5_CPDR.
* To use register names with standard convension, please use SENT_CH5_CPDR.
*/
#define	SENT_CPDR5	(SENT_CH5_CPDR)

/** \brief  270, Interrupt Node Pointer Register */
#define SENT_CH5_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003270u)

/** Alias (User Manual Name) for SENT_CH5_INP.
* To use register names with standard convension, please use SENT_CH5_INP.
*/
#define	SENT_INP5	(SENT_CH5_INP)

/** \brief  268, Interrupt Clear Register */
#define SENT_CH5_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003268u)

/** Alias (User Manual Name) for SENT_CH5_INTCLR.
* To use register names with standard convension, please use SENT_CH5_INTCLR.
*/
#define	SENT_INTCLR5	(SENT_CH5_INTCLR)

/** \brief  26C, Interrupt Enable Register */
#define SENT_CH5_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000326Cu)

/** Alias (User Manual Name) for SENT_CH5_INTEN.
* To use register names with standard convension, please use SENT_CH5_INTEN.
*/
#define	SENT_INTEN5	(SENT_CH5_INTEN)

/** \brief  264, Interrupt Set Register */
#define SENT_CH5_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003264u)

/** Alias (User Manual Name) for SENT_CH5_INTSET.
* To use register names with standard convension, please use SENT_CH5_INTSET.
*/
#define	SENT_INTSET5	(SENT_CH5_INTSET)

/** \brief  260, Interrupt Status Register */
#define SENT_CH5_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003260u)

/** Alias (User Manual Name) for SENT_CH5_INTSTAT.
* To use register names with standard convension, please use SENT_CH5_INTSTAT.
*/
#define	SENT_INTSTAT5	(SENT_CH5_INTSTAT)

/** \brief  254, Input and Output Control Register */
#define SENT_CH5_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003254u)

/** Alias (User Manual Name) for SENT_CH5_IOCR.
* To use register names with standard convension, please use SENT_CH5_IOCR.
*/
#define	SENT_IOCR5	(SENT_CH5_IOCR)

/** \brief  248, Receiver Control Register */
#define SENT_CH5_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003248u)

/** Alias (User Manual Name) for SENT_CH5_RCR.
* To use register names with standard convension, please use SENT_CH5_RCR.
*/
#define	SENT_RCR5	(SENT_CH5_RCR)

/** \brief  24C, Receive Status Register */
#define SENT_CH5_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000324Cu)

/** Alias (User Manual Name) for SENT_CH5_RSR.
* To use register names with standard convension, please use SENT_CH5_RSR.
*/
#define	SENT_RSR5	(SENT_CH5_RSR)

/** \brief  258, SPC Control Register */
#define SENT_CH5_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003258u)

/** Alias (User Manual Name) for SENT_CH5_SCR.
* To use register names with standard convension, please use SENT_CH5_SCR.
*/
#define	SENT_SCR5	(SENT_CH5_SCR)

/** \brief  250, Serial Data and Status Register */
#define SENT_CH5_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003250u)

/** Alias (User Manual Name) for SENT_CH5_SDS.
* To use register names with standard convension, please use SENT_CH5_SDS.
*/
#define	SENT_SDS5	(SENT_CH5_SDS)

/** \brief  25C, Receive Data View Register */
#define SENT_CH5_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000325Cu)

/** Alias (User Manual Name) for SENT_CH5_VIEW.
* To use register names with standard convension, please use SENT_CH5_VIEW.
*/
#define	SENT_VIEW5	(SENT_CH5_VIEW)

/** \brief  274, Watch Dog Timer Register */
#define SENT_CH5_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003274u)

/** Alias (User Manual Name) for SENT_CH5_WDT.
* To use register names with standard convension, please use SENT_CH5_WDT.
*/
#define	SENT_WDT5	(SENT_CH5_WDT)

/** \brief  284, Channel Fractional Divider Register */
#define SENT_CH6_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003284u)

/** Alias (User Manual Name) for SENT_CH6_CFDR.
* To use register names with standard convension, please use SENT_CH6_CFDR.
*/
#define	SENT_CFDR6	(SENT_CH6_CFDR)

/** \brief  280, Channel Pre Divider Register */
#define SENT_CH6_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003280u)

/** Alias (User Manual Name) for SENT_CH6_CPDR.
* To use register names with standard convension, please use SENT_CH6_CPDR.
*/
#define	SENT_CPDR6	(SENT_CH6_CPDR)

/** \brief  2B0, Interrupt Node Pointer Register */
#define SENT_CH6_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00032B0u)

/** Alias (User Manual Name) for SENT_CH6_INP.
* To use register names with standard convension, please use SENT_CH6_INP.
*/
#define	SENT_INP6	(SENT_CH6_INP)

/** \brief  2A8, Interrupt Clear Register */
#define SENT_CH6_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00032A8u)

/** Alias (User Manual Name) for SENT_CH6_INTCLR.
* To use register names with standard convension, please use SENT_CH6_INTCLR.
*/
#define	SENT_INTCLR6	(SENT_CH6_INTCLR)

/** \brief  2AC, Interrupt Enable Register */
#define SENT_CH6_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00032ACu)

/** Alias (User Manual Name) for SENT_CH6_INTEN.
* To use register names with standard convension, please use SENT_CH6_INTEN.
*/
#define	SENT_INTEN6	(SENT_CH6_INTEN)

/** \brief  2A4, Interrupt Set Register */
#define SENT_CH6_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00032A4u)

/** Alias (User Manual Name) for SENT_CH6_INTSET.
* To use register names with standard convension, please use SENT_CH6_INTSET.
*/
#define	SENT_INTSET6	(SENT_CH6_INTSET)

/** \brief  2A0, Interrupt Status Register */
#define SENT_CH6_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00032A0u)

/** Alias (User Manual Name) for SENT_CH6_INTSTAT.
* To use register names with standard convension, please use SENT_CH6_INTSTAT.
*/
#define	SENT_INTSTAT6	(SENT_CH6_INTSTAT)

/** \brief  294, Input and Output Control Register */
#define SENT_CH6_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003294u)

/** Alias (User Manual Name) for SENT_CH6_IOCR.
* To use register names with standard convension, please use SENT_CH6_IOCR.
*/
#define	SENT_IOCR6	(SENT_CH6_IOCR)

/** \brief  288, Receiver Control Register */
#define SENT_CH6_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003288u)

/** Alias (User Manual Name) for SENT_CH6_RCR.
* To use register names with standard convension, please use SENT_CH6_RCR.
*/
#define	SENT_RCR6	(SENT_CH6_RCR)

/** \brief  28C, Receive Status Register */
#define SENT_CH6_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000328Cu)

/** Alias (User Manual Name) for SENT_CH6_RSR.
* To use register names with standard convension, please use SENT_CH6_RSR.
*/
#define	SENT_RSR6	(SENT_CH6_RSR)

/** \brief  298, SPC Control Register */
#define SENT_CH6_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003298u)

/** Alias (User Manual Name) for SENT_CH6_SCR.
* To use register names with standard convension, please use SENT_CH6_SCR.
*/
#define	SENT_SCR6	(SENT_CH6_SCR)

/** \brief  290, Serial Data and Status Register */
#define SENT_CH6_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003290u)

/** Alias (User Manual Name) for SENT_CH6_SDS.
* To use register names with standard convension, please use SENT_CH6_SDS.
*/
#define	SENT_SDS6	(SENT_CH6_SDS)

/** \brief  29C, Receive Data View Register */
#define SENT_CH6_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000329Cu)

/** Alias (User Manual Name) for SENT_CH6_VIEW.
* To use register names with standard convension, please use SENT_CH6_VIEW.
*/
#define	SENT_VIEW6	(SENT_CH6_VIEW)

/** \brief  2B4, Watch Dog Timer Register */
#define SENT_CH6_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00032B4u)

/** Alias (User Manual Name) for SENT_CH6_WDT.
* To use register names with standard convension, please use SENT_CH6_WDT.
*/
#define	SENT_WDT6	(SENT_CH6_WDT)

/** \brief  2C4, Channel Fractional Divider Register */
#define SENT_CH7_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF00032C4u)

/** Alias (User Manual Name) for SENT_CH7_CFDR.
* To use register names with standard convension, please use SENT_CH7_CFDR.
*/
#define	SENT_CFDR7	(SENT_CH7_CFDR)

/** \brief  2C0, Channel Pre Divider Register */
#define SENT_CH7_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF00032C0u)

/** Alias (User Manual Name) for SENT_CH7_CPDR.
* To use register names with standard convension, please use SENT_CH7_CPDR.
*/
#define	SENT_CPDR7	(SENT_CH7_CPDR)

/** \brief  2F0, Interrupt Node Pointer Register */
#define SENT_CH7_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF00032F0u)

/** Alias (User Manual Name) for SENT_CH7_INP.
* To use register names with standard convension, please use SENT_CH7_INP.
*/
#define	SENT_INP7	(SENT_CH7_INP)

/** \brief  2E8, Interrupt Clear Register */
#define SENT_CH7_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF00032E8u)

/** Alias (User Manual Name) for SENT_CH7_INTCLR.
* To use register names with standard convension, please use SENT_CH7_INTCLR.
*/
#define	SENT_INTCLR7	(SENT_CH7_INTCLR)

/** \brief  2EC, Interrupt Enable Register */
#define SENT_CH7_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF00032ECu)

/** Alias (User Manual Name) for SENT_CH7_INTEN.
* To use register names with standard convension, please use SENT_CH7_INTEN.
*/
#define	SENT_INTEN7	(SENT_CH7_INTEN)

/** \brief  2E4, Interrupt Set Register */
#define SENT_CH7_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF00032E4u)

/** Alias (User Manual Name) for SENT_CH7_INTSET.
* To use register names with standard convension, please use SENT_CH7_INTSET.
*/
#define	SENT_INTSET7	(SENT_CH7_INTSET)

/** \brief  2E0, Interrupt Status Register */
#define SENT_CH7_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF00032E0u)

/** Alias (User Manual Name) for SENT_CH7_INTSTAT.
* To use register names with standard convension, please use SENT_CH7_INTSTAT.
*/
#define	SENT_INTSTAT7	(SENT_CH7_INTSTAT)

/** \brief  2D4, Input and Output Control Register */
#define SENT_CH7_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF00032D4u)

/** Alias (User Manual Name) for SENT_CH7_IOCR.
* To use register names with standard convension, please use SENT_CH7_IOCR.
*/
#define	SENT_IOCR7	(SENT_CH7_IOCR)

/** \brief  2C8, Receiver Control Register */
#define SENT_CH7_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF00032C8u)

/** Alias (User Manual Name) for SENT_CH7_RCR.
* To use register names with standard convension, please use SENT_CH7_RCR.
*/
#define	SENT_RCR7	(SENT_CH7_RCR)

/** \brief  2CC, Receive Status Register */
#define SENT_CH7_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF00032CCu)

/** Alias (User Manual Name) for SENT_CH7_RSR.
* To use register names with standard convension, please use SENT_CH7_RSR.
*/
#define	SENT_RSR7	(SENT_CH7_RSR)

/** \brief  2D8, SPC Control Register */
#define SENT_CH7_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF00032D8u)

/** Alias (User Manual Name) for SENT_CH7_SCR.
* To use register names with standard convension, please use SENT_CH7_SCR.
*/
#define	SENT_SCR7	(SENT_CH7_SCR)

/** \brief  2D0, Serial Data and Status Register */
#define SENT_CH7_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF00032D0u)

/** Alias (User Manual Name) for SENT_CH7_SDS.
* To use register names with standard convension, please use SENT_CH7_SDS.
*/
#define	SENT_SDS7	(SENT_CH7_SDS)

/** \brief  2DC, Receive Data View Register */
#define SENT_CH7_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF00032DCu)

/** Alias (User Manual Name) for SENT_CH7_VIEW.
* To use register names with standard convension, please use SENT_CH7_VIEW.
*/
#define	SENT_VIEW7	(SENT_CH7_VIEW)

/** \brief  2F4, Watch Dog Timer Register */
#define SENT_CH7_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF00032F4u)

/** Alias (User Manual Name) for SENT_CH7_WDT.
* To use register names with standard convension, please use SENT_CH7_WDT.
*/
#define	SENT_WDT7	(SENT_CH7_WDT)

/** \brief  304, Channel Fractional Divider Register */
#define SENT_CH8_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003304u)

/** Alias (User Manual Name) for SENT_CH8_CFDR.
* To use register names with standard convension, please use SENT_CH8_CFDR.
*/
#define	SENT_CFDR8	(SENT_CH8_CFDR)

/** \brief  300, Channel Pre Divider Register */
#define SENT_CH8_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003300u)

/** Alias (User Manual Name) for SENT_CH8_CPDR.
* To use register names with standard convension, please use SENT_CH8_CPDR.
*/
#define	SENT_CPDR8	(SENT_CH8_CPDR)

/** \brief  330, Interrupt Node Pointer Register */
#define SENT_CH8_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003330u)

/** Alias (User Manual Name) for SENT_CH8_INP.
* To use register names with standard convension, please use SENT_CH8_INP.
*/
#define	SENT_INP8	(SENT_CH8_INP)

/** \brief  328, Interrupt Clear Register */
#define SENT_CH8_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003328u)

/** Alias (User Manual Name) for SENT_CH8_INTCLR.
* To use register names with standard convension, please use SENT_CH8_INTCLR.
*/
#define	SENT_INTCLR8	(SENT_CH8_INTCLR)

/** \brief  32C, Interrupt Enable Register */
#define SENT_CH8_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000332Cu)

/** Alias (User Manual Name) for SENT_CH8_INTEN.
* To use register names with standard convension, please use SENT_CH8_INTEN.
*/
#define	SENT_INTEN8	(SENT_CH8_INTEN)

/** \brief  324, Interrupt Set Register */
#define SENT_CH8_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003324u)

/** Alias (User Manual Name) for SENT_CH8_INTSET.
* To use register names with standard convension, please use SENT_CH8_INTSET.
*/
#define	SENT_INTSET8	(SENT_CH8_INTSET)

/** \brief  320, Interrupt Status Register */
#define SENT_CH8_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003320u)

/** Alias (User Manual Name) for SENT_CH8_INTSTAT.
* To use register names with standard convension, please use SENT_CH8_INTSTAT.
*/
#define	SENT_INTSTAT8	(SENT_CH8_INTSTAT)

/** \brief  314, Input and Output Control Register */
#define SENT_CH8_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003314u)

/** Alias (User Manual Name) for SENT_CH8_IOCR.
* To use register names with standard convension, please use SENT_CH8_IOCR.
*/
#define	SENT_IOCR8	(SENT_CH8_IOCR)

/** \brief  308, Receiver Control Register */
#define SENT_CH8_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003308u)

/** Alias (User Manual Name) for SENT_CH8_RCR.
* To use register names with standard convension, please use SENT_CH8_RCR.
*/
#define	SENT_RCR8	(SENT_CH8_RCR)

/** \brief  30C, Receive Status Register */
#define SENT_CH8_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000330Cu)

/** Alias (User Manual Name) for SENT_CH8_RSR.
* To use register names with standard convension, please use SENT_CH8_RSR.
*/
#define	SENT_RSR8	(SENT_CH8_RSR)

/** \brief  318, SPC Control Register */
#define SENT_CH8_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003318u)

/** Alias (User Manual Name) for SENT_CH8_SCR.
* To use register names with standard convension, please use SENT_CH8_SCR.
*/
#define	SENT_SCR8	(SENT_CH8_SCR)

/** \brief  310, Serial Data and Status Register */
#define SENT_CH8_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003310u)

/** Alias (User Manual Name) for SENT_CH8_SDS.
* To use register names with standard convension, please use SENT_CH8_SDS.
*/
#define	SENT_SDS8	(SENT_CH8_SDS)

/** \brief  31C, Receive Data View Register */
#define SENT_CH8_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000331Cu)

/** Alias (User Manual Name) for SENT_CH8_VIEW.
* To use register names with standard convension, please use SENT_CH8_VIEW.
*/
#define	SENT_VIEW8	(SENT_CH8_VIEW)

/** \brief  334, Watch Dog Timer Register */
#define SENT_CH8_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003334u)

/** Alias (User Manual Name) for SENT_CH8_WDT.
* To use register names with standard convension, please use SENT_CH8_WDT.
*/
#define	SENT_WDT8	(SENT_CH8_WDT)

/** \brief  344, Channel Fractional Divider Register */
#define SENT_CH9_CFDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CFDR*)0xF0003344u)

/** Alias (User Manual Name) for SENT_CH9_CFDR.
* To use register names with standard convension, please use SENT_CH9_CFDR.
*/
#define	SENT_CFDR9	(SENT_CH9_CFDR)

/** \brief  340, Channel Pre Divider Register */
#define SENT_CH9_CPDR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_CPDR*)0xF0003340u)

/** Alias (User Manual Name) for SENT_CH9_CPDR.
* To use register names with standard convension, please use SENT_CH9_CPDR.
*/
#define	SENT_CPDR9	(SENT_CH9_CPDR)

/** \brief  370, Interrupt Node Pointer Register */
#define SENT_CH9_INP /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INP*)0xF0003370u)

/** Alias (User Manual Name) for SENT_CH9_INP.
* To use register names with standard convension, please use SENT_CH9_INP.
*/
#define	SENT_INP9	(SENT_CH9_INP)

/** \brief  368, Interrupt Clear Register */
#define SENT_CH9_INTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTCLR*)0xF0003368u)

/** Alias (User Manual Name) for SENT_CH9_INTCLR.
* To use register names with standard convension, please use SENT_CH9_INTCLR.
*/
#define	SENT_INTCLR9	(SENT_CH9_INTCLR)

/** \brief  36C, Interrupt Enable Register */
#define SENT_CH9_INTEN /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTEN*)0xF000336Cu)

/** Alias (User Manual Name) for SENT_CH9_INTEN.
* To use register names with standard convension, please use SENT_CH9_INTEN.
*/
#define	SENT_INTEN9	(SENT_CH9_INTEN)

/** \brief  364, Interrupt Set Register */
#define SENT_CH9_INTSET /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSET*)0xF0003364u)

/** Alias (User Manual Name) for SENT_CH9_INTSET.
* To use register names with standard convension, please use SENT_CH9_INTSET.
*/
#define	SENT_INTSET9	(SENT_CH9_INTSET)

/** \brief  360, Interrupt Status Register */
#define SENT_CH9_INTSTAT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_INTSTAT*)0xF0003360u)

/** Alias (User Manual Name) for SENT_CH9_INTSTAT.
* To use register names with standard convension, please use SENT_CH9_INTSTAT.
*/
#define	SENT_INTSTAT9	(SENT_CH9_INTSTAT)

/** \brief  354, Input and Output Control Register */
#define SENT_CH9_IOCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_IOCR*)0xF0003354u)

/** Alias (User Manual Name) for SENT_CH9_IOCR.
* To use register names with standard convension, please use SENT_CH9_IOCR.
*/
#define	SENT_IOCR9	(SENT_CH9_IOCR)

/** \brief  348, Receiver Control Register */
#define SENT_CH9_RCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RCR*)0xF0003348u)

/** Alias (User Manual Name) for SENT_CH9_RCR.
* To use register names with standard convension, please use SENT_CH9_RCR.
*/
#define	SENT_RCR9	(SENT_CH9_RCR)

/** \brief  34C, Receive Status Register */
#define SENT_CH9_RSR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_RSR*)0xF000334Cu)

/** Alias (User Manual Name) for SENT_CH9_RSR.
* To use register names with standard convension, please use SENT_CH9_RSR.
*/
#define	SENT_RSR9	(SENT_CH9_RSR)

/** \brief  358, SPC Control Register */
#define SENT_CH9_SCR /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SCR*)0xF0003358u)

/** Alias (User Manual Name) for SENT_CH9_SCR.
* To use register names with standard convension, please use SENT_CH9_SCR.
*/
#define	SENT_SCR9	(SENT_CH9_SCR)

/** \brief  350, Serial Data and Status Register */
#define SENT_CH9_SDS /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_SDS*)0xF0003350u)

/** Alias (User Manual Name) for SENT_CH9_SDS.
* To use register names with standard convension, please use SENT_CH9_SDS.
*/
#define	SENT_SDS9	(SENT_CH9_SDS)

/** \brief  35C, Receive Data View Register */
#define SENT_CH9_VIEW /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_VIEW*)0xF000335Cu)

/** Alias (User Manual Name) for SENT_CH9_VIEW.
* To use register names with standard convension, please use SENT_CH9_VIEW.
*/
#define	SENT_VIEW9	(SENT_CH9_VIEW)

/** \brief  374, Watch Dog Timer Register */
#define SENT_CH9_WDT /*lint --e(923)*/ (*(volatile Ifx_SENT_CH_WDT*)0xF0003374u)

/** Alias (User Manual Name) for SENT_CH9_WDT.
* To use register names with standard convension, please use SENT_CH9_WDT.
*/
#define	SENT_WDT9	(SENT_CH9_WDT)

/** \brief  0, Clock Control Register */
#define SENT_CLC /*lint --e(923)*/ (*(volatile Ifx_SENT_CLC*)0xF0003000u)

/** \brief  C, SENT Fractional Divider Register */
#define SENT_FDR /*lint --e(923)*/ (*(volatile Ifx_SENT_FDR*)0xF000300Cu)

/** \brief  8, Module Identification Register */
#define SENT_ID /*lint --e(923)*/ (*(volatile Ifx_SENT_ID*)0xF0003008u)

/** \brief  14, Interrupt Overview Register */
#define SENT_INTOV /*lint --e(923)*/ (*(volatile Ifx_SENT_INTOV*)0xF0003014u)

/** \brief  F4, Kernel Reset Register 0 */
#define SENT_KRST0 /*lint --e(923)*/ (*(volatile Ifx_SENT_KRST0*)0xF00030F4u)

/** \brief  F0, Kernel Reset Register 1 */
#define SENT_KRST1 /*lint --e(923)*/ (*(volatile Ifx_SENT_KRST1*)0xF00030F0u)

/** \brief  EC, Kernel Reset Status Clear Register */
#define SENT_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_SENT_KRSTCLR*)0xF00030ECu)

/** \brief  E8, OCDS Control and Status */
#define SENT_OCS /*lint --e(923)*/ (*(volatile Ifx_SENT_OCS*)0xF00030E8u)

/** \brief  80, Receive Data Register */
#define SENT_RDR0 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF0003080u)

/** \brief  84, Receive Data Register */
#define SENT_RDR1 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF0003084u)

/** \brief  88, Receive Data Register */
#define SENT_RDR2 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF0003088u)

/** \brief  8C, Receive Data Register */
#define SENT_RDR3 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF000308Cu)

/** \brief  90, Receive Data Register */
#define SENT_RDR4 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF0003090u)

/** \brief  94, Receive Data Register */
#define SENT_RDR5 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF0003094u)

/** \brief  98, Receive Data Register */
#define SENT_RDR6 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF0003098u)

/** \brief  9C, Receive Data Register */
#define SENT_RDR7 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF000309Cu)

/** \brief  A0, Receive Data Register */
#define SENT_RDR8 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF00030A0u)

/** \brief  A4, Receive Data Register */
#define SENT_RDR9 /*lint --e(923)*/ (*(volatile Ifx_SENT_RDR*)0xF00030A4u)

/** \brief  A80, Receive Time Stamp Register */
#define SENT_RTS0 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A80u)

/** \brief  A84, Receive Time Stamp Register */
#define SENT_RTS1 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A84u)

/** \brief  A88, Receive Time Stamp Register */
#define SENT_RTS2 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A88u)

/** \brief  A8C, Receive Time Stamp Register */
#define SENT_RTS3 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A8Cu)

/** \brief  A90, Receive Time Stamp Register */
#define SENT_RTS4 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A90u)

/** \brief  A94, Receive Time Stamp Register */
#define SENT_RTS5 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A94u)

/** \brief  A98, Receive Time Stamp Register */
#define SENT_RTS6 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A98u)

/** \brief  A9C, Receive Time Stamp Register */
#define SENT_RTS7 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003A9Cu)

/** \brief  AA0, Receive Time Stamp Register */
#define SENT_RTS8 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AA0u)

/** \brief  AA4, Receive Time Stamp Register */
#define SENT_RTS9 /*lint --e(923)*/ (*(volatile Ifx_SENT_RTS*)0xF0003AA4u)

/** \brief  1C, Time Stamp Predivider Register */
#define SENT_TPD /*lint --e(923)*/ (*(volatile Ifx_SENT_TPD*)0xF000301Cu)

/** \brief  18, Time Stamp Register */
#define SENT_TSR /*lint --e(923)*/ (*(volatile Ifx_SENT_TSR*)0xF0003018u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSENT_REG_H */