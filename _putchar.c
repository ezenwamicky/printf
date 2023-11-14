#include "main.h"
/**
 *_putchar - wtite the character to stdout
 *@c: the character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
