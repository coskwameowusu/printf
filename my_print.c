#include "main.h"

/**
 * integer - Prints an integer and returns its length.
 * @number: The integer to be printed.
 * Return: The number of characters printed.
 */
int integer(int number1)
{
	return printf("%d", number1);
}

/**
 * _printf - a function that...
 * @format: The format string.
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	int coll = 0;
	va_list Cyn;
	va_start(Cyn, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int m = va_arg(Cyn, int);
				putchar(m);
				coll++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(Cyn, char *);
				while (*s)
				{
					putchar(*s++);
					coll++;
				}
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(Cyn, int);
				coll += integer(num);
			}
			else if (*format == '%')
			{
				putchar('%');
				coll++;
			}
			else
			{
			printf("Invalid conversion specifier: %%%c", *format);
				coll += 27;
			}
			format++;
		}
		else
		{
			putchar(*format++);
			coll++;
		}
	}

	va_end(Cyn);
	return (coll);
}

