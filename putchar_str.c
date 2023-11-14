#include "main.h"
/**
 *_putchar_str - writes a string to the stdout
 *@str: the string to print
 *Return: the number of characters written
 */
int _putchar_str(const char *str)
{
	int count = 0;

	if (str == NULL)
		return (-1);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
