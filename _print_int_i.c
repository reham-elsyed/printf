#include "main.h"
#include <stdint.h>


/**
 * print_pointer - Print a pointer address in hexadecimal format
 * @ptr: The pointer to be printed
 */
void print_pointer(void *ptr)
{
int leading_zeros = 0;
int i;
char digit;
uintptr_t value = (uintptr_t)ptr;
char hex_digits[] = "0123456789abcdef";
_putchar('0');
_putchar('x');
for (i = sizeof(uintptr_t) * 2 - 1; i >= 0; i--)
{
digit = hex_digits[(value >> (i * 4)) & 0xF];
if (digit != '0' || leading_zeros || i == 0)
{
leading_zeros = 1;
_putchar(digit);
}
}
}
/**
 * print_octal - Print an octal number
 * @n: The unsigned integer to be printed in octal
 * Return: nothing
 */
void print_octal(unsigned int n)
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
digit = n % 8;
buf[curr++] = '0' + digit;
n /= 8;
}
for (i = curr - 1; i >= 0; i--)
{
_putchar(buf[i]);
}
}
}
/**
 * print_hexadecimal - function to prnt
 * @n: input int
 */
void print_hexadecimal(unsigned int n)
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
_putchar(buf[i]);
}
}
}
/**
 * print_hexadecimal_lowercase - function to return hexa
 * @n: input
 */
void print_hexadecimal_lowercase(unsigned int n)
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
_putchar(buf[i]);
}
}
}
