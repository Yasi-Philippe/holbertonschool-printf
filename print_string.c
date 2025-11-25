#include "main.h"
/**
 * print_string - prints the string provided
 * @args: list of arguments
 *
 * Return: length of the string
 */
int print_string(va_list args)
{
	char *ptr = va_arg(args, char *);
	int len = 0;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
		len++;
	}
	return (len);
}
