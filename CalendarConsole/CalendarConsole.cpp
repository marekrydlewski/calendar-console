// CalendarConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Calendar.h"

using namespace std;

int main()
{
	auto calendar = Calendar(2000);
	cout << calendar.getFirstDayOfYear() << endl;
    return 0;
}

