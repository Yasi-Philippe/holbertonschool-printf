#include "main.h"
/**
 * print_hexa_capital - prints a number in hexa base with capital letters.
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_hexa_capital(va_list args)
{
	long int dec = va_arg(args, int);
	int len = 1;
	int digits = 1;

	while (dec < 0)
	{
		dec += (INT_MAX);
		dec += (INT_MAX);
		dec += 2;
	}
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
			_putchar('A' + (dec / digits) - 10);
		dec %= digits;
		digits /= 16;
	}
	if (dec / digits <= 9)
		_putchar('0' + (dec / digits));
	else
		_putchar('A' + (dec / digits) - 10);
	return (len);
}
