#include <stdlib.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	char ch = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 0;
	while (i < 6)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}
