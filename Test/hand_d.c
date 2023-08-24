/**
  * _printf - A function that prints to standard output
  * Authors - Dahesey and Collins
  * @format: A pointer to input elements in the variadic function
  * Return: 0 on success and 1 on fail
  */
#include "main.h"
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list colly;

	va_start(colly, format);

	if (format != NULL)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd')
			{
				int b = va_arg(colly, int);
				print_number(b);
				counter++;
			}
			else if (*format == 'i')
			{
				int c = va_arg(colly, int);
				_putchar(c);
				counter++;
			}
			else
			format++;
		}
	}
	va_end(colly);
	return (counter++);
}
