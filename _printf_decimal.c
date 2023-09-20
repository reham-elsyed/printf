#include "main.h"

/**
 * print_int - Function to print decimal
 * @n: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_int(int n)
{
char buf[32];
int curr = 0;
int i, count;
int digit;

count = 0;
if (n < 0)
{
count += _putchar('-');
n = -n;
}
if (n == 0)
{
count += _putchar('0');
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
count += _putchar(buf[i]);
}
}
return (count);
}
/**
 * print_uint - function to print unint
 * @n: input num
 * Return: count
*/
int print_uint(unsigned int n)
{
char buf[32];
int curr = 0;
int digit, i, count;

count = 0;
if (n == 0)
{
count += _putchar('0');
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
count += _putchar(buf[i]);
}
}
return (count);
}
