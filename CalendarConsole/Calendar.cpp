#include "stdafx.h"
#include "Calendar.h"


Calendar::~Calendar()
{
}

int Calendar::getFirstDayOfYear()
{
	// return numbers from 0 ... 6 starting with Sunday
	int y = this->year - 1;
	// int a = int(floor(2.6 * 11 - 0.2)) % 7;
	return (1 + (5 * (y % 4)) % 7 + (4 * (y % 100)) % 7 + (6*(y % 400)) % 7) % 7;
}
