#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * struct structprint - struture containing
 * @q: The location and method to translate data to character
 * @u: print function for specific type
 *
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

/**
 * struct flag - struture containing
 * @pluse: flag id '+' character
 * @hash: flag id '#' character
 * @space: flag id ' ' charater
 */
typedef struct flags
{
	int plus;
	int hash;
	int space;
} flag_t;


/**
 * struct printHandler - struture containing
 * @c: The location and method to translate data to character
 * @f: print function for specific type
 *
 * Return: int
 */
typedef struct structprint
{
        char c;
        int (*f)(flags_t *f, va_list ap);
} ph;


int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
#endif
