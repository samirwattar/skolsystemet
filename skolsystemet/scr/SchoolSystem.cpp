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
				AddClass();
	
				break;
			case 3:
				AddStudent();

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:

				break;
			case 7:
				system("pause");
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

void SchoolSystem::AddClass()
{
	std::string className;

	std::cout << "Enter new class name";
	
	std::cin >> className;

	std::ofstream classes(className + ".txt");
}

void SchoolSystem::AddStudent()
{
	Student student;
	//student.name = "Blabla";
	//student.age = 123;
	//students.push_back(student);

	std::cout << "1. Add student to an excisted class.\n";
	std::cout << "2. Add student to a new class.\n";

	int choice = 0;
	std::cin >> choice;
	char choice2{};
	

	switch (choice)
	{
	case 1:
		system("cls");//Clear screen
		std::ofstream file1("student.txt");

		std::cout << "Enter First name: ";
		std::cin >> student.fname;
		std::cout << "Enter Last name: ";
		std::cin >> student.lname;


		file1 << student.fname << " " << student.lname << std::endl;

		file1.close();
		break;
	}
	return;


}
	
void SchoolSystem::AddStudentToClass()
{
	std::string name;
	std::string schoolClass;

	//feedback namn
	std::cin >> name;
	//feedback class
	std::cin >> schoolClass;

	for (auto& classes : schoolClasses)
	{
		if (classes != schoolClass) return;

	}

	for (auto& student : students)
	{
		if (student.fname == name) student.schoolClass = schoolClass;

	}
}

void SchoolSystem::RemoveStudent()
{
}

