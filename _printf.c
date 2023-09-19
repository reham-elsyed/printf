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
	if (format)
	{
		for (n = 0; format[n] != '\0'; n++)
		{
			if (format[n] != '%')
			{
				our_putchar(format[n]);
				n++, prntd_ch++;
			}
			else if (format[n] == '%' && format[n + 1] != '\0')
			{
				hndl = handle_now(format[n + 1]);
				if (hndl == NULL)
				{
					our_putchar('%');
					n++, prntd_ch++;
				}
				else
				{
					prntd_ch += hndl(args);
				}
				n++;
			}
			else
			{
				our_putchar(format[n]);
				prntd_ch++;
			}
		}
	}
	va_end(args);
	return (prntd_ch);
}
