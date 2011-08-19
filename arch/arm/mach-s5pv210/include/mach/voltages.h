/* arch/arm/mach-s5pv210/include/mach/voltages.h
*
* Copyright (c) 2010 Samsung Electronics Co., Ltd.
*
* S5PV210/S5PC110 CPU frequency scaling support
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_VOLTAGES_H
#define __ASM_ARCH_VOLTAGES_H

#ifdef CONFIG_CPU_UV
#define FREQMAX 1000
#define TOPCPUFREQUENCY 1000000
#define ARMVOLT 1275000
#define INTVOLT 1250000
#define DVSARM1 1275000
#define DVSARM2 1200000
#define DVSARM3 1050000
#define DVSARM4 950000
#define DVSINT1 1100000
#define DVSINT2 1100000
#define DVSINT3 1000000
#endif

#ifdef CONFIG_CPU_1200
#define FREQMAX 1200
#define TOPCPUFREQUENCY 1200000
#define ARMVOLT 1350000
#define INTVOLT 1250000
#define DVSARM1 1300000
#define DVSARM2 1200000
#define DVSARM3 1050000
#define DVSARM4 950000
#define DVSINT1 1100000
#define DVSINT2 1100000
#define DVSINT3 1000000
#endif

#ifdef CONFIG_CPU_1300
#define FREQMAX 1300
#define TOPCPUFREQUENCY 1300000
#define ARMVOLT 1350000
#define INTVOLT 1250000
#define DVSARM1 1325000
#define DVSARM2 1200000
#define DVSARM3 1050000
#define DVSARM4 950000
#define DVSINT1 1100000
#define DVSINT2 1100000
#define DVSINT3 1000000
#endif

#ifdef CONFIG_CPU_1400
#define FREQMAX 1400
#define TOPCPUFREQUENCY 1400000
#define ARMVOLT 1500001
#define INTVOLT 1250000
#define DVSARM1 1450000
#define DVSARM2 1200000
#define DVSARM3 1050000
#define DVSARM4 950000
#define DVSINT1 1175000
#define DVSINT2 1100000
#define DVSINT3 1000000
#endif

#ifdef CONFIG_CPU_1440
#define FREQMAX 1440
#define TOPCPUFREQUENCY 1440000
#define ARMVOLT 1500001
#define INTVOLT 1250000
#define DVSARM1 1475000
#define DVSARM2 1200000
#define DVSARM3 1050000
#define DVSARM4 950000
#define DVSINT1 1200000
#define DVSINT2 1100000
#define DVSINT3 1000000
#endif

#endif /* __ASM_ARCH_VOLTAGES_H */


