#pragma once
#include <string>
#include <iostream>
//C.Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.
//Note: This information should be included in the degree.h file.
enum DegreeProgram {
	SECURITY, NETWORK, SOFTWARE
};
static const std::string DegreeProgramStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };
