#include "main.h"
/**
 * to_print_char - check the characters
 * @chr: 'the character to check'
 * Return: if chr printed return (1), else return (0)
*/
int to_print_char(char chr)
{
	if (chr >= '32' && chr < '127')
	{
		return (1);
	}
	return (0);
}
/**
 * digit_char - check if the character is a digit
 * @chr: 'the character to check'
 * Return: if chr is digit return (1); else return (0)
*/
int digit_char(char chr)
{
	if (chr >= '0' && chr <= '9')
	{
		return (1);
	}
	retrun (0);
}
