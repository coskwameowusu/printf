#include "main.h"
/**
  * _printf - A function that produces output according to a format
  * Authors - Collins & Cynthia
  * @format: format to be printed
  * Return: Number of characters printed
  */
int _printf(const char *format, ...)
{
	int coll = 0, a = 0;
	va_list cyn;

	va_start(cyn, format);

	if (format != NULL)
	{
		while (format[a])
		{
			if (format[a] == '%')
			{
				format++;
				if (format[a] == 'c')
				{
					int m = va_arg(cyn, int);

					putchar(m);
					coll++;
				}
				if (format[a] == 's')
				{
					int *s = va_arg(cyn, int *);

					while (*s != '\0')
						putchar(*s);
						s++;
				}
				if (format[a] == '%')
					putchar('%');
					coll++;
			}
			else
				putchar(format[a]);
				coll++;
		format++;
		}
	}
	va_end(cyn);
	return (coll);
}
