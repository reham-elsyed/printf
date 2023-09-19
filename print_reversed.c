#include "main.h"
/**
 * print_rev - print strings reversed
 * @est: arguments to be reversed
 * Return: return the reversed string
*/
int print_rev(va_list est)
{
	int v, lngth = 0;
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
	for (v = (lngth - 1); v >= 0; v--)
	{
		our_putchar(arr[v]);
	}
	return (lngth);
}
