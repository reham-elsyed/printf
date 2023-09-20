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
void print_int(int n);
void print_pointer(void *ptr);
void print_uint(unsigned int n);
void print_octal(unsigned int n);
void print_hexadecimal(unsigned int n);
void print_hexadecimal_lowercase(unsigned int n);
void print_string(const char *s);
void handle_specifier(char specifier, va_list args);
void handle_int_specifiers(char specifier, va_list args);
int _printf(const char *format, ...);
/***printfunctions***/

int our_puts(char *ch);
int _putchar (char ch);


/*********reversed string*****/
int print_rev(va_list est);


#endif
