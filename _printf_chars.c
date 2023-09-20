#include "main.h"

/**
 * print_char - Function to print a character
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list args)
{
char ch;

ch = va_arg(args, int);

if (ch <= 0 && ch <= 255)
{
	our_putchar(ch);
	return (1);
}
else
{
	return (-1);
}
}