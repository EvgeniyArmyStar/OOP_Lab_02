#include <iostream>
#include "Student.h"
#include "StudentActivist.h"
#include "StudentBotanist.h"
#include "StudentSimple.h"
#include "StudentGroup.h"

using namespace std;

int main()
{
	StudentGroup group1 = { "History", 5555123 };

	StudentSimple *Serega = new StudentSimple("Serega", "Filatov", 18);
	StudentSimple *Anton = new StudentSimple("Anton", "Zebrov", 18);

	group1.addStudent(Serega);
	group1.addStudent(Anton);

	StudentBotanist *Sasha = new StudentBotanist("Sasha", "Beliy", 18);
	StudentBotanist *Lesha = new StudentBotanist("Lesha", "Antonov", 18);

	group1.addStudent(Sasha);
	group1.addStudent(Lesha);

	StudentActivist *Semen = new StudentActivist("Semen", "Ivanov", 19);
	StudentActivist *Dimon = new StudentActivist("Dimon", "Golov", 19);

	group1.addStudent(Semen);
	group1.addStudent(Dimon);

	std::cout << group1;

	StudentActivist *Serega2 = Serega->makeActivist();
	StudentSimple *Dimon2 = Dimon->makeSimple();
	StudentBotanist *Anton2 = Anton->makeBotanist();

	group1.addStudent(Serega2);
	group1.addStudent(Anton2);
	group1.addStudent(Dimon2);

	std::cout << group1;

	group1.runExam();

	std::cout << group1;

	delete Serega, Anton, Sasha, Lesha, Semen, Dimon;
	delete Serega2, Dimon2, Anton2;
}