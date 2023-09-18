#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>



/**fuction***/
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
/***printfunctions***/

int our_puts(char *ch);
int our_putchar (char ch);

/****print_char****/

/*int to_print_char(char chr);*/
int digit_char(char chr);

#endif
