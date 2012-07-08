#ifndef INCLUDED_CYFITTERKEIL_INC
#define INCLUDED_CYFITTERKEIL_INC
$INCLUDE (cydevicekeil.inc)
$INCLUDE (cydevicekeil_trm.inc)

; Timer_TimerUDB
Timer_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
Timer_TimerUDB_rstSts_stsreg__0__POS EQU 0
Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
Timer_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
Timer_TimerUDB_rstSts_stsreg__2__POS EQU 2
Timer_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
Timer_TimerUDB_rstSts_stsreg__3__POS EQU 3
Timer_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
Timer_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_B0_UDB11_MSK
Timer_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
Timer_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_B0_UDB11_ST
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB10_11_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB10_11_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB10_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB10_ST_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_B0_UDB10_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB10_ST_CTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB10_MSK
Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
Timer_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB10_11_A0
Timer_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB10_11_A1
Timer_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB10_11_D0
Timer_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB10_11_D1
Timer_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
Timer_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB10_11_F0
Timer_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB10_11_F1
Timer_TimerUDB_sT16_timerdp_u0__A0_A1_REG EQU CYREG_B0_UDB10_A0_A1
Timer_TimerUDB_sT16_timerdp_u0__A0_REG EQU CYREG_B0_UDB10_A0
Timer_TimerUDB_sT16_timerdp_u0__A1_REG EQU CYREG_B0_UDB10_A1
Timer_TimerUDB_sT16_timerdp_u0__D0_D1_REG EQU CYREG_B0_UDB10_D0_D1
Timer_TimerUDB_sT16_timerdp_u0__D0_REG EQU CYREG_B0_UDB10_D0
Timer_TimerUDB_sT16_timerdp_u0__D1_REG EQU CYREG_B0_UDB10_D1
Timer_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
Timer_TimerUDB_sT16_timerdp_u0__F0_F1_REG EQU CYREG_B0_UDB10_F0_F1
Timer_TimerUDB_sT16_timerdp_u0__F0_REG EQU CYREG_B0_UDB10_F0
Timer_TimerUDB_sT16_timerdp_u0__F1_REG EQU CYREG_B0_UDB10_F1
Timer_TimerUDB_sT16_timerdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
Timer_TimerUDB_sT16_timerdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
Timer_TimerUDB_sT16_timerdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB11_12_A0
Timer_TimerUDB_sT16_timerdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB11_12_A1
Timer_TimerUDB_sT16_timerdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB11_12_D0
Timer_TimerUDB_sT16_timerdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB11_12_D1
Timer_TimerUDB_sT16_timerdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
Timer_TimerUDB_sT16_timerdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB11_12_F0
Timer_TimerUDB_sT16_timerdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB11_12_F1
Timer_TimerUDB_sT16_timerdp_u1__A0_A1_REG EQU CYREG_B0_UDB11_A0_A1
Timer_TimerUDB_sT16_timerdp_u1__A0_REG EQU CYREG_B0_UDB11_A0
Timer_TimerUDB_sT16_timerdp_u1__A1_REG EQU CYREG_B0_UDB11_A1
Timer_TimerUDB_sT16_timerdp_u1__D0_D1_REG EQU CYREG_B0_UDB11_D0_D1
Timer_TimerUDB_sT16_timerdp_u1__D0_REG EQU CYREG_B0_UDB11_D0
Timer_TimerUDB_sT16_timerdp_u1__D1_REG EQU CYREG_B0_UDB11_D1
Timer_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
Timer_TimerUDB_sT16_timerdp_u1__F0_F1_REG EQU CYREG_B0_UDB11_F0_F1
Timer_TimerUDB_sT16_timerdp_u1__F0_REG EQU CYREG_B0_UDB11_F0
Timer_TimerUDB_sT16_timerdp_u1__F1_REG EQU CYREG_B0_UDB11_F1

; SPIM_IntClock
SPIM_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
SPIM_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
SPIM_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
SPIM_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
SPIM_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
SPIM_IntClock__PM_ACT_MSK EQU 0x01
SPIM_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
SPIM_IntClock__PM_STBY_MSK EQU 0x01

; LCD_LCDPort
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

