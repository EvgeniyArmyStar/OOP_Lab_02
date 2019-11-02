#pragma once
#include <iostream>
#include <string>

using namespace std;

class StudentBotanist;
class StudentSimple;
class StudentActivist;

class Student
{
public:
	Student() {}

	Student(const string & firstName, const string & secondName, unsigned const age) :
		firstName(firstName), secondName(secondName), age(age)
	{
		this->debtor = false;
		this->personalRating = 0;
	}


	StudentSimple   * makeSimple();
	StudentActivist * makeActivist();
	StudentBotanist * makeBotanist();

	void setFirstName(const string & firstName);
	void setSecondName(const string & secondName);
	void setAge(unsigned const age);
	void makeDebtor();
	void unDebtor();

	const string & getFirstName();
	const string & getSecondName();
	bool isDebtor();
	unsigned getAge();

	virtual int getPersonalRating() = 0;

	virtual ~Student() {}

protected:
	string firstName;
	string secondName;
	int personalRating;
	unsigned age;
	bool debtor;
};

