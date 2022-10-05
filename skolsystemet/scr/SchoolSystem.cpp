#include "SchoolSystem.h"
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds


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
				SystemInfo();
				break;
			case 2:
				AddClass();
	
				break;
			case 3:
				AddStudent();

				break;
			case 4:
				//PrintClasses();

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

void SchoolSystem::AddStudent()
{
	std::string clasS;
	std::string Class;
	Student student;
	int fChoice = 0;

	std::cout << "1.Add student to existed class.\n" "2.Add student to new class.\n";
	std::cout << "Type your choice: ";


	std::cin >> fChoice;
	switch (fChoice)
	{
	case 1:


		std::cout << "Type which class: ";
		std::cin >> clasS;

		if (clasS != schoolClasses[0])
		{
			std::cout << "No class found!" << std::endl;

			sleep_for(nanoseconds(10));
			sleep_until(system_clock::now() + seconds(1));

			system("cls");
		}
		else
		{
			Student student;

			std::cout << "Type first name: ";
			std::cin >> student.fname;
			std::cout << "Type last name: ";
			std::cin >> student.lname;
			students.push_back(student);

			std::cout << std::endl << "DONE!";

			sleep_for(nanoseconds(5));
			sleep_until(system_clock::now() + seconds(1));
		}

		break;
	

	case 2:

		std::cout << "enter class name: ";
		std::cin >> Class;
		schoolClasses.push_back(Class);

		std::cout << "enter fisrt name: ";
		std::cin >> student.fname;

		std::cout << "enter second name: ";
		std::cin >> student.lname;
		std::cout << std::endl << "DONE!";
		

		students.push_back(student);


		sleep_for(nanoseconds(5));
		sleep_until(system_clock::now() + seconds(1));

		system("cls");

		break;
	}
	std::cout << "1: system information\n2: Add Class\n3: Add Student\n4: Remove Class\n5: Remove Student\n6: Check a student name\n7: Exit\ntype a number: ";
}

void SchoolSystem::AddClass()
{
	std::string Class;

	std::cout << "enter class name: ";
	std::cin >> Class;
	schoolClasses.push_back(Class);

	std::cout << std::endl << "DONE!";

	sleep_for(nanoseconds(5));
	sleep_until(system_clock::now() + seconds(1));

	system("cls");

	std::cout << "1: system information\n2: Add Class\n3: Add Student\n4: Remove Class\n5: Remove Student\n6: Check a student name\n7: Exit\ntype a number: ";
	
}

void SchoolSystem::SystemInfo()
{
	std::cout << "still in progress.." << std::endl << std::endl;

	std::cout << "1: system information\n2: Add Class\n3: Add Student\n4: Remove Class\n5: Remove Student\n6: Check a student name\n7: Exit\ntype a number: ";

}
