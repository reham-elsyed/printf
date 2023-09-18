#include "main.h"

/**
 * print_int_d - Function to print a integer
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_int_d(va_list args)
{
	int d = va_arg(args, int);

	our_putchar(d);
	return (1);
}
