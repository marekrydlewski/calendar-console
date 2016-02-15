#pragma once

using namespace std;

class Calendar
{
protected:
	const int year;
	vector<string> daysOfWeek;
public:
	Calendar(int year) : year(year), 
		daysOfWeek({ "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" }){
	};
	~Calendar();

	int getNumberOfDay(int month, int day);
	int getAmountOfDays(int month); // 1 ... 12
	bool isLeapYear();
	void printCalendar();
	void printMonthCalendar(int month);
};

