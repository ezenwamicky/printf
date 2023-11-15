#include "main.h"
/**
 *integer_str - function converts an int to a str and return len
 *@buffer: character input
 *@num: argument to be converted
 *Return: always length of the integer
 */
int integer_str(char *buffer, int num)
{
	return (snprintf(buffer, 12, "%d", num));
}
