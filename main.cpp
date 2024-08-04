#include "roster.h"
#include <iostream>
#include <string>

//Prints out my student data info including course title, programming language, student ID, and name.
void Header() {
	cout << "ZXCVZX ZXCZXC ZXCZXC" << endl;
	cout << "C++" << endl;
	cout << "11111111" << endl;
	cout << "xczcxz czcxzcz" << endl;
}

int main()
{
	//Student data table which includes added A5 student data.
	std::string studentData[] =

	{ "A1,Zelda,Zephyr,ZeldaZ1989@fantas ymail.com,20,32,33,45,SECURITY",
		"A2,Orion,Nebula,OrionN1990@starmail.com,39,51,33,27,NETWORK",
		"A3,Merlin,Mage,MerlinM99@wizardmail.com,29,23,44,35,SOFTWARE",
		"A4,Elara,Moon,Woo.Elara.Moon@cosmosmail.com,28,45,38,47,SECURITY",
		"A5,Pixie,Dust,PixieD@faemail.com,13,15,32,22,SOFTWARE"
	};


	//Total number of students provided in data table.
	const int numStudents = 5;
	Roster classRoster;

	Header();
	std::cout << std::endl;

	//parse student data and add to roster
	for (int i = 0; i < numStudents; i++) classRoster.parse(studentData[i]);
	cout << "Displaying all students:" << endl;
	classRoster.printAll();
	cout << endl;

	cout << "Displaying invalid emails:" << endl; //Displaying invalid emails. Invalid emails should not have a missing "." "@" or " " in the wrong position.
	classRoster.printInvalidEmails();
	cout << endl;

	//Loop that iterates through all the students in the classRoster.
	for (int i = 0; i < numStudents; i++) {
		std::string studentID = classRoster.getStudentID(i); 
		classRoster.printAverageDaysInCourse(studentID);
	}
	cout << endl;

	classRoster.printByDegreeProgram(SOFTWARE); //Helps with printing only students in SOFTWARE degree program.
	cout << endl;

	classRoster.removeStudentByID("A3"); //In charge of removing A3 from roster then calls message "removed from roster".
	cout << endl;

	cout << "Displaying students:" << endl;
	classRoster.printAll(); //Prints data table should't include A3 student data.
	cout << endl;

	classRoster.removeStudentByID("A3"); //Verifies that A3 has been removed from the roster calls message "not found in roster".
	cout << endl;

	system("pause"); //Used to help console not close so quickly.
	return 0;
}
