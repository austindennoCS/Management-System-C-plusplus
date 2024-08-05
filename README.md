
The code defines a special type called enum for categorizing degree programs into three options: SECURITY, NETWORK, and SOFTWARE. Each option in the enum corresponds to a number (0, 1, 2), making it easy to work with in the program. There's an array of strings that matches each enum value with a textual description, allowing these numerical values to be converted back into readable text like "SECURITY" or "NETWORK." A function is provided to enable printing of these enum values directly in a more human-friendly format, using the text descriptions. This setup simplifies handling specific categories (degree programs) in the code, ensuring it is easy to maintain and understand.



The provided code defines a C++ class named Student, structured to encapsulate and manage details about a student's identity and academic achievements. This class includes various private attributes, such as student ID, names, email, age, course completion times, and degree program, with the latter categorized using an enumeration from another file (degree.h). It features both a default and a parameterized constructor for initializing objects and a destructor for proper resource management upon an object's termination. The class is equipped with accessor and mutator methods for safe interaction with the student's data and includes functionality to print detailed student information and headers for lists, enhancing data presentation in console outputs. Constants like daysArraySize help maintain uniform handling of arrays representing course durations, facilitating consistent data operations across the class.



The `Student` class in C++ features a robust implementation with specialized constructors and a destructor. The default constructor initializes new `Student` objects with predefined values including an empty state for strings and zeros for numerical fields, setting the degree program to SECURITY. The parameterized constructor allows for custom initialization, precisely assigning provided values to the object's attributes and handling array copying efficiently. Accessor and mutator functions enable secure interaction with the object's attributes, facilitating data retrieval and updates. Additionally, the class includes print functionalities that display student details in a structured format, enhancing readability for lists of students in console outputs.



The `Roster` class in C++ serves as a comprehensive system for managing student records, featuring both data members and a variety of methods to handle student data effectively. Key data members include `lastIndex`, tracking the last filled index in `classRosterArray`, and `numStudents`, which sets the roster limit to five students. The array `classRosterArray` holds pointers to `Student` objects, facilitating direct manipulation of student records. Among its methods, the class offers functionality to add and remove students, print student details, validate email formats, and calculate average course completion times. A destructor ensures proper cleanup by deallocating memory for dynamically stored students, underscoring the class’s role in efficient data management and promoting scalability in academic or similar systems.



The `Roster` class in C++ effectively manages a collection of `Student` objects, providing robust functionalities for processing student data. The `parse` function extracts and adds student details from strings, while the `add` function incorporates new students into `classRosterArray`, monitoring the roster's capacity. Key functions like `getStudentID`, `printAll`, `printInvalidEmails`, and `printByDegreeProgram` offer access, display, and sorting capabilities. The `printAverageDaysInCourse` and `removeStudentByID` functions handle course completion statistics and orderly student removal. The destructor ensures clean memory management by deallocating all student objects, maintaining system integrity and demonstrating the class's commitment to efficient data management and object-oriented principles.




This C++ program features a `Header` function that outputs fixed data such as course title, programming language, student ID, and a name, serving as a template for real-world applications. The `Main` function processes an array of student data formatted in a JSON-like string, which requires conversion for the `parse` method to handle. This method, part of the `Roster` class, extracts and processes student information from these strings to create and manage `Student` objects. Display functions within the `Roster` class include `printAll()`, which displays all student records, `printInvalidEmails()` that identifies and shows records with incorrect email formats, and `printAverageDaysInCourse()` which calculates and displays the average completion days for courses. Additionally, `printByDegreeProgram` function allows for filtering and displaying students based on their degree program.



