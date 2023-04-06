#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int _pow(int x, int y);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif