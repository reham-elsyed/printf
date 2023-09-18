#include "main.h"

/**
 * print_string - Function to print a string
 * @args: Input arguments
 * Return: Number of characters printed
 */

int print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;

if (str == NULL)
str = "(null)";

while (*str)
{
if (*str >= 32 && *str < 127)
{
our_putchar(*str);
count++;
}
else
{
our_putchar('\\');
our_putchar('x');
our_putchar((*str >> 4) + '0');
our_putchar((*str & 0x0F) + '0');
count += 4;
}
str++;
}
return (count);
}
