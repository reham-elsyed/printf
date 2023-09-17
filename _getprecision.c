#include "main.h"
/**
 * _getprecision - count the precision
 * @format: 'arguments in string format'
 * @n: 'number of arguments'
 * @args: 'list of arguments'
 * Return: return (prcsn)
*/
int _getprecision(const char *format, int *n, va_list args)
{
	int prcsn = -1, size;

	size = *n + 1;
	while (format[size] != '\0')
	{
		if (digit_char(format[size]))
		{
			prcsn *= 10;
			prcsn += format[size] - '0';
		}
		else if (format[size] == '*')
		{
			size++;
			prcsn = va_arg(args, int);
			break;
		}
		else
		{
			break;
		}
		size++;
	}
	*n = size - 1;
	return (prcsn);
}
