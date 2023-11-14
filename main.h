#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int print_str(va_list args);
int _putchar_str(const char *str);
int _printf(const char *format, ...);
int handle_str(char *str);
int print_char(va_list args);
#endif
