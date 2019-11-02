#pragma once
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

class StudentBotanist :public Student
{
public:
	StudentBotanist(const string & firstName, const string & secondName, unsigned const age);

	int getPersonalRating() override;

	virtual ~StudentBotanist();
};

