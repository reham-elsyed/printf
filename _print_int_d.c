#include "main.h"

/**
 * print_int - Function to print decimal
 * @n: Input arguments
 * Return: Number of characters printed (always 1)
 */
void print_int(int n)
{
char buf[32];
int curr = 0;
int i;
int digit;
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
}
else
{
while (n)
{
digit = n % 10;
buf[curr++] = '0' + digit;
n /= 10;
}
for (i = curr - 1; i >= 0; i--)
{
__putchar(buf[i]);
}
}
}
/**
 * print_uint - function to print unint
 *@n: input num
 */
void print_uint(unsigned int n)
{
char buf[32];
int curr = 0;
int digit, i;

if (n == 0)
{
_putchar('0');
}
else
{
while (n)
{
digit = n % 10;
buf[curr++] = '0' + digit;
n /= 10;
}
for (i = curr - 1; i >= 0; i++)
{
_putchar(buf[i]);
}
}
}
