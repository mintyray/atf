/*
 * Copyright (c) 2023, MediaTek Inc. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef APUSYS_DEVAPC_DEF_H
#define APUSYS_DEVAPC_DEF_H

#include <lib/mmio.h>
#include "../devapc/apusys_dapc_v1.h"

/* NoC */
#define SLAVE_MD32_SRAM			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT

/* Control */
#define SLAVE_VCORE			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_RPC			SLAVE_FORBID_EXCEPT_D0_SEC_RW_NS_R_D5_NO_PROTECT
#define SLAVE_PCU			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_AO_CTRL			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_PLL			SLAVE_FORBID_EXCEPT_D0_SEC_RW_NS_R_D5_NO_PROTECT
#define SLAVE_ACC			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_SEC			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_ARE0			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_ARE1			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_ARE2			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_UNKNOWN			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_APU_BULK			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_AO_BCRM			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_AO_DAPC_WRAP		SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_AO_DAPC_CON		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_RCX_ACX_BULK		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT_D3_SEC_RW
#define SLAVE_ACX0_BCRM			SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT_D3_SEC_RW
#define SLAVE_RPCTOP_LITE_ACX0		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_ACX1_BCRM			SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT_D3_SEC_RW
#define SLAVE_RPCTOP_LITE_ACX1		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_RCX_TO_ACX0_0		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT_D3_SEC_RW
#define SLAVE_RCX_TO_ACX0_1		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_SAE_TO_ACX0_0		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT_D3_SEC_RW
#define SLAVE_SAE_TO_ACX0_1		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_RCX_TO_ACX1_0		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_RCX_TO_ACX1_1		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_SAE_TO_ACX1_0		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_SAE_TO_ACX1_1		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_MD32_SYSCTRL0		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_MD32_SYSCTRL1		SLAVE_FORBID_EXCEPT_D0_SEC_RW_NS_R_D5_NO_PROTECT
#define SLAVE_MD32_WDT			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_MD32_CACHE		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_NOC_AXI			SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_MD32_DBG			SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_DBG_CRTL			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_IOMMU0_BANK0		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_IOMMU0_BANK1		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_IOMMU0_BANK2		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_IOMMU0_BANK3		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_IOMMU0_BANK4		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_IOMMU1_BANK0		SLAVE_FORBID_EXCEPT_D0_D5_NO_PROTECT
#define SLAVE_IOMMU1_BANK1		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_IOMMU1_BANK2		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_IOMMU1_BANK3		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_IOMMU1_BANK4		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_S0_SSC			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_N0_SSC			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_ACP_SSC			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_S1_SSC			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_N1_SSC			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_CFG			SLAVE_FORBID_EXCEPT_D0_SEC_RW_NS_R_D5_NO_PROTECT
#define SLAVE_SEMA_STIMER		SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_EMI_CFG			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_LOG			SLAVE_FORBID_EXCEPT_D0_SEC_RW_NS_R_D5_NO_PROTECT
#define SLAVE_CPE_SENSOR		SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_CPE_COEF			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_CPE_CTRL			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_DFD_REG_SOC		SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_SENSOR_WRAP_ACX0_DLA0	SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_SENSOR_WRAP_ACX0_DLA1	SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_SENSOR_WRAP_ACX0_VPU0	SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_SENSOR_WRAP_ACX1_DLA0	SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_SENSOR_WRAP_ACX1_DLA1	SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_SENSOR_WRAP_ACX1_VPU0	SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_REVISER			SLAVE_FORBID_EXCEPT_D0_SEC_RW
#define SLAVE_NOC			SLAVE_FORBID_EXCEPT_D0_D3_SEC_RW_D5_NO_PROTECT
#define SLAVE_BCRM			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_DAPC_WRAP			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_DAPC_CON			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_NOC_DAPC_WRAP		SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_NOC_DAPC_CON		SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_NOC_BCRM			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT
#define SLAVE_ACS			SLAVE_FORBID_EXCEPT_D0_SEC_RW_D5_NO_PROTECT
#define SLAVE_HSE			SLAVE_FORBID_EXCEPT_D5_NO_PROTECT


/* Power Domain: AO */
#define APU_CTRL_DAPC_AO_SLAVE_NUM_IN_1_DOM	(16)
#define APU_CTRL_DAPC_AO_DOM_NUM		(16)
#define APU_CTRL_DAPC_AO_SLAVE_NUM		(30)
#define DEVAPC_MASK				(0x3U)
#define DEVAPC_DOM_SHIFT			(2)

/* Power Domain: RCX */
#define APU_CTRL_DAPC_RCX_SLAVE_NUM_IN_1_DOM	(16)
#define APU_CTRL_DAPC_RCX_DOM_NUM		(16)
#define APU_CTRL_DAPC_RCX_SLAVE_NUM		(63)

#define APU_NOC_DAPC_RCX_SLAVE_NUM_IN_1_DOM	(16)
#define APU_NOC_DAPC_RCX_DOM_NUM		(16)
#define APU_NOC_DAPC_RCX_SLAVE_NUM		(5)

#endif /* APUSYS_DEVAPC_DEF_H */
