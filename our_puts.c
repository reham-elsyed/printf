#include "main.h"
/**
 * our_puts - print strings
 * @ch: string
 * Return: return (number of bytes)
*/
int our_puts(char *ch)
{
	int n_bytes;

	if (ch)
	{
		for (n_bytes = 0; ch[n_bytes] != '\0'; n_bytes++)
		{
			our_putchar(ch[n_bytes]);
		} 
	}
	return (n_bytes);
}
