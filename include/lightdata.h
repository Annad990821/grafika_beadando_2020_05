#ifndef LIGHTDATA_H
#define LIGHTDATA_H

#include "utils.h"

typedef struct Ldata
{
	float r;
	float g;
	float b;
	float f;
	float anglex;
	float angley;
	float anglez;
} Ldata;

Ldata ldata;

#endif /* LIGHTDATA_H */