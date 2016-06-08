/*
 * Copyright (C) 2016 Stefan Roese <sr@denx.de>
 * Copyright (C) 2016 George McCollister <george.mccollister@gmail.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <winbond_w83627.h>
#include <asm/gpio.h>
#include <asm/ibmpc.h>
#include <asm/pnp_def.h>

int board_early_init_f(void)
{
	/*
	 * The FSP enables the BayTrail internal legacy UART (again).
	 * Disable it again, so that the one on the EC can be used.
	 */
	setup_internal_uart(0);

	return 0;
}

int arch_early_init_r(void)
{
	return 0;
}
