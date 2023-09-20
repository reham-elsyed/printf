#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * search_flags - check the format for _printf
 * @format: format ('c', 's', 'i', 'd'...etc)
 * Return: failed return (NULL), on success return (format)
*/
int (search_flags(const char *format))(va_list)
{
        unsigned int count = 0;
        specifier_search flags_f[] = {
                {"c", print_char}, {"s", print_string}, {"%", print_percent},
                {NULL, NULL}
        };
        while (flags_f[count].srch)
	{
                if (flags_f[count].srch[0] == (*format))
		{
                        return (flags_f[count].f);
		}
                count++;
	}
        return (NULL);
}
