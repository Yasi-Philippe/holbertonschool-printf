#include "main.h"
/**
 * print_string - prints the string provided
 * @args: list of arguments
 *
 * Return: length of the string
 */
int print_string(va_list args)
{
	char *ptr = va_arg(args, char *), *ptr_null = "(null)";
	int len = 0;

	if (!ptr)
	{
		while (*ptr_null)
		{
			_putchar(*ptr_null);
			ptr_null++;
		}
		return (6);
	}
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
		len++;
	}
	return (len);
}
