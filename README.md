## Main Purpose of this Project ##
- Implement memory management by utilizing the standard C++ heap structure as much as possible.
- Build a student record system that stores the 'following' :
1. First name
2. Last name
3. address line 1
4. address line 2
5. city
6. state
7. zip code
8. date of birth month
9. date of birth day
10. date of birth year
11. anticipated completion month
12. anticipated completion day
13. anticipated completion year
14. gpa
15. credit hours completed



### Goals ###
- Create a class to represent student data, and create classes to handle other types of data including dates and addresses.
- The system should include all the headerfiles, Makefile, and the main.cpp program
- Minimum of three classes : address, date, and student.
- Each file should have a seperate headerfile, which will contain only the class definition
- Build a cpp file for each class which contains the code implementation of the class. This code file will include the class header file and any other headers and libraries needed.
- Build a main program that imports all the needed classes and tests them.
- Student will have two instances of date and one of address among its data members
- All instances of classes will be stored seperately on the heap (making use of 'new' keyword)
- Create a makefile to control the compilation process
- Run valgrind to ensure there is proper memory allocation and deallocation (no memory leaks)

'Once the classes are done, create a main program that does the following:'
- Load up student data from a text file: 






# Purpose # 
- The purpose of this program is to read in data for a list of students from a file, create Student objects with the data, and generate two output reports for each student: a full report and a short report. The full report includes all of the student's information, including their name, address, date of birth, anticipated graduation date, GPA, and credit hours completed. The short report includes only the students first and last name

# Class : Address # 
- The goal of the 'Address' class is to store and manage the address of a student. The input to the class is a set of strings, including the line 1 and line 2 of the address, city, state, and zip code. The output of the class is a formatted string containing the full address.
## steps ##
1. Define a private string pointer for each component of the address.
2. Implement a default constructor that initializes each string pointer to a new empty string.
3. Implement an overloaded constructor that initializes each string pointer to a new string containing the corresponding input value.
4. Implement a copy constructor that initializes each string pointer to a new string containing the corresponding value of another Address object.
5. Implement a destructor that frees the memory allocated to each string pointer.
6. Implement getter and setter methods for each string pointer.
7. Implement a toString() method that returns a formatted string of the full address.

# Class : Date #
- The goal of the Date class is to store and manage the date of birth and anticipated completion of a student. The input to the class is a month, day, and year as integers. The output of the class is a formatted string containing the date in mm/dd/yyyy format.

## steps ##
1. Define a private integer for each component of the date.
2. Implement a default constructor that initializes each integer to 0
3. Implement an overloaded constructor that initializes each integer to the corresponding input value.
4. Implement a destructor that does nothing.
5. Implement getter and setter methods for each integer.
6. Implement a getDateString() method that returns a formatted string of the date in mm/dd/yyyy format.
7. Implement a print() method that outputs the getDateString() value to an output stream.

# Class : Student #
- The goal of the Student class is to store and manage the data of a student, including their name, address, date of birth, anticipated completion, GPA, and credit hours completed. The input to the class is a set of strings, two Date objects, two Address objects, a double, and an integer. The output of the class is the student's data in a formatted string.

## Steps ##
1. Define a private string for the first and last name, and double for the GPA, and an integer for the credit hours completed.
2. Define private pointers to a Date object for the date of birth and anticipated completion.
3. Define private pointers to an Address object for the student's address.
4. Implement a constructor that initializes each member variable to the corresponding input value.
5. Implement a destructor that frees the memory allocated to the Date and Address objects.
6. Implement getter and setter methods for each member variable.
7. Implement a printFullReport() method that outputs the student's full data to an output stream.
8. Implement a printShortReport() method that outputs the student's name, anticipated completion date, and GPA to an output stream.

## Function: main() ##
- The goal of the main() function is to read student data from a file, create Student objects, and output their data to two different files. The input to the function is the student data file.
The output of the function is two files, one containing the full report and one containing the short report for each student The main() function writes reports on each student to two output files: fullReport.txt and shortReport.txt.

## Steps ##
1. Open the students.dat file for reading.
2. For each student record in the file, do the following:
- Parse the data for that student and create a new Student object using the parsed data. Add the - Student object to an array of students.
- Open fullReport.txt and shortReport.txt for writing.
3. For each Student object in the array of students, do the following:
- Call the printFullReport() method on the Student object and pass in the fullReport.txt output stream.
- Call the printShortReport() method on the Student object and pass in the shortReport.txt output stream.
4. Close the students.dat, fullReport.txt, and shortReport.txt files.
5. Delete the Student objects in the array of students to free up memory.
6. Exit the program.














