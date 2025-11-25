#include "main.h"
/**
 * _printf - prints a string passed into it including conversion specifiers
 * @format: input string to print
 *
 * Return: length of the string printed
 */
int _printf(const char *format, ...)
{
	unsigned int index_format = 0, len = 0;
	int a = 0;
	int *ptr = &a;
	va_list args;

	if (!format)
		return (0);
	va_start(args, format);
	while (format[index_format])
	{
		if (format[index_format] == '%')
		{
			if (format[index_format + 1] != '\0')
				len += conversion(format[index_format + 1], args, ptr);
			else
				return (-1);
		}
		else
		{
			_putchar(format[index_format]);
			len++;
		}
		index_format += 1 + a;
		a = 0;
	}
	va_end(args);
	return (len);
}
