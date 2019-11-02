#pragma once
#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

class StudentSimple : public Student
{
public:
	StudentSimple() {}

	StudentSimple(const string & firstName, const string & secondName, unsigned const age);

	int getPersonalRating() override;

	virtual ~StudentSimple() {}
};

