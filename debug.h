#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>
#define LOG(msg) printf("LOG : %s | FILE: %s | LINE: %d\n", msg, __FILE__,
		__LINE__)

#endif
