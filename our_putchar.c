#include "main.h"
/**
 * our_putchar - print a character
 * @ch: cahacter input
 * Return: return (1).
*/
int our_putchar (char ch)
{
	return (write(1, &ch, 1));
}
