#pragma once
class Calendar
{
public:
	const int year;
public:
	Calendar(int year) : year(year) {};
	~Calendar();
	int getFirstDayOfYear();
};

