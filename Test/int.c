/**
  * cc_putchar - A function to print to stdout
  * Authors - Dahesey and Collins
  * @x: a pointer to elements of the function 
  * Return: 0
  */
#include "main.h"
void print_number(int x)
{
	unsigned int y = 1, z = x, numb = x;

<<<<<<< HEAD
	if (x < 0)
	{
		_putchar('-');
		numb = -x;
		z = -z;
	}
	while (z / 10 != 0)
	{
		y = y * 10;
		z = z / 10;
	}
	while (y != 0)
	{
		int a = numb / y;

		_putchar('0' + a);
		numb = numb % y;
		y = y / 10;
=======
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
>>>>>>> ff498a51d10f46ad3918ad4c42a627e82bef4d6f
	}
}
