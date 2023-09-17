#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * _puts_putchar.c file
*/
int _putchar(int ch);
int _puts(char *strng);
/**
 * struct specfr - struct for specifier
 * @specfr: format input
 * @f: function for format
 */
typedef struct specfyr;
{
    char *specfyr;
    int (*f)(va_list, handle_t);
}specfyr_t;

/**
 * struct handle - check the struct to handle
 * @unsign: 'unsigned flag'
 * @plus_flag: '+'
 * @space_flag: ' '
 * @hashtag_flag: '#'
 * @h_modifier: 'h'
 * @l_modifier: 'l'
 * @width: 'width'
 * @precision: '%'
 * @zero_flag: '0'
 * @minus_flag: '-'
*/
typedef struct handler
{
        unsigned int plus_flag : 1;
        unsigned int space_flag : 1;
        unsigned int hashtag_flag : 1;
        unsigned int h_modifier : 1;
        unsigned int l_modifier : 1;
        unsigned int width;
        unsigned int precision;
        unsigned int zero_flag : 1;
        unsigned int minus_flag : 1;
} handle_t;


/**
 * _printf function to print to stout
 */

int _printf(const char *format, ...);


/***task 0**/
int _prnt_char(va_list hndl, handle_t *handler);
int _prnt_string(va_list hndl, handle_t *handler);
int _prnt_percent(va_list hndl, handle_t *handler);


/***********task 1**********/

int _prnt_int(va_list hndl, handle_t *handler);

/******task 2******/
int _prnt_binary(va_list hndl, handle_t *handler);

/****task 3******/

int _prnt_unsigned(va_list hndl, handle_t *handler);
int _prnt_octal(va_list hndl, handle_t *handler);
int _prnt_hex(va_list hndl, handle_t *handler);
int _prnt_HEX(va_list hndl, handle_t *handler);

/*** task 4*****/

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

/******* task 5******/

int _prnt_S(va_list hndl, handle_t *handler);

/****task 6****/

int _prnt_address(va_list hndl, handle_t *handler);

/***task 13****/

int _prnt_rev(va_list hndl, handle_t *handler);

/****task 14*****/

int _prnt_rot13(va_list hndl, handle_t *handler);

/****print_char****/

int to_print_char(char chr);
int digit_char(char chr);

/*****get flags, width, precision, length modifier*****/

int _getflags(const char *format, int *n);
int _getwidth(const char *format, int *n, va_list args);
int _getprecision(const char *format, int *n, va_list args);

#endif
