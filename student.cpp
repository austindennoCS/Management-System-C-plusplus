#include "student.h"
Student::Student() {
	//emptying strings
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < daysArraySize; i++) this->numberOfDaysToComplete[i] = 0;
	this->degreeProgram = DegreeProgram::SECURITY;
}
//Constructor
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numberOfDaysToComplete[], DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < daysArraySize; i++) this->numberOfDaysToComplete[i] = numberOfDaysToComplete[i];
	this->degreeProgram = degreeProgram;
}
//Destructor~
Student::~Student() {}
//Getters (accessors)
string Student::getStudentID()  { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmailAddress() { return this->emailAddress; }
int Student::getAge() { return this->age; }
int* Student::getNumberOfDaysToComplete() { return this->numberOfDaysToComplete; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram; }

//Setters (mutators)
void Student::setStudentID(string studentID) { this->studentID = studentID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmailAddress(string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(int age) { this->age = age; }
void Student::setNumberOfDaysToComplete(int numberOfDaysToComplete[]) {
	for (int i = 0; i < daysArraySize; i++) this->numberOfDaysToComplete[i] = numberOfDaysToComplete[i];
}
void Student::setDegreeProgram(DegreeProgram dp) { this->degreeProgram = dp; }
//Output format for student data organized as student ID, first name, last name, email address, age, number of days to complete 3 courses, and degree program.
void Student::printHeader() {
	cout << "|ID|First Name|Last Name|Email Address|Age|Number of Days to Complete 3 Courses|Degree Program| \n";
}
//Helps to print and align data using tabs and commas.
void Student::print() {
	cout << this->getStudentID() << '\t';
	cout << "First Name: " << this->getFirstName() << '\t';
	cout << "Last Name: " << this->getLastName() << '\t';
	cout << this->getEmailAddress() << '\t';
	cout << "Age: " << this->getAge() << '\t';
	cout << "daysInCourse: {" << this->getNumberOfDaysToComplete()[0] << ','; //First course days to complete.
	cout << " " << this->getNumberOfDaysToComplete()[1] << ','; //Second course days to complete.
	cout << " " << this->getNumberOfDaysToComplete()[2] << "}" << '\t'; //Third course days to complete.
	cout << "Degree Program: " << DegreeProgramStrings[this->getDegreeProgram()] << '\n'; //Helps convert student data to a string.
}
