#include "main.h"

/**
 *_printf - function to print stout
 *@format: string input to function
 *@...: args
 *Return: prnt num of printed character
 */
int _printf(const char *format, ...)
{
	int prntd_ch = 0, n = 0;
	va_list args;
	int (*hndl)(va_list);

	va_start(args, format);
	if (format && format[n] != '\0')
	{
		for (format[n] != '\0'; n++; prntd_ch++)
		{
			if (format[n] != '%')
			{
				our_putchar(format[n]);
			}
			else if (!format || (format[n] == '%' && format[n + 1] == '\0'))
			{
				return (-1);
			}
			else if (format[n] == '%' && format[n + 1] != '\0')
			{
				hndl = handle_now(forma[n + 1]);
				if (hndl == NULL)
				{
					our_putchar(format[n]);
				}
				else
				{
					prntd_ch = (prntd_ch + hndl(args)) - 1;
					n++;
				}
			}
		}
	}
	va_end(args);
	return (prntd_ch);
}
