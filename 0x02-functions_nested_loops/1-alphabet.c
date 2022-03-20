#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char v = 'a';

	while (v <= 'z')
	{
		_putchar(v);
		v++;
	}
	_putchar('\n');
}
