#include "main.h"

/**
 * print_int_i - Function to print a integer
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_int_i(va_list args)
{
	int i = va_arg(args, int);

	our_putchar(i);
	return (1);
}
