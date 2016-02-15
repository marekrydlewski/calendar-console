#pragma once

using namespace std;

class Calendar
{
protected:
	const int year;
	vector<string> daysOfWeek;
	vector<string> nameOfMonths;
public:
	Calendar(int year) : year(year),
		daysOfWeek({ "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" }),
		nameOfMonths({ "January", "February",  "March",  "April",  "May",  "June",
			"July",  "August",  "September",  "October",  "November",  "December" })
	{};
	~Calendar();

	int getNumberOfDay(int month, int day);
	int getAmountOfDays(int month); // 1 ... 12
	bool isLeapYear();
	void printCalendar();
	void printMonthCalendar(int month);
};

