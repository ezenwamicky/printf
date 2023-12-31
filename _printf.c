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
			switch (*format)
			{
			case 'c':
				count += print_char(args);
				break;
			case 's':
				count += print_str(args);
				break;
			case 'd':
			case 'i':
				count += print_int(args);
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				fprintf(stderr, "%%%c", *format);
				va_end(args);
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
