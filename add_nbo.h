#pragma once

#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <netinet/in.h>

int add_nbo(uint8_t* buf1, uint8_t* buf2);
