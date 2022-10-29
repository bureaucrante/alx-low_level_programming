#ifndef _MAIN_H_
#define _MAIN_H_

/* LIBRARIES */

#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void binarator(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif
