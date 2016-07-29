#ifndef _GPIOMUX_H_
#define _GPIOMUX_H_

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <omega2_ctrl_types.h>


int 			gpiomux_set				(char *group, char *name);
int 			gpiomux_get				(void);

int 			gpiomux_mmap_open			(void);
void 			gpiomux_mmap_close			(void);

#endif // _GPIOMUX_H_