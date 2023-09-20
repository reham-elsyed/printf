#include "main.h"
/**
 * _printf_rot13 - rot13 for a string
 * @args: argumetns
 * Return: return (count)
*/
int _printf_rot13(va_list args)
{
	int ind, inx, count = 0, f = 0;
	char *str = va_arg(args, char *);
	char direct[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rotated[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
	{
		str == "(nil)";
	}
	for (ind = 0; str[ind]; ind++)
	{
		for (inx = 0; direct[inx] && !f; inx++)
		{
			if (str[ind] == direct[inx])
			{
				_putchar(rotated[inx]);
				count++;
				f = 1;
			}
		}
		if (!f)
		{
			_putchar(str[ind]);
			count++;
		}
	}
	return (count);
}
