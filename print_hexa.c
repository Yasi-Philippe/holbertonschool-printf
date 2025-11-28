#include "main.h"
/**
 * print_hexa - prints a number in hexadecimal base.
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_hexa(va_list args)
{
	int dec = va_arg(args, int);
	int len = 1;
	int digits = 1;

	while (dec / digits >= 16)
	{
		digits *= 16;
		len++;
	}
	while (digits > 1)
	{
		if (dec / digits <= 9)
			_putchar('0' + (dec / digits));
		else
			_putchar('a' + (dec / digits) - 10);
		dec %= digits;
		digits /= 8;
	}
	_putchar('0' + dec);
	return (len);
}
