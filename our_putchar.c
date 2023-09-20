#include "main.h"
/**
 * _putchar - print a character
 * @ch: cahacter input
 * Return: return (1).
*/
int _putchar (char ch)
{
	return (write(1, &ch, 1));
}
