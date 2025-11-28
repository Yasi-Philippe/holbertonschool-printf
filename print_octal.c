#include "main.h"
/**
 * print_octal - prints a number in octal base.
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
	int dec = va_arg(args, int);
	int len = 1;
	int digits = 1;

	while (dec / digits >= 8)
	{
		digits *= 8;
		len++;
	}
	while (digits > 1)
	{
		_putchar('0' + (dec / digits));
		dec %= digits;
		digits /= 8;
	}
	_putchar('0' + dec);
	return (len);
}
