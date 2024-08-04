#pragma once
#include "student.h"
#include <iostream>
#include <string>
class Roster
{
private:
	int lastIndex = -1;
	const static int numStudents = 5;
	Student* classRosterArray[numStudents];

	//methods
public:
	string  getStudentID(int index);
	void parse(std::string row);
	void add(std::string xID, std::string xFirstName, std::string xLastName, std::string xEmailAddress, int xAge, int xDaysInCourse1, int xDaysInCourse2, int xDaysInCourse3, DegreeProgram degreeProgram);
	void printAll();
	void printByDegreeProgram(DegreeProgram degreeProgram); //Helps with printing students degree program consisting of SECURITY, NETWORK, and SOFTWARE.
	void printInvalidEmails(); //Helps with printing invalid emails by finding invalid emails without the following '.' '@' ' '.
	void printAverageDaysInCourse(std::string studentID); //Helps with printing Average price of the three courses.
	void removeStudentByID(std::string studentID);
	//destructor
	~Roster();
};
