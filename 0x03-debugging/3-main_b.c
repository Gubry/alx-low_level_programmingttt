#include <stdio.h>
#include "main.h"

/**
 * main - takes a day and print how many day are left in the year, taking
 * leap year into consideration
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 10;
	day = 04;
	year = 1997;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(day, month);

	print_remaining_days(month, day, year);
	return (0);
}
