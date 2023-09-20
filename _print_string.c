#include "main.h"

/**
 * print_string - Function to print a string
 * @s: Input arguments
 * Return: Number of characters printed
 */

void print_string(const char *s)
{
while (*s)
{
_putchar(*s++);
}
}
