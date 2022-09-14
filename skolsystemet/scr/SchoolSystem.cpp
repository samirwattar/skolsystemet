#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	while (true)
	{

		void printMenu();
		int choice = 0;
		std::cin >> choice;

		switch (choice)
		{
			case 1:
				std::cout << "fuck yourself";
				break;
			case 2:
				AddStudent();
				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:

				break;

		default:
			break;
		}

		//PrintMenu();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "Blabla";
	student.age = 123;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}

