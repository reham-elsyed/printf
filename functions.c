#include "main.h"

/**
 *_prnt_char - function to print char
 *@arg: input char
 *Return: 1
 */
int _prnt_char(va_list args)
{
int character = va_arg(args, int);
_putchar(character);
return (1);
}
/**
* _prnt_string - function to print string
* @args: arg input
* Return: string
*/
int _prnt_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
return (_puts("(null)"));
return (_puts(str));
}
/**
* _prnt_percent _ print percentsign
* @args: input argumnt
* Return: 1
*/
int _prnt_percent(va_list args)
{
_putchar('%');
return (1);
}
