#include "StudentBotanist.h"
#include <ctime>
#include <cstdlib>

StudentBotanist::StudentBotanist(const string & firstName, const string & secondName, unsigned const age)
{
	this->firstName = firstName;
	this->secondName = secondName;
	this->age = age;
	this->personalRating = 0;
	this->debtor = false;
}

int StudentBotanist::getPersonalRating()
{
	srand(time(NULL));
	return 4 + rand() % (5 - 4);
}

StudentBotanist::~StudentBotanist()
{
}
