#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints anything
 * @format: string
 *
 * Return: no. of bytes
*/

int _printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);

	int count = 0;

	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			switch (*++format)
			{
				case 'c':
					count += fprintf(stdout, "%c", va_arg(list, int));
					break;
				case 's':
					count += fprintf(stdout, "%s", va_arg(list, char *));
					break;
				case '%':
					count += fprintf(stdout, "%p", va_arg(list, void *));
					break;
				default:
					putchar('%');
					putchar(*format);
					count += 2;
					break;

			}
		}
		format++;
	}
	va_end(list);
	return (count);


}
