#include "main.h"
/**
 *_printf - prints formatted output to stdout.
 *@format: Format string containing format specifiers.
 *@...: variable number of arguments corresponding to format specifiers
 *Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;

	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);
				write(1. &c, 1);
				count++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);
				while (*s)
				{
					write(1, s, 1);
					s++;
					count++;
				}
			}
			else if (format[i] =='%')
			{
				write(1, "%", 1);
				count++;
			}
			i++;
		}
	}
	va_end(args);

	return (count);
}
