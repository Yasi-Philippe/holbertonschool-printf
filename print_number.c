#include "main.h"
/**
 * print_nmbr - prints an integer number recursively
 * @num: integer number to print
 *
 * Return: number of characters printed
 */
int print_nmbr(int num)
{
	int len = 0;

	if (num >= 10)
		len += print_nmbr(num / 10);
	_putchar('0' + num % 10);
	return (len + 1);
}
/**
 * print_number - prints an integer number
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_number(va_list args)
{
	int dec = va_arg(args, int);
	int len = 0;

	if (dec < 0)
	{
		_putchar('-');
		len++;
		if (dec == INT_MIN)
		{
			len += print_nmbr(-(dec / 10));
			_putchar('0' - dec % 10);
			return (len + 1);
		}
		dec = -dec;
	}
	len += print_nmbr(dec);
	return (len);
}
