#ifndef NETWORK_H
#define NETWORK_H

#include "main.h"

#define REPLFSGROUP 0xe0010101

int network_init(unsigned short, struct sockaddr *, int *);

#endif