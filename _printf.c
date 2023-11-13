#include "main.h"
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


	while (*format != '\0')
	{
		if (*format == '%')
        {
            format++;


            if (*format == '\0')
            {
                fprintf(stderr, "Error: Incomplete format specifier\n");
                va_end(args);
                return -1; 
            }

            switch (*format)
            {
            case 'c':
            {
                char c = va_arg(args, int);
                putchar(c);
                charcount++;
                break;
            }
            case 's':
            {
                char *str = va_arg(args, char *);
                if (str == NULL)
                    str = "(null)";
                while (*str != '\0')
                {
                    putchar(*str);
                    str++;
                    charcount++;
                }
                break;
            }
            case '%':
                putchar('%');
                charcount++;
                break;
            default:
                fprintf(stderr, "Error: Unsupported format specifier %%%c\n", *format);
                va_end(args);
                return -1;
            }
        }
        else
        {
            putchar(*format);
            charcount++;
        }

        format++;
    }

    va_end(args);
    return charcount;
}
