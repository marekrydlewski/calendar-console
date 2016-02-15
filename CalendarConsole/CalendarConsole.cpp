// CalendarConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Calendar.h"

using namespace std;

int main()
{
	int year;
	cout << "Podaj rok" << endl;
	cin >> year;
	if (cin.fail() || year < 1) {
		cout << "Podales bledny rok, imbecylu" << endl;
	}
	else {
		auto calendar = Calendar(year);
		calendar.printCalendar();
	}
	return 0;
}

