#include "main.h"
#include <stdio.h>

/**
 * _puts - function to print str
 * @strng: input string to the fun
 * Return: nothing
*/

int _puts(char *strng)
{
char *s = strng;
while (*strng)
_putchar(*strng++);
return (strng - s);
}

/**
* _putchar - print string by character
* @ch: input character
* Return: 0
*/
int _putchar(int ch)
{
return (write(1, &ch, 1));
}
#include "main.h"

/**
 * append_hexa_code - Append ascci in hexadecimal code-buffer
 * @buffer: Arry of chrs.
 * @i: Index of start appending.
 * @ascii_code: ASSCCODE.
 * Return: Always3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
char map_to[] = "0123456789ABCDEF";
/* The hexa format code-is-always 2-digits-long */
if (ascii_code < 0)
ascii_code *= -1;
buffer[i++] = '\\';
buffer[i++] = 'x';
buffer[i++] = map_to[ascii_code / 16];
buffer[i] = map_to[ascii_code % 16];
return (3);
}
/**
 * convert_size_number - Casts a numbero the spefied size
 * @nums: Number to be casted.
 * @size: Number indicat theprnt_buffe tobe casted.
 *
 * Return:value of num
 */
long int convert_size_number(long int nums, int size)
{
if (size == S_LONG)
return (nums);
else if (size == S_SHORT)
return ((short)nums);
return ((int)nums);
}

/**
 * convert_size_unsgnd - Casts anumber tothe specified sze
 * @nums: Number to be castd
 * @sze: Numberthe prnt_buffe to be casted
 *
 * Return:  value of nums
 */
long int convert_size_unsgnd(unsigned long int nums, int sze)
{
if (sze == S_LONG)
return (nums);
else if (sze == S_SHORT)
return ((unsigned short)nums);
return ((unsigned int)nums);
}
