#include "main.h"

/**
 * print_int_i - Function to print a integer
 * @args: Input arguments
 * Return: Number of characters printed (always 1)
 */
int print_int_i(va_list args)
{
	int ntgr = va_arg(args, int);
	int prntd_ntgr = 1, n, m = ntgr % 10;
	int num, pwr = 1;

	n = ntgr, ntgr = ntgr / 10;

	if (n > 0)
	{
		while ((n / 10) != 0)
		{
			pwr = pwr * 10, n = n / 10;
		}
		n = ntgr;
		while (pwr > 0)
		{
			num = ntgr / pwr;
			our_putchar(num + '0');
			n = n - (num * pwr);
			pwr = pwr / 10;
			prntd_ntgr++;
		}
	}
	if (m < 0)
	{
		our_putchar('-');
		n = -n, ntgr = -ntgr, m = -m;
		prntd_ntgr++;
	}
	our_putchar(m + '0');
	return (prntd_ntgr);
}
