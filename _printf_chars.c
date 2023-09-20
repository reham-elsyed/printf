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

while (ch <= 0 && ch < 255)
{
	_putchar(ch);
	return (1);
}
}
