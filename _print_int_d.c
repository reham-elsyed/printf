#include "main.h"

/**
 * print_int_d - Function to print a integer
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_int_d(va_list args)
{
	int d = va_arg(args, int);
	int digit;
	int divisor = 1;

if (d < 0)
{
our_putchar('-');
d = -d;
}
while (d / divisor >= 10)
{
divisor *= 10;
}
while (divisor > 0)
{
digit = (d / divisor) % 10;
our_putchar('0' + digit);
divisor /= 10;
}
return (0);
}
