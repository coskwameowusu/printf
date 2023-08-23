/**
  * _printf - A function to print to stdout
  * Authors - Dahesey and Collins
  * @format: a pointer to elements of the function 
  * Return: 0
  */
#include "main.h"
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list colly;

	va_start(colly, format);

	while (format != NULL)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd')
			{
				int x = va_arg(colly, int);

				putchar(x);
				counter++;
			}
		}
		format++;
	}
	va_end(colly);
	return (counter);
}
