#pragma once
#include <iostream>
#include <iomanip>
#include "degree.h"
using std::endl;
using std::string;
using std::cout;

//D1.
//Student class and variables
class Student {
public:
	const static int daysArraySize = 3;
private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int numberOfDaysToComplete[daysArraySize];
	DegreeProgram degreeProgram;

	//D2.
public:
	//Constructor Destructor
	Student();
	Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int numberOfDaysToComplete[], DegreeProgram degreeProgram);
	~Student();
	//getters (accessors)
	std::string getStudentID();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmailAddress();
	int getAge();
	int* getNumberOfDaysToComplete();
	DegreeProgram getDegreeProgram();
	//setters (mutators)
	void setStudentID(std::string studentID);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setEmailAddress(std::string emailAddress);
	void setAge(int age);
	void setNumberOfDaysToComplete(int numberOfDaysToComplete[]);
	void setDegreeProgram(DegreeProgram dp);
	//Helps print student data to console.
	static void printHeader();
	void print();
};
