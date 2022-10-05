#pragma once
#include <vector>
#include "Student.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>

class SchoolSystem
{
public:
	void Run();


	void AddStudent();
	void AddClass();
	void SystemInfo();


	std::vector<Student> students;
	std::vector<std::string> schoolClasses;


};
