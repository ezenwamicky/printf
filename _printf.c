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
				char s = va_arg(args, int);

				count += _putchar(s);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				count += print_str(str);
			}
			else if (*format == '%')
			{
				count += _putchar('%');
			}
			else
			{
				print_str("unidentified format\n");
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
