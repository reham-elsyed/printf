#include "main.h"

/**
 * print_char - Function to print a character
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list args)
{
int c = va_arg(args, int);
our_putchar(c);
return (1);
}
