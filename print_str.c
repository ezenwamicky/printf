#include "main.h"
/**
 *print_str - prints a string of characters to stdout
 *@str: string to be printed
Return: number of count
 */
int print_str(const char *str)
{
	int count = 0;

	if (str == NULL)
	{
		printf("(null)");
		return 6;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
