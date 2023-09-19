#include "main.h"

/**
 * print_int_d - Function to print decimal
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_int_d(va_list args)
{
	int d = va_arg(args, int);
	int digit, num, end = n % 10;
	int i = 1;
	int divisor = 1;

	d = d / 10;
	num = d;
	if (n < 0)
	{
		our_putchar('-');
		d = -d;
	}
	if (end < 0)
	{
		our_putchar('-');
		num = -num, n = -n, end = -end;
		i++;
	}
	if (num > 0)
	{
		if (d / divisor >= 10)
		{
			divisor *= 10;
		}
		if (divisor > 0)
		{
			digit = (d / divisor) % 10;
			our_putchar('0' + digit);
			divisor /= 10;
			i++;
		}
	}
	our_putchar(end + '0');
	return (i);
}
