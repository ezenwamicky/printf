#include "main.h"
/**
 * print_str - prints string count of characters to stdout
 *@str: string to be printed
 *Return: always the number of string count
 */
int print_str(const char *str)
{
	int count = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
