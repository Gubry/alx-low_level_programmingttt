#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: the printed numbers
 */

void print_numbers(void)
{
	int i = 48;
	char c = '0';

	while (i < 58)
	{
		_putchar(c);
		c++;
		i++;
	}
	_putchar('\n');
}
