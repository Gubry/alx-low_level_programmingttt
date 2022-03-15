#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 26;
	char ch = 'z';

	while (i > 0)
	{
		putchar(ch);
		ch--;
		i--;
	}
	putchar('\n');
	return (0);
}
