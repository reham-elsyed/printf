#include "main.h"
/**
 * _printf_binary - print binary numbers
 * @bnr: arguments
 * Return; return (1);
*/
int _printf_binary(va_list bnr)
{
	int i, b, count = 0;
	unsigned int num;

	b= (num >> i) & 1;
	num - va_arg(bnr, unsigned int);

	for (i = 31; i >= 0; i--)
	{
		if (b || i == 0)
		{
			our_putchar('0' + b);
			count++;
		} 
	}
	return (count);
}
