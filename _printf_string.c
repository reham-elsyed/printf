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
/**
 * _strlenptr - function that reurn length of constant character pointer
 * @s: input char ptr
 * Description: to knoq the length of a string
 * Return: len
*/
int _strlenptr(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
