#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: The conversion specifier to prints
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
