#include "main.h"

/**
 * print_int_i - Function to print a integer
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_int_i(va_list args)
{
	int ntgr = va_arg(args, int);
	int prntd_ntgr = 0, num, pwr = 1;

	n = ntgr, ntgr = ntgr / 10;

	if (ntgr < 0)
	{
		our_putchar('-'), prntd_ntgr++;
		ntgr -= ntgr;
	}
	num = ntgr;

	while (num >= 10)
	{
		num /= 10;
		pwr *= 10;
	}
	while (pwr > 0)
	{
		num = ntgr / pwr;
		our_putchar(num + '0');
		prntd_ntgr++;
		ntgr -= num * pwr;
		pwr = pwr / 10;
	}
	return (prntd_ntgr);
}
