#include "main.h"
/**
 * print_rev - print strings reversed
 * @est: arguments to be reversed
 * Return: return the reversed string
*/
int print_rev(va_list est)
{
	size_t lngth = 0;
	size_t i;
	char *arr;

	arr = va_arg(est, char *);

	if (arr == NULL)
	{
		return (-1);
	}
	while (arr[lngth] != '\0')
	{
		lngth++;
	}
	for (v = lngth; v > 0; v--)
	{
		our_putchar(arr[v - 1]);
	}
	return ((int)lngth);
}
