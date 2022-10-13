#include "variadic_functions.h"
#include <stdarg.c>
#include <stdio.h>

/**
 * print_strings - funxtion to print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: no return
 */



ioid printrings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);

