#pragma once
#include "Student.h"
#include <string>
#include <vector>

using namespace std;

class StudentGroup
{
public:
	StudentGroup(const string & groupName, unsigned groupID) :
		groupName(groupName), groupID(groupID) {}

	Student* getStudent(const string & firstName, const string & secondName);
	const string & getGroupName();
	size_t getStudentsCount();

	void runExam();
	void addStudent(Student * student);
	void removeStudent(Student * student);

	const vector<Student*>& getStudentsList();

	virtual ~StudentGroup();

private:
	string groupName;
	unsigned groupID;

	bool hasDebtors;

	void runSecondExam();

	vector <Student*> studentsList;
};

std::ostream& operator<< (std::ostream & out, StudentGroup & listOfGroup);
