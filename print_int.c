#include "main.h"
/**
 *print_int - function to print an integer
 *@args: arguments to be printed
 *Return: always the buffer number count
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	char buffer[12];
	int length = integer_str(buffer, num);

	_putchar_str(buffer);

	return length;
}
