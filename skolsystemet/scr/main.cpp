
#include "SchoolSystem.h"

bool LoggedIn()
{
	std::string username, password, un, pw;

	std::cout << "Enter a Username: ";
	std::cin >> username;
	std::cout << "Enter a password: ";
	std::cin >> password;


	std::ifstream read("C:/dev2/skolsystemet" + username + ".txt");
	std::getline(read, un);
	std::getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}

	else
	{
		return false;
	}

}

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main()
{
	
	std::cout << "////////////////////////////////////School System///////////////////////////////////\n";
	sleep_for(nanoseconds(10));
	sleep_until(system_clock::now() + seconds(1));


	int choice;

	std::cout << "1. Register\n2: Login\n";
	std::cout << "Choose: ";
	std::cin >> choice;
	if (choice == 1)
	{
		std::string username, password;

		std::cout << "username: ";
		std::cin >> username;
		std::cout << "password: ";
		std::cin >> password;

		std::ofstream file;
		file.open("C:/dev2/skolsystemet" + username + ".txt");

		file << username << "\n" << password;
		file.close();
		system("cls");


		main();
	}
	else if (choice == 2)
	{
		bool status = LoggedIn();
		if (!status)
		{
			std::cout << "false information" << "\n";
			system("pause");
			return 0;
		}
		else
		{
			std::cout << "login successful" << "\n";
			std::cout << "\n";
			
			std::cout << "1: system information\n2: Add Class\n3: Add Student\n4: Remove Class\n5: Remove Student\n6: Check a student name\n7: Exit\ntype a number: ";

			SchoolSystem system;
			system.Run();

		}
	}

}