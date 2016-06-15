/*
 * Copyright (C) 2016 Bin Meng <bmeng.cn@gmail.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

OperationRegion(GNVS, SystemMemory, 0xdeadbeef, 0x100)
Field(GNVS, ByteAcc, NoLock, Preserve)
{
	Offset (0x00),
	PCNT, 8,	/* processor count */
}