; SPIM_BSPIM
SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB02_03_ST
SPIM_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_B0_UDB02_MSK
SPIM_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
SPIM_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
SPIM_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
SPIM_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB02_ST_CTL
SPIM_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB02_ST_CTL
SPIM_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_B0_UDB02_ST
SPIM_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
SPIM_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
SPIM_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
SPIM_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
SPIM_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
SPIM_BSPIM_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB02_03_MSK
SPIM_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
SPIM_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB02_03_MSK
SPIM_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
SPIM_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
SPIM_BSPIM_BitCounter__CONTROL_REG EQU CYREG_B0_UDB02_CTL
SPIM_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB02_ST_CTL
SPIM_BSPIM_BitCounter__COUNT_REG EQU CYREG_B0_UDB02_CTL
SPIM_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_B0_UDB02_ST_CTL
SPIM_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
SPIM_BSPIM_BitCounter__PERIOD_REG EQU CYREG_B0_UDB02_MSK
SPIM_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
SPIM_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB01_02_ACTL
SPIM_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB01_02_ST
SPIM_BSPIM_RxStsReg__4__MASK EQU 0x10
SPIM_BSPIM_RxStsReg__4__POS EQU 4
SPIM_BSPIM_RxStsReg__5__MASK EQU 0x20
SPIM_BSPIM_RxStsReg__5__POS EQU 5
SPIM_BSPIM_RxStsReg__6__MASK EQU 0x40
SPIM_BSPIM_RxStsReg__6__POS EQU 6
SPIM_BSPIM_RxStsReg__MASK EQU 0x70
SPIM_BSPIM_RxStsReg__MASK_REG EQU CYREG_B0_UDB01_MSK
SPIM_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB01_ACTL
SPIM_BSPIM_RxStsReg__STATUS_REG EQU CYREG_B0_UDB01_ST
SPIM_BSPIM_TxStsReg__0__MASK EQU 0x01
SPIM_BSPIM_TxStsReg__0__POS EQU 0
SPIM_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB00_01_ACTL
SPIM_BSPIM_TxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB00_01_ST
SPIM_BSPIM_TxStsReg__1__MASK EQU 0x02
SPIM_BSPIM_TxStsReg__1__POS EQU 1
SPIM_BSPIM_TxStsReg__2__MASK EQU 0x04
SPIM_BSPIM_TxStsReg__2__POS EQU 2
SPIM_BSPIM_TxStsReg__3__MASK EQU 0x08
SPIM_BSPIM_TxStsReg__3__POS EQU 3
SPIM_BSPIM_TxStsReg__4__MASK EQU 0x10
SPIM_BSPIM_TxStsReg__4__POS EQU 4
SPIM_BSPIM_TxStsReg__MASK EQU 0x1F
SPIM_BSPIM_TxStsReg__MASK_REG EQU CYREG_B0_UDB00_MSK
SPIM_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB00_ACTL
SPIM_BSPIM_TxStsReg__STATUS_REG EQU CYREG_B0_UDB00_ST
SPIM_BSPIM_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_B0_UDB02_03_A0
SPIM_BSPIM_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_B0_UDB02_03_A1
SPIM_BSPIM_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_B0_UDB02_03_D0
SPIM_BSPIM_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_B0_UDB02_03_D1
SPIM_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
SPIM_BSPIM_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_B0_UDB02_03_F0
SPIM_BSPIM_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_B0_UDB02_03_F1
SPIM_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_B0_UDB02_A0_A1
SPIM_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_B0_UDB02_A0
SPIM_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_B0_UDB02_A1
SPIM_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_B0_UDB02_D0_D1
SPIM_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_B0_UDB02_D0
SPIM_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_B0_UDB02_D1
SPIM_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
SPIM_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_B0_UDB02_F0_F1
SPIM_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_B0_UDB02_F0
SPIM_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_B0_UDB02_F1
SPIM_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
SPIM_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL

; StatusLED
StatusLED__0__MASK EQU 0x04
StatusLED__0__PC EQU CYREG_PRT6_PC2
StatusLED__0__PORT EQU 6
StatusLED__0__SHIFT EQU 2
StatusLED__AG EQU CYREG_PRT6_AG
StatusLED__AMUX EQU CYREG_PRT6_AMUX
StatusLED__BIE EQU CYREG_PRT6_BIE
StatusLED__BIT_MASK EQU CYREG_PRT6_BIT_MASK
StatusLED__BYP EQU CYREG_PRT6_BYP
StatusLED__CTL EQU CYREG_PRT6_CTL
StatusLED__DM0 EQU CYREG_PRT6_DM0
StatusLED__DM1 EQU CYREG_PRT6_DM1
StatusLED__DM2 EQU CYREG_PRT6_DM2
StatusLED__DR EQU CYREG_PRT6_DR
StatusLED__INP_DIS EQU CYREG_PRT6_INP_DIS
StatusLED__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
StatusLED__LCD_EN EQU CYREG_PRT6_LCD_EN
StatusLED__MASK EQU 0x04
StatusLED__PORT EQU 6
StatusLED__PRT EQU CYREG_PRT6_PRT
StatusLED__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
StatusLED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
StatusLED__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
StatusLED__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
StatusLED__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
StatusLED__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
StatusLED__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
StatusLED__PS EQU CYREG_PRT6_PS
StatusLED__SHIFT EQU 2
StatusLED__SLW EQU CYREG_PRT6_SLW

