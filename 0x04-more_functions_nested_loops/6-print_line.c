#include "main.h"

/**
 * print_line - prints line
 * @n: number of line to be printed
 * Return:: Always 0
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
