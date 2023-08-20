#include <unistd.h>

/**
  * cc_putchar - A function that prints single characters to stdout
  * @c: character to print
  * Return: on Success 1
  * On error, -1 is returned, and errno is set appropriately.
  */
int cc_putchar(char c)
{
	return (write(1, &c, 1));
}
