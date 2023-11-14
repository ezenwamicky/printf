#include "main.h"
/**
 *handle_str - handles all string format
 *@str : string input
 *Return: always Return print_str on default
 */
int handle_str(char *str)
{
	if (str == NULL)
	{
		print_str("(null)");
		return (6);
	}
	else
	{
		return (print_str(str));
	}
}
