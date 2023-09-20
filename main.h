#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int (*handle_now(char ch))(va_list step);
int handle_specifier(char specifier, va_list args);
int handle_int_specifiers(char specifier, va_list args);



/**
 * struct specifiers - look for specifiers
 * @srch: specefiers
 * @f: function associated
*/
typedef struct specifiers
{
	char *srch;
	int (*f)(va_list);
} specifier_search;

int (*search_flags(const char *format))(va_list);

/***/


/**fuction***/
int print_int(int n);
int print_pointer(void *ptr);
int print_uint(unsigned int n);
int print_octal(unsigned int n);
int print_hexadecimal(unsigned int n);
int print_hexadecimal_lowercase(unsigned int n);
int print_string(const char *s);
int  handle_specifier(char specifier, va_list args);
int  handle_int_specifiers(char specifier, va_list args);
int _printf(const char *format, ...);
/***printfunctions***/

int our_puts(char *ch);
int our_putchar (char ch);

/****print_char****/
/** sterlen**/
int _strlen(char *s);
int _strlenptr(const char *s);
int print_percent(void);
/*int to_print_char(char chr);*/
/**int digit_char(char chr);*/
int print_int_d(va_list args);
int print_int_i(va_list args);
int print_char(va_list args);
int _printf_binary(va_list bnr);


/*********reversed string*****/
int print_rev(va_list est);
int _printf_rot13(va_list args);

#endif
