#pragma once
#include "StudentSimple.h"

class StudentActivist : public StudentSimple
{
public:

	StudentActivist(const string & firstName, const string & secondName, unsigned const age);

	int getPersonalRating() override;

	virtual ~StudentActivist();
};

