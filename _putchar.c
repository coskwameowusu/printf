/**
  * _putchar - A function to print to standard output
  * Authors: Cynthia and Collins
  * @x: int variable input
  * Return: (1) on success and (-1) on error
  */
#include <stdlib.h>
int _putchar(char x)
{
	return (write(1, &x, 1));
}
