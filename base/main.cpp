#include <fstream>
#include <iostream>
#include "student.h"
#include "date.h"
#include "student.h"

int main() {
  const int NUM_STUDENTS = 50;
  Student* students[NUM_STUDENTS];

  std::ifstream inFile("students.dat");
  if (!inFile) {
    std::cerr << "Error: could not open file" << std::endl;
    return 1;
  }

  for (int i = 0; i < NUM_STUDENTS; i++) {
    std::string firstName, lastName, line1, line2, city, state, zipCode;
    int dobMonth, dobDay, dobYear, anticipatedMonth, anticipatedDay, anticipatedYear, creditHoursCompleted;
    double gpa;

    inFile >> firstName >> lastName >> line1 >> line2 >> city >> state >> zipCode >> dobMonth >> dobDay >> dobYear >> anticipatedMonth >> anticipatedDay >> anticipatedYear >> gpa >> creditHoursCompleted;

    Address* address = new Address(line1, line2, city, state, zipCode);
    Date* dob = new Date(dobMonth, dobDay, dobYear);
    Date* anticipatedCompletion = new Date(anticipatedMonth, anticipatedDay, anticipatedYear);
    Student* student = new Student(firstName, lastName, address, dob, anticipatedCompletion, gpa, creditHoursCompleted);
    students[i] = student;
    }

  std::ofstream fullReportFile("fullReport.txt");
  std::ofstream shortReportFile("shortReport.txt");

  for (int i = 0; i < NUM_STUDENTS; i++) {
    students[i]->printFullReport(fullReportFile);
    students[i]->printShortReport(shortReportFile);
  }

  for (int i = 0; i < NUM_STUDENTS; i++) {
    delete students[i];
  }

  return 0;
}