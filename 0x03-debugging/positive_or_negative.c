#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * positive_or_negative - tests for negative or poistive
 * @i: number to be checked
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return;
}
