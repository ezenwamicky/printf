#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024


int _putchar(char c);
int print_str(va_list args);
int _putchar_str(const char *str);
int _printf(const char *format, ...);
int handle_str(char *str);
int print_char(va_list args);
int integer_str(char *buffer, int num);
int print_int(va_list args);
#endif
