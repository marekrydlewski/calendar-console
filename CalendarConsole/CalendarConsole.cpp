// CalendarConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Calendar.h"

using namespace std;

int main()
{
	auto calendar = Calendar(2000);
	cout << calendar.getNumberOfDay(1, 1)<< endl;
	calendar.printCalendar();
    return 0;
}

