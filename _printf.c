#include "main.h"

/**
 *_printf - function to print stout
 *@format: string
 *@...: args
 *Return: prnt num
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int prntd_ch = 0;
int n, printed= 0;
int flags, wdth, perc, size, buff_int; = 0;
char buff[BUFF_SIZE];

if (format == NULL)
return (-1);

for (n = 0; format && format[n] != '\0'; n++)
{
if (format[n] != '%')
{
buuf[buff_int++] = format[n];
if (buff_int == BUFF_SIZE)
prnt_buff(buff, &buff_int);
prntd_ch++;
}
else
{
prnt_buff(buffer, &buff_int);
flags = get_flags(format, &n);
wdth = get_wdth(format, &n, args);
perc = get_precision(format, &n, args);
size = get_size(format, &n);
++n;
printed = handle_print(format, &n, args, buff,
flags, wdth, perc, size);
if (printed == -1)
return (-1);
prntd_ch += printed;
}
}
prnt_buff(buffer, &buff_int);
va_end(args);
return (prntd_ch);
}
