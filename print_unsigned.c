#include "main.h"
/**
 * print_unsigned - prints an unsigned integer.
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	int dec = va_arg(args, int);
	int len = 1;
	int digits = 1;

	while (dec < 0)
		dec += INT_MAX;
	while (dec / digits >= 10)
	{
		digits *= 10;
		len++;
	}
	while (digits > 1)
	{
		_putchar('0' + (dec / digits));
		dec %= digits;
		digits /= 10;
	}
	_putchar('0' + dec);
	return (len);
}
