#include <stdio.h>
#include "main.h"

/**
* isLeap - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* Return: void
*/

void isLeap(int day, int month)
{
	if (month >= 2 && day >= 60)
	{
		day++;
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
}

/**
* isLeap - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void notLeap(int month, int day, int year)
{
	if (month == 2 && day == 60)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if ((year % 400 == 0))
	{
		isLeap(day, month);
	}
	else if (year % 100 == 0)
	{
		notLeap(month, day, year);
	}
	else if (year % 4 == 0)
	{
		isLeap(day, month);
	}
	else
	{
		notLeap(month, day, year);
	}
}

