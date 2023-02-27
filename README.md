### What have I learnt doing this project: ##
- Control Flow and Functions in C++
- Arrays in C++
- Classes and Object Oriented Programming using C++
- Input and Output in C++
- Memory Management (Allocation and Deallocation on the Heap)
- Checking for memory leaks using valgrind



## Main Purpose of this Project ##
- Implement memory management by utilizing the standard C++ heap structure as much as possible.
- Build a student record system that stores the ' following ' :
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
1. Each student's information should be on one line in the following format (fromt the text file):
   - Surname,GivenName,StreetAddress,Address2,City,State,ZipCode,Birthday,Graduation,GPA,Credit Hours Complete
- All custom classes should be created on the heap
- List all data for all students in a report format ("fullreport.txt")
- Create a simpler list that prints only the first and last name ("shortreport.txt")


#### Restrictions when doing this project ####
- I may not use any pre-constructed classes from the c++ standard template library (vectors, sets, etc).
- Any instance of the classes I write about need to be stored seperately on the heap by utilizing the keyword 'new'.
- I will test the program for memory leaks using valgrind.
- I will use C++ 98 for this project.
- I will use a standard c array not a vector in this program.


### UML (Unified Modeling Language) Diagram ##

