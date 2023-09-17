#include "main.h"
/**
 * _getwidth - count the width presented
 * @format: 'arguments printed from string format'
 * @n: 'the number to be printed'
 * @args: 'list of argumets'
 * Return: return (width)
*/
int _getwidth(const char *format, int *n, va_list args)
{
	int size, w = 0;

	size = *n + 1;
	while(format[size] != '\0')
	{
		for(digit_char(format[size]))
		{
			w *= 10;
			w += format[size] - '0';
		}
		else if (format[size] == '*')
		{
			size++;
			w - va_arg(args, int);
			break;
		}
		else
		{
			break;
		}
		size++;
	}
	*n = size - 1;
	return (w);
}
