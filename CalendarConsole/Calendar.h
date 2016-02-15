#pragma once

using namespace std;

class Calendar
{
protected:
	const int year;
	static const vector<string> daysOfWeek;
	static const vector<string> nameOfMonths;

	int getNumberOfDay(int month, int day);
	int getAmountOfDays(int month);
	bool isLeapYear();
public:
	void printCalendar();
	void printMonthCalendar(int month);

	Calendar(int year) : year(year) {};
	~Calendar() {};

};

