#include "StudentActivist.h"
#include <ctime>
#include <cstdlib>

StudentActivist::StudentActivist(const string & firstName, const string & secondName, unsigned const age)
{
	this->firstName = firstName;
	this->secondName = secondName;
	this->age = age;
	this->personalRating = 0;
	this->debtor = false;
}

int StudentActivist::getPersonalRating()
{
	srand(time(NULL));
	if (isDebtor())
	{
		return 3 + rand() % (5 - 3);
	}
	else
	{
		return 1 + rand() % (5 - 1);
	}
}

StudentActivist::~StudentActivist()
{
}
