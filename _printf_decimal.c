#include "main.h"

/**
 * print_int_d - Function to print decimal
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_int_d(va_list args)
{
	int n = va_arg(args, int);
	int digit, num, end = n % 10;
	int i = 0;
	int divisor = 1;

	if (n < 0)
	{
		our_putchar('-');
		num = -n;
		end = -end;
		i++;
	}
	else
	{
		num = 0;
	}
	while (num / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = (d / divisor) % 10;
		our_putchar('0' + digit);
		divisor /= 10;
		i++;
	}
	i++;
	our_putchar(end + '0');
	return (i);
}
