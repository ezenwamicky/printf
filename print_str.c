#include "main.h"
/**
 *print_str - prints a string of characters to stdout
 *@str: string to be printed
Return: number of count
 */
int print_str(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
