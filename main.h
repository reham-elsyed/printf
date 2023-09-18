#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>



#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/**
 * struct: to hold all flags
*/
struct Flag
{
char flagChar;
int flagValue;
};

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */

struct fmt {
    char fmt;
    int (*fn)(va_list, char[], int, int, int, int);
};



typedef struct fmt fmt_t;

/**macros for size*/

#define S_LONG 2
#define S_SHORT 1

/**functions*/

int print_char(va_list prnt_buffes, char buffer[],
        int flags, int width, int precision, int size);

int print_percent(va_list prnt_buffes, char buffer[],
int flags, int width, int precision, int size);
int print_string(va_list prnt_buffes, char buffer[],
int flags, int width, int precision, int size);

int is_digit(char c);
int get_size(const char *format, int *n);
int get_precision(const char *format, int *n, va_list args);
int get_flags(const char *format, int *n);
/***********task 1**********/

int _print_int(va_list hndl, handle_t *handler);

/******task 2******/
int _print_binary(va_list hndl, handle_t *handler);
/****print_char****/

int to_print_char(char chr);
int digit_char(char chr);

/*****get flags, width, precision, length modifier*****/

int _getflags(const char *format, int *n);
int _getwidth(const char *format, int *n, va_list args);
int _getprecision(const char *format, int *n, va_list args);

/****task 3******/

/***_putchar file**/
long int convert_size_unsgnd(unsigned long int nums, int sze);
long int convert_size_number(long int nums, int size);
int append_hexa_code(char ascii_code, char buffer[], int i);

int our_putchar (char ch);
int our_puts(char *ch);

/******handle file ***************/
void init_handle(va_list hndl, handle_t *handler);

#endif