; TimerInt
TimerInt__ES2_PATCH EQU 0
TimerInt__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN0
TimerInt__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD0
TimerInt__INTC_MASK EQU 0x01
TimerInt__INTC_NUMBER EQU 0
TimerInt__INTC_PRIOR_NUM EQU 7
TimerInt__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR0
TimerInt__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN0
TimerInt__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD0
TimerInt__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x00)

; RESET
RESET__0__MASK EQU 0x20
RESET__0__PC EQU CYREG_PRT0_PC5
RESET__0__PORT EQU 0
RESET__0__SHIFT EQU 5
RESET__AG EQU CYREG_PRT0_AG
RESET__AMUX EQU CYREG_PRT0_AMUX
RESET__BIE EQU CYREG_PRT0_BIE
RESET__BIT_MASK EQU CYREG_PRT0_BIT_MASK
RESET__BYP EQU CYREG_PRT0_BYP
RESET__CTL EQU CYREG_PRT0_CTL
RESET__DM0 EQU CYREG_PRT0_DM0
RESET__DM1 EQU CYREG_PRT0_DM1
RESET__DM2 EQU CYREG_PRT0_DM2
RESET__DR EQU CYREG_PRT0_DR
RESET__INP_DIS EQU CYREG_PRT0_INP_DIS
RESET__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
RESET__LCD_EN EQU CYREG_PRT0_LCD_EN
RESET__MASK EQU 0x20
RESET__PORT EQU 0
RESET__PRT EQU CYREG_PRT0_PRT
RESET__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
RESET__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
RESET__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
RESET__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
RESET__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
RESET__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
RESET__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
RESET__PS EQU CYREG_PRT0_PS
RESET__SHIFT EQU 5
RESET__SLW EQU CYREG_PRT0_SLW

; MISO
MISO__0__MASK EQU 0x04
MISO__0__PC EQU CYREG_PRT0_PC2
MISO__0__PORT EQU 0
MISO__0__SHIFT EQU 2
MISO__AG EQU CYREG_PRT0_AG
MISO__AMUX EQU CYREG_PRT0_AMUX
MISO__BIE EQU CYREG_PRT0_BIE
MISO__BIT_MASK EQU CYREG_PRT0_BIT_MASK
MISO__BYP EQU CYREG_PRT0_BYP
MISO__CTL EQU CYREG_PRT0_CTL
MISO__DM0 EQU CYREG_PRT0_DM0
MISO__DM1 EQU CYREG_PRT0_DM1
MISO__DM2 EQU CYREG_PRT0_DM2
MISO__DR EQU CYREG_PRT0_DR
MISO__INP_DIS EQU CYREG_PRT0_INP_DIS
MISO__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
MISO__LCD_EN EQU CYREG_PRT0_LCD_EN
MISO__MASK EQU 0x04
MISO__PORT EQU 0
MISO__PRT EQU CYREG_PRT0_PRT
MISO__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
MISO__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
MISO__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
MISO__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
MISO__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
MISO__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
MISO__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
MISO__PS EQU CYREG_PRT0_PS
MISO__SHIFT EQU 2
MISO__SLW EQU CYREG_PRT0_SLW

; MOSI
MOSI__0__MASK EQU 0x02
MOSI__0__PC EQU CYREG_PRT0_PC1
MOSI__0__PORT EQU 0
MOSI__0__SHIFT EQU 1
MOSI__AG EQU CYREG_PRT0_AG
MOSI__AMUX EQU CYREG_PRT0_AMUX
MOSI__BIE EQU CYREG_PRT0_BIE
MOSI__BIT_MASK EQU CYREG_PRT0_BIT_MASK
MOSI__BYP EQU CYREG_PRT0_BYP
MOSI__CTL EQU CYREG_PRT0_CTL
MOSI__DM0 EQU CYREG_PRT0_DM0
MOSI__DM1 EQU CYREG_PRT0_DM1
MOSI__DM2 EQU CYREG_PRT0_DM2
MOSI__DR EQU CYREG_PRT0_DR
MOSI__INP_DIS EQU CYREG_PRT0_INP_DIS
MOSI__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
MOSI__LCD_EN EQU CYREG_PRT0_LCD_EN
MOSI__MASK EQU 0x02
MOSI__PORT EQU 0
MOSI__PRT EQU CYREG_PRT0_PRT
MOSI__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
MOSI__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
MOSI__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
MOSI__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
MOSI__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
MOSI__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
MOSI__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
MOSI__PS EQU CYREG_PRT0_PS
MOSI__SHIFT EQU 1
MOSI__SLW EQU CYREG_PRT0_SLW

