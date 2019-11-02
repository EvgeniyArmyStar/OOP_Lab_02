#include "Student.h"
#include "StudentActivist.h"
#include "StudentBotanist.h"
#include "StudentSimple.h"

StudentSimple * Student::makeSimple()
{
	return new StudentSimple(this->getFirstName(), this->getSecondName(), this->getAge());
}

StudentActivist * Student::makeActivist()
{
	return new StudentActivist(this->getFirstName(), this->getSecondName(), this->getAge());
}

StudentBotanist * Student::makeBotanist()
{
	return new StudentBotanist(this->getFirstName(), this->getSecondName(), this->getAge());
}

void Student::setFirstName(const string & firstName)
{
	this->firstName = firstName;
}

void Student::setSecondName(const string & secondName)
{
	this->secondName = secondName;
}

void Student::setAge(unsigned const age)
{
	this->age = age;
}

void Student::makeDebtor()
{
	this->debtor = true;
}

void Student::unDebtor()
{
	this->debtor = false;
}

const string & Student::getFirstName()
{
	return this->firstName;
}

const string & Student::getSecondName()
{
	return this->secondName;
}

bool Student::isDebtor()
{
	return this->debtor;
}

unsigned Student::getAge()
{
	return this->age;
}
