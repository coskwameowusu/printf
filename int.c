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

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int x = va_arg(colly, int);

				counter += printf("%d", x);
			}
			else
			{
			putchar('%');
			counter++;
			}
		}
		else
		{
			putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(colly);
	return (counter);
}
