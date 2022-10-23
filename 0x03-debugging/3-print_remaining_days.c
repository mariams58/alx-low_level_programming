#include <stdio.h>
#include "main.h"

/**
  * print_remaining_days - takes a date and prits out how manny days are
  *left in te year
  *@month:month of the date
  * @year: year given
  * @day: day given* Return: void
  */

void print_remaining_days(int month, int day, int  year)
{
	if (((year % 4 == 0) || (year % 400 == 0)) && (year % 100 != 0))
	{
		if ((month == 2) && (day <= 60))
		{
			day++;
		}

		printf("Days of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%2d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
