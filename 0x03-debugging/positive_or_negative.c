#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - prints positive or negative numbers
 *@i: number to be checked
 *Return: 0.
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i == 0)
	{
		printf("%d is zero", i);
	}
	else
	{
		printf("%d is negative", i);
	}
	return;
}
