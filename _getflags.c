#include "main.h"
/**
 * _getflags - count the exdisted flags
 * @format: 'print arguments from the available string'
 * @n: 'the nedded arguments to be counted'
 * Return: return (number of flags)
*/
int _getflags(const char *format, int *n)
{
	int i, size, sum_flags = 0;

	const char CH_FLAGS[] = {'+', ' ', '#', '0', '-', '\0'};
const int INT_FLAGS[] = {plus_flag, space_flag, hashtag_flag, zero_flag, minus_flag, 0};

	size = *n + 1;
	while (format[size] != '\0')
	{
		for (i = 0; CH_FLAGS[i] != '\0'; i++)
		{
			if (format[size] == CH_FLAGS[i])
			{
				sum_flags = INT_FLAGS[i];
				break;
			}
		}
		size++;

		if (CH_FLAGS[i] == '\0')
		{
			break;
		}
	}
	*n = size - 1;
	return (sum_flags);
}
