#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c); /*used to print chars*/
int print_str(const char *str); /*used to print strings of characters*/
int _printf(const char *format, ...);
int handle_str(char *str);

#endif
