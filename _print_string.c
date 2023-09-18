#include "main.h"

/**
 * print_string - Function to print a string
 * @args: Input arguments
 * Return: Number of characters printed
 */

int print_string(va_list args)
{
char *str = va_arg(args, char *);
int len = 0;
while (str[len] != '\0')
{
putchar(str[len]);
len++;
}
return (len);
}

/**
 * _strlen - function that return the length of a string
 * @s: input value
 * Return: length success
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (0 + _strlen(s + 1));
}
