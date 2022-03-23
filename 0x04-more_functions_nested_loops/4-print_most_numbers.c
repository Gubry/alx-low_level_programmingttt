#include "main.h"

/**
 * print_most_numbers - print the numbers allowed
 *
 * Return: the chosen numbers
 */

void print_most_numbers(void)
{
	int i = 48;
	char c = '0';

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(c);
		}
		c++;
		i++;
	}
	_putchar('\n');
}
