#include "main.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_pointer - Print a pointer address in hexadecimal format
 * Description: pointer
 * @ptr: The pointer to be printed
 * Return: on Success return (count)
 */
int print_pointer(void *ptr)
{
	int count = 0;
int leading_zeros = 0;
int i;
char digit;
uintptr_t value = (uintptr_t)ptr;
char hex_digits[] = "0123456789abcdef";
count += _putchar('0');
count += _putchar('x');
for (i = sizeof(uintptr_t) * 2 - 1; i >= 0; i--)
{
digit = hex_digits[(value >> (i * 4)) & 0xF];
if (digit != '0' || leading_zeros || i == 0)
{
leading_zeros = 1;
count += _putchar(digit);
}
}
return (count);
}
/**
 * print_octal - Print an octal number
 * @n: The unsigned integer to be printed in octal
 * Return: count
 */
int print_octal(unsigned int n)
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
digit = n % 8;
buf[curr++] = '0' + digit;
n /= 8;
}
for (i = curr - 1; i >= 0; i--)
{
count += _putchar(buf[i]);
}
}
return (count);
}
/**
 * print_hexadecimal - function to prnt
 * Descsription: hexadecimal
 * @n: input int
 * Return: count
*/
int print_hexadecimal(unsigned int n)
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
digit = n % 16;
if (digit < 10)
{
buf[curr++] = ('0' + digit);
}
else
{
buf[curr++] = ('A' + (digit - 10));
}
n /= 16;
}
for (i = curr - 1; i >= 0; i--)
{
count += _putchar(buf[i]);
}
}
return (count);
}
/**
 * print_hexadecimal_lowercase - function to return hexa
 * @n: input
 * Return: (coun
 */
int print_hexadecimal_lowercase(unsigned int n)
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
digit = n % 16;
if (digit < 10)
{
buf[curr++] = '0' + digit;
}
else
{
buf[curr++] = 'a' + (digit - 10);
}
n /= 16;
}
for (i = curr - 1; i >= 0; i--)
{
count += _putchar(buf[i]);
}
}
return (count);
}
