#include "main.h"

/**
*handle_int_specifiers - Handle integer specifiers (%d, %x, %o, %u)
*@specifier: The format string
*@args: The variable arguments list
*Return: count
*/
int handle_int_specifiers(char specifier, va_list args)
{
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
default:
{
_putchar('%');
_putchar(specifier);
count += 2;
break;
}
}
return (count);
}

/**
*handle_specifier - Handle character and string specifiers
*@specifier: The format string
*@args: The variable arguments list
*Return: count printed characters
*/
int  handle_specifier(char specifier, va_list args)
{
	int count = 0;
switch (specifier)
{
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
