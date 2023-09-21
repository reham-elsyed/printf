#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int (*handle_now(char ch))(va_list step);

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
int _printf_rot13(va_list args);
int _printf_binary(va_list bnr);
/***printfunctions***/

int our_puts(char *ch);
int _putchar (char ch);


/*********reversed string*****/
int print_rev(va_list est);


#endif
