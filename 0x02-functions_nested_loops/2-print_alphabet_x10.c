#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
		for (i = 0; i < 10; i++)
		{
			char v;
			for (v = 'a'; v <= 'z'; v++)
			{
				_putchar(v);
			}
			_putchar('\n');
		}
}
