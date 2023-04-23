#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints all
 * @format: param
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int p = 0, q, r = 0;
	char *lad;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[p])
	{
		q = 0;
		while (t_arg[q])
		{
			if (format[p] == t_arg[q] && r)
			{
				printf(", ");
				break;
			} q++;
		}
		switch (format[p])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), r = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), r = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), r = 1;
			break;
		case 's':
			lad = va_arg(valist, char *), r = 1;
			if (!lad)
			{
				printf("(nil)");
				break;
			}
			printf("%s", lad);
			break;
		} p++;
	}
	printf("\n"), va_end(valist);
}
