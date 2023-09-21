#include "main.h"

/**
 * print_string - Function to print a string
 * @s: Input arguments
 * Return: Number of characters printed
 */

int print_string(const char *s)
{
	int count = 0;
while (*s)
{
count += _putchar(*s++);
}
return (count);
}
