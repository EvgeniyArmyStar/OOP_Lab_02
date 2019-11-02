#include "StudentGroup.h"

StudentGroup::~StudentGroup()
{
}

void StudentGroup::runSecondExam()
{
	for (auto it = studentsList.begin(); it != studentsList.end(); ++it)
	{
		if ((*it)->isDebtor())
		{
			int score = (*it)->getPersonalRating();
			(*it)->unDebtor();

			if (score <= 2)
				removeStudent(*it);
		}
	}

	hasDebtors = false;
}

void StudentGroup::runExam()
{
	for (auto it = studentsList.begin(); it != studentsList.end(); ++it)
	{
		int score = (*it)->getPersonalRating();
		if (score <= 2)
		{
			(*it)->makeDebtor();
			hasDebtors = true;
		}
	}

	if (hasDebtors)
		runSecondExam();

}

Student * StudentGroup::getStudent(const string & firstName, const string & secondName)
{
	for (auto& i : studentsList)
		if ((i->getFirstName() == firstName) && (i->getSecondName() == secondName))
			return i;

	return nullptr;
}

const string & StudentGroup::getGroupName()
{
	return groupName;
}

size_t StudentGroup::getStudentsCount()
{
	return studentsList.size();
}

void StudentGroup::addStudent(Student * student)
{
	if (studentsList.size() >= 20)
		return;

	studentsList.push_back(student);
}

void StudentGroup::removeStudent(Student * student)
{
	for (auto it = studentsList.begin(); it != studentsList.end(); ++it)
	{
		if (*it == student)
		{
			studentsList.erase(it);
			return;
		}
	}
}

const vector<Student*>& StudentGroup::getStudentsList()
{
	return studentsList;
}

std::ostream & operator<<(std::ostream & out, StudentGroup & listOfGroup)
{
	vector<Student*> students = listOfGroup.getStudentsList();
	out << "\n >> Member of group: " << listOfGroup.getGroupName() << endl;;
	
	int index = 0;
	for (auto it = students.begin(); it != students.end(); it++)
	{
		index++;
		out << " >>> [" << index << "]: " << (*it)->getSecondName() << " " << (*it)->getFirstName() << std::endl;;
	}
	return out;
}
