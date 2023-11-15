#include "main.h"
/**
 *print_str - prints a string
 *@args : va_list containing the string to be printed
 *Return: number of character printed
 */
int print_str(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		return (_putchar_str("\"(null)\""));
		return (_putchar_str(str));
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
