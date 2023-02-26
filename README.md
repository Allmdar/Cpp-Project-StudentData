## What will I learn doing this Project ##
- Control Flow and Functions in C++
- Arrays in C++
- Classes and Object Oriented Programming using C++
- Input and Output in C++
- Memory Management (Allocation and Deallocation on the Heap)
- Checking for memory leaks using valgrind

## The Complete Project ##
- Load up student data from a text file. All the needed information for the students should be in a text file, with each student's information on one line. We will provide you with a file with student data. There will be 50 students. 
- Store all instances of your classes on the heap As stated above, all instances of your custom classes should be created on the heap.
- Store student data on the heap Student data will be a large array, so it should be stored on the heap. Ensure you've also removed heap data when necessary.
- List all data for all students in a report format Create a method of the Student class to print a report about every student into a separate text file called "fullReport.txt".
- Create a simpler list that prints only the last and first name of each student into a separate text file called "shortReport.txt".
- (optional) Output a list of student names in alphabetical order Print the list in alphabetical order  into a separate text file called "alphaReport.txt". You can use your own sort algorithm, or the one from std::sort for this. You can consider this a blackbelt requirement, so wait until you get other things done before adding this.
Note: You may not use any pre-constructed classes from the c++ standard template library (vectors, sets, etc).  You MAY construct your own (if you reallllly wanna go there).  Additionally, any instances of the classes you write need to be stored separately on the heap by utilizing the keyword new.
- Your program needs to test for memory leaks using Valgrind. We won't use your valgrind file, but the program will be tested for memory leaks so check your Valgrind
- Use C++98 for the base assignment, smart pointers and other features of C++11 are great, but they are not the point of the assignment. Use them in the blackbelt or future classes.
- Use a standard c array not a vector in this program.

Here is the format you may use for a line of student data in your text file:

Surname,GivenName,StreetAddress,Address2,City,State,ZipCode,Birthday,Graduation,GPA,Credit Hours Complete