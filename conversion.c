#include "main.h"
/**
 * conversion - checks the conversion specifier and calls the needed function
 * @letter: letter to be checked from the format
 * @args: list of arguments
 * @ptr: pointer that checks whether a conversion specifier is used
 *
 * Return: number of characters printed
 */
int conversion(char letter, va_list args, int *ptr)
{
	print_struct specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_number},
		{'i', print_number},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexa},
		{'X', print_hexa_capital},
		{'\0', NULL},
	};

	unsigned int index_array = 0;

	while (specifiers[index_array].key)
	{
		if (letter == specifiers[index_array].key)
		{
			*ptr = 1;
			return (specifiers[index_array].ptr(args));
		}
		index_array++;
	}
	_putchar('%');
	return (1);
}
