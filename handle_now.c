#include "main.h"
/**
 * handle_now - it's time to handle unhandled
 * @ch: pointer of ch
 * Return: Always (0)
*/
int (*handle_now(char ch))(va_list step)
{
	(void)step;
	int h;
	char *wxz;
	int (*f)(va_list step);

	array_struct prntd[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", _print_int_d},
		{"i", _print_int_i},
		{"r", print_rev},
		{NULL, NULL}
	};

	for (h = 0; prntd[h].wxz != '\0'; h++)
	{
		if (prntd[h].wxz[0] == ch)
		{
			return (prntd[h].f);
		}
	}
	return (NULL);
}
