#include "main.h"
/**
 *print_char - prints char
 *@args: va_list containing the character to be printed
 *Return: number of characters printed
 */
int print_char(va_list args)
{
	char ch = va_arg(args, int);

	_putchar(ch);

	return (1);
}
