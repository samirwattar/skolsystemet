#pragma once
#include <vector>
#include "Student.h"
#include <iostream>
#include <fstream>


class SchoolSystem
{
public:
	void Run();


	void AddStudent();
	void RemoveStudent();

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;
};
