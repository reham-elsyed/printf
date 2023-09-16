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

