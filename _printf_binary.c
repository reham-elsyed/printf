#include "main.h"
/**
 * _printf_binary - print binary numbers
 * @bnr: arguments
 * Return; return (1);
*/
int _printf_binary(va_list bnr)
{
	int i, b, binary = 0;
	int *memb;
	unsigned int num;

	b = (num >> i) & 1;
	num = va_arg(bnr, unsigned int);

	while ((n / 2) != 0)
	{
		n /= 2, binary++;
	}
	binary++;
	memb = malloc(binary * sizeof(int));
	if (memb == NULL)
	{
		free(memb);
		return (0);
	}
	for (i = (binary - 1); i >= 0; i--)
	{
		our_putchar(memb[i] + '0');
		while ((b || i == 0) && (i < binary))
		{
			memb[i] = num % 2;
			num /= 2;
			i++;
		} 
	}
	free(memb);
	return (count);
}
