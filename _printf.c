#include "main.h"
/**
 * _printf - Prints formatted output to stdout.
 * @format: Format string containing format specifiers.
 * @...: Variable number of arguments corresponding to format specifiers.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				count += print_char(args);
			}
			else if (*format == 's')
			{
				count += print_str(args);
			}
			else if (*format == '%')
			{
				count += _putchar('%');
			}
			else
			{
				_putchar_str("unidentified format\n");
				return (-1);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
