#include "main.h"

/**
* handle_specifiers - Handle integer specifiers (%d, %x, %o, %u)
* @specifier: The format string
* @args: The variable arguments list
* Return: count
*/
int handle_specifiers(va_list args)
{
	char specifier = 0;
	int count = 0;
	switch (specifier)
	{
		case 'X':
			{
				unsigned int x = va_arg(args, unsigned int);
				count += print_hexadecimal(x);
				break;
			}
		case 'o':
			{
				unsigned int o = va_arg(args, unsigned int);
				count += print_octal(o);
				break;
			}
		case 'i':
			{
				int n = va_arg(args, int);
				count += print_int(n);
				break;
			}
		case 'u':
			{
				unsigned int u = va_arg(args, unsigned int);
				count += print_uint(u);
				break;
			}
		case 'p':
			{
				void *ptr = va_arg(args, void *);
				count += print_pointer(ptr);
				break;
			}
		case 'c':
			{
				char ch = va_arg(args, int);
				_putchar(ch);
				count++;
				break;
			}
		case 's':
			{
				const char *s = va_arg(args, const char *);
				count += print_string(s);
				break;
			}
		case 'd':
			{
				int n = va_arg(args, int);
				count += print_int(n);
				break;
			}
		case 'x':
			{
				unsigned int x = va_arg(args, unsigned int);
				count += print_hexadecimal_lowercase(x);
				break;
			}
		case '%':
			{
				count += _putchar('%');
				break;
			}
		default:
			{
				count += _putchar('%');
				count += _putchar(specifier);
				break;
			}
	}
			return (count);
}