; SCLK
SCLK__0__MASK EQU 0x01
SCLK__0__PC EQU CYREG_PRT0_PC0
SCLK__0__PORT EQU 0
SCLK__0__SHIFT EQU 0
SCLK__AG EQU CYREG_PRT0_AG
SCLK__AMUX EQU CYREG_PRT0_AMUX
SCLK__BIE EQU CYREG_PRT0_BIE
SCLK__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SCLK__BYP EQU CYREG_PRT0_BYP
SCLK__CTL EQU CYREG_PRT0_CTL
SCLK__DM0 EQU CYREG_PRT0_DM0
SCLK__DM1 EQU CYREG_PRT0_DM1
SCLK__DM2 EQU CYREG_PRT0_DM2
SCLK__DR EQU CYREG_PRT0_DR
SCLK__INP_DIS EQU CYREG_PRT0_INP_DIS
SCLK__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SCLK__LCD_EN EQU CYREG_PRT0_LCD_EN
SCLK__MASK EQU 0x01
SCLK__PORT EQU 0
SCLK__PRT EQU CYREG_PRT0_PRT
SCLK__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SCLK__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SCLK__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SCLK__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SCLK__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SCLK__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SCLK__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SCLK__PS EQU CYREG_PRT0_PS
SCLK__SHIFT EQU 0
SCLK__SLW EQU CYREG_PRT0_SLW

; SS
SS__0__MASK EQU 0x40
SS__0__PC EQU CYREG_PRT0_PC6
SS__0__PORT EQU 0
SS__0__SHIFT EQU 6
SS__AG EQU CYREG_PRT0_AG
SS__AMUX EQU CYREG_PRT0_AMUX
SS__BIE EQU CYREG_PRT0_BIE
SS__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SS__BYP EQU CYREG_PRT0_BYP
SS__CTL EQU CYREG_PRT0_CTL
SS__DM0 EQU CYREG_PRT0_DM0
SS__DM1 EQU CYREG_PRT0_DM1
SS__DM2 EQU CYREG_PRT0_DM2
SS__DR EQU CYREG_PRT0_DR
SS__INP_DIS EQU CYREG_PRT0_INP_DIS
SS__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SS__LCD_EN EQU CYREG_PRT0_LCD_EN
SS__MASK EQU 0x40
SS__PORT EQU 0
SS__PRT EQU CYREG_PRT0_PRT
SS__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SS__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SS__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SS__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SS__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SS__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SS__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SS__PS EQU CYREG_PRT0_PS
SS__SHIFT EQU 6
SS__SLW EQU CYREG_PRT0_SLW

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_LEOPARD
BCLK__BUS_CLK__HZ EQU 66857142
BCLK__BUS_CLK__KHZ EQU 66857
BCLK__BUS_CLK__MHZ EQU 66
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_PANTHER EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC3
CYDEV_CHIP_JTAG_ID EQU 0x1E028069
CYDEV_CHIP_MEMBER_5A EQU 2
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_3A
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_3A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_LEOPARD_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CONFIGURATION_CLEAR_SRAM EQU 1
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 0
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_FORCE_ROUTE EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_REQXRES EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DEBUG_ENABLE_MASK EQU 0x01
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_INSTRUCT_CACHE_ENABLED EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_VDDA LIT '3.3'
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD LIT '3.3'
CYDEV_VDDD_MV EQU 3300
CYDEV_VDDIO0 LIT '3.3'
CYDEV_VDDIO0_MV EQU 3300
CYDEV_VDDIO1 LIT '3.3'
CYDEV_VDDIO1_MV EQU 3300
CYDEV_VDDIO2 LIT '3.3'
CYDEV_VDDIO2_MV EQU 3300
CYDEV_VDDIO3 LIT '3.3'
CYDEV_VDDIO3_MV EQU 3300
CYDEV_VIO0 LIT '3.3'
CYDEV_VIO0_MV EQU 3300
CYDEV_VIO1 LIT '3.3'
CYDEV_VIO1_MV EQU 3300
CYDEV_VIO2 LIT '3.3'
CYDEV_VIO2_MV EQU 3300
CYDEV_VIO3 LIT '3.3'
CYDEV_VIO3_MV EQU 3300
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERKEIL_INC */