#include "main.h"

/**
*handle_int_specifiers - Handle integer specifiers (%d, %x, %o, %u)
*@specifier: The format string
*@args: The variable arguments list
*/
void handle_int_specifiers(char specifier, va_list args)
{
switch (specifier)
{
case 'X':
{
unsigned int x = va_arg(args, unsigned int);
print_hexadecimal(x);
break;
}
case 'o':
{
unsigned int o = va_arg(args, unsigned int);
print_octal(o);
break;
}
case 'i':
{
int n = va_arg(args, int);
print_int(n);
break;
}
case 'u':
{
unsigned int u = va_arg(args, unsigned int);
print_uint(u);
break;
}
case 'p':
{
void *ptr = va_arg(args, void *);
print_pointer(ptr);
break;
}
default:
{
_putchar('%');
_putchar(specifier);
break;
}
}
}

/**
*handle_specifier - Handle character and string specifiers
*@specifier: The format string
*@args: The variable arguments list
*/
void handle_specifier(char specifier, va_list args)
{
switch (specifier)
{
case 'c':
{
char ch = va_arg(args, int);
_putchar(ch);
break;
}
case 's':
{
const char *s = va_arg(args, const char *);
print_string(s);
break;
}
case 'd':
{
int n = va_arg(args, int);
print_int(n);
break;
}
case 'x':
{
unsigned int x = va_arg(args, unsigned int);
print_hexadecimal_lowercase(x);
break;
}
case '%':
{
_putchar('%');
break;
}
default:
{
_putchar('%');
_putchar(specifier);
break;
}
}
}
