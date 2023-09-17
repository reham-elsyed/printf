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


/**
 * get_size - Calc size to cast the arg
 * @format: Format string print the arguments
 * @i: List of arg  printed.
 * Return: Preci
 */

int get_size(const char *format, int *n)
{
int i = *n + 1;
int size = 0;

if (format[i] == 'l')
size = S_LONG;
else if (format[i] == 'h')
size = S_SHORT;

if (size == 0)
*n = i - 1;
else
*n = i;
return (size);
}

/**
 * is_digit - function to recognizw digit
 * @c: input
 *Return :int
 */
int is_digit(char c)
{
    if (c >= '0' && c <= '9')
            return (1);
    return (0);
}
