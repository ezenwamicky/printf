#include "main.h"
/**
 *handlechar - handles characters variables
 *@args : variable arguments
 *@charcount : arguments count variable
 */
void handlechar(va_list args, int *charcount)
{
	char c = va_arg(args, int);

	putchar(c);
	(*charcount)++;
}
/**
 *handlestring - handles string of characters variables
 *@args : variable arguments
 *@charcount : arguments count variable
 */
void handlestring(va_list args, int *charcount)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		putchar(*str);
		str++;
		(*charcount)++;
	}
}
/**
 *handlepercent - handles percrnt placeholder variables
 *@charcount : arguments count variable
 */
void handlepercent(int *charcount)
{
	putchar('%');
	(*charcount)++;
}

/**
 *_printf - prints formatted output to stdout.
 *@format: Format string containing format specifiers.
 *@...: variable number of arguments corresponding to format specifiers
 *Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int charcount = 0;

	va_list args;

	va_start(args, format);

	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
				handlechar(args, &charcount);
				break;

				case 's':
				handlestring(args, &charcount);
				break;

				case '%':
				handlepercent(&charcount);
				break;

				default:
				putchar(*format);
				charcount++;
				break;
			}
		}
		else
		{
			putchar(*format);
			charcount++;
		}
	}
	va_end(args);
	return (charcount);
}
