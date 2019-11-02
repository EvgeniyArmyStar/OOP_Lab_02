#include "StudentSimple.h"
#include "Student.h"
#include <ctime>
#include <cstdlib>

StudentSimple::StudentSimple(const string & firstName, const string & secondName, unsigned const age)
{
	this->firstName = firstName;
	this->secondName = secondName;
	this->age = age;
	this->personalRating = 0;
	this->debtor = false;
}

int StudentSimple::getPersonalRating()
{
	srand(time(NULL));
	return 1 + rand() % (5 - 1);
}
