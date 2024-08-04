#include "roster.h"
#include <iostream>
#include <string>
//Parse and extract students data from strings.
void Roster::parse(std::string studentdata)
{
	std::string degreeProgramString = studentdata.substr(studentdata.rfind(",") + 1);
	DegreeProgram dp = SECURITY;
	if (degreeProgramString == "NETWORK") dp = NETWORK;
	else if (degreeProgramString == "SOFTWARE") dp = SOFTWARE;

	//Helps find position of comma in data table to extract studentID.
	int rhs = studentdata.find(",");
	std::string xID = studentdata.substr(0, rhs);

	//Helps find position of comma in data table to extract student first name.
	int lhs = rhs + 1;
	rhs = studentdata.find(",", lhs);
	std::string xFirstName = studentdata.substr(lhs, rhs - lhs);

	//Helps find position of comma in data table to extract student last name.
	lhs = rhs + 1;
	rhs = studentdata.find(",", lhs);
	std::string xLastName = studentdata.substr(lhs, rhs - lhs);

	//Helps find position of comma in data table to extract student email address.
	lhs = rhs + 1;
	rhs = studentdata.find(",", lhs);
	std::string xEmailAddress = studentdata.substr(lhs, rhs - lhs);

	//Helps find position of comma in data table to extract student age.
	lhs = rhs + 1;
	rhs = studentdata.find(",", lhs);
	int xAge = stoi(studentdata.substr(lhs, rhs - lhs));


	//Helps find position of comma in data table to extract student days1 to complete in course.
	lhs = rhs + 1;
	rhs = studentdata.find(",", lhs);
	int xDaysInCourse1 = stoi(studentdata.substr(lhs, rhs - lhs));


	//Helps find position of comma in data table to extract student days2 to complete in course.
	lhs = rhs + 1;
	rhs = studentdata.find(",", lhs);
	int xDaysInCourse2 = stoi(studentdata.substr(lhs, rhs - lhs));


	//Helps find position of comma in data table to extract student days3 three to complete in course.
	lhs = rhs + 1;
	rhs = studentdata.find(",", lhs);
	int xDaysInCourse3 = stoi(studentdata.substr(lhs, rhs - lhs));


	//Helps to add student to roster from the extracted data.
	add(xID, xFirstName, xLastName, xEmailAddress, xAge, xDaysInCourse1, xDaysInCourse2, xDaysInCourse3, dp);
}

//Array for days in courses helps add new students to roster.
void Roster::add(std::string xID, std::string xFirstName, std::string xLastName, std::string xEmailAddress, int xAge, int xDaysInCourse1, int xDaysInCourse2, int xDaysInCourse3, DegreeProgram dp)
{
	int dayArray[3] = { xDaysInCourse1, xDaysInCourse2, xDaysInCourse3 };
	classRosterArray[++lastIndex] = new Student(xID, xFirstName, xLastName, xEmailAddress, xAge, dayArray, dp);
}

//Function for collecting studentID from classRosterArray.
std::string Roster::getStudentID(int index) {
	std::string stuID = classRosterArray[index]->getStudentID();
	return stuID;
}

//Prints all student data.
void Roster::printAll() {
	for (int i = 0; i <= lastIndex; i++) {
		classRosterArray[i]->print(); // Helps call print method of student class.
	}
}


//Prints invalid emails looks for emails that dont have a '.' '@' 'space'.
void Roster::printInvalidEmails()
{
	for (int i = 0; i < 5; i++) {
		std::string emailAddressInvalid = classRosterArray[i]->getEmailAddress();
		if ((emailAddressInvalid.find('.') != std::string::npos) && emailAddressInvalid.find('@') != std::string::npos) {
			if (emailAddressInvalid.find(' ') != std::string::npos) {
				std::cout << emailAddressInvalid;
				std::cout << std::endl;
			}
		}
		else {
			std::cout << emailAddressInvalid;
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}
//Prints students by their degree program.
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	Student::printHeader();
	for (int i = 0; i <= Roster::lastIndex; i++) {
		if (Roster::classRosterArray[i]->getDegreeProgram() == degreeProgram) classRosterArray[i]->print();
	}
	cout << endl;
}

//Helps with printing searches through classRosteryArray for studentID.
//If student is found it will calculate average days to complete courses.
//The students ID and average days in the three courses will be printed.
void Roster::printAverageDaysInCourse(std::string studentID) {
	bool found = false;
	for (int i = 0; i <= lastIndex; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			int* daysEachCourse = classRosterArray[i]->getNumberOfDaysToComplete();
			int averageDaysPerCourse = (daysEachCourse[0] + daysEachCourse[1] + daysEachCourse[2]) / 3.0;
			std::cout << "Student ID: " << studentID << ", Average Days in Course: " << averageDaysPerCourse << std::endl;
			found = true;
			break; 
		}
	}
	if (!found) {
		std::cout << "Student ID: " << studentID << " is not found." << std::endl; //Prints Student ID: alongside their ID or prints not found if the ID is not found.
	}
}

//Removes students by their ID.

void Roster::removeStudentByID(std::string studentID)
{
	bool success = false;
	for (int i = 0; i <= Roster::lastIndex; i++) {
		if (classRosterArray[i]->getStudentID() == studentID)
		{
			success = true;
			if (i < numStudents - 1)

			{
				Student* temp = classRosterArray[i];
				classRosterArray[i] = classRosterArray[numStudents - 1];
				classRosterArray[numStudents - 1] = temp;
			}

			Roster::lastIndex--;
		}
	}
	if (success)
	{
		cout << studentID << " is being removed from roster." << endl << endl;
	}
	else cout << studentID << " is not found in roster." << endl << endl;
}

//Helps destroy, and release objects in Roster. Also helps with memory and setting pointers to null.
Roster::~Roster()
{
	cout << " " << endl;
	cout << "Destructor is called: " << endl << endl;
	for (int i = 0; i < numStudents; i++)
	{
		cout << "Destroying studentID number: " << i + 1 << endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}

