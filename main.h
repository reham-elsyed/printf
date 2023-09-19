#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct  prnt_struct - struct
 * @wxz: pointer
 * @f: variable
*/
typedef struct prnt_strct
{
	char *wxz;
	int (*f)(va_list t);
} str_uct;

int (*handle_now(char ch))(va_list step);

/**fuction***/
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
/***printfunctions***/

int our_puts(char *ch);
int our_putchar (char ch);

/****print_char****/
/** sterlen**/
int _strlen(char *s);
/*int to_print_char(char chr);*/
/**int digit_char(char chr);*/
int print_int_d(va_list args);
int print_int_i(va_list args);

/****reversed string*****/
int print_rev(va_list est)


#endif
