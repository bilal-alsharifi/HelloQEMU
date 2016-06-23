/******************************************************************************
 *
 * serial_goldfish.c - U-Boot serial port implementation for goldfish
 *
 * Copyright (c) 2013 Roger Ye.  All rights reserved.
 * Software License Agreement
 *
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
 * NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
 * NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. The AUTHOR SHALL NOT, UNDER
 * ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
 * DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 *****************************************************************************/

#include <serial_goldfish.h>


int main(int argc, char *argv[])
{
	struct serial_device *drv;
	drv = default_serial_console();
	drv->start();
	if(argc == 1) {
		drv->puts(argv[0]);
	}
	return 1;
}
