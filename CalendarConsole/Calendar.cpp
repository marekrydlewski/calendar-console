#include "stdafx.h"
#include "Calendar.h"

using namespace std;

Calendar::~Calendar()
{
}

int Calendar::getNumberOfDay(int month, int day = 1)
{
	// return numbers from 0 ... 6 starting with Sunday
	int y = this->year;
	if (month == 1 || month == 2)
		y--;
	int m = month - 2;

	if (m <= 0) m += 12;

	int a = int(floor(2.6 *m - 0.2)) % 7;
	return (day % 7 + a + (5 * (y % 4)) % 7 + (4 * (y % 100)) % 7 + (6 * (y % 400)) % 7) % 7;
}

int Calendar::getAmountOfDays(int month)
{
	int days;
	if (month == 4 || month == 6 || month == 9 || month == 11)
		days = 30;
	else if (month == 02)
	{
		if (this->isLeapYear())
			days = 29;
		else
			days = 28;
	}
	else
		days = 31;
	return days;
}

bool Calendar::isLeapYear()
{
	return (((this->year % 4 == 0) && (this->year % 100 != 0)) || (this->year % 400 == 0));
}


void Calendar::printCalendar()
{
	for (int i = 1; i <= 12; i++)
	{
		this->printMonthCalendar(i);
	}
}

void Calendar::printMonthCalendar(int month)
{
	auto days = getAmountOfDays(month);
	auto firstDay = getNumberOfDay(month, 1);
	auto spaceDays = firstDay - 1;
	if (spaceDays < 0) spaceDays = 6; //sunday

	cout << endl;
	cout << "\t\t\t" << this->nameOfMonths[month - 1] << endl << endl;
	for (auto &x : this->daysOfWeek)
	{
		cout << x << "\t";
	}
	cout << endl;
	for (int i = 0; i < spaceDays; i++)
	{
		cout << "\t";
	}
	for (int i = 1; i <= days; i++)
	{
		cout << i << "\t";
		if ((i + spaceDays) % 7 == 0)
			cout << endl;
	}
	cout << endl << endl;
}
