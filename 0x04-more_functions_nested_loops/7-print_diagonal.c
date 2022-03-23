#include "main.h"

/**
 * print_diagonal - prints diagonal
 *@n:the symbol to be printed
 * Return: Diagonal
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('\\');
		i++;
	}
	_putchar('\n');
}
