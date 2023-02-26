#include "student.h"
#include <iostream>

Student::Student() : firstName(new std::string()), lastName(new std::string()), address(new Address()), dob(new Date()), anticipatedCompletion(new Date()), gpa(new double(0.0)), creditHoursCompleted(new int(0)) {}

Student::Student(std::string firstName, std::string lastName, Address* address, Date* dob, Date* anticipatedCompletion, double gpa, int creditHoursCompleted)
  : firstName(new std::string(firstName)), lastName(new std::string(lastName)), address(address), dob(dob), anticipatedCompletion(anticipatedCompletion), gpa(new double(gpa)), creditHoursCompleted(new int(creditHoursCompleted)) {}


Student::Student(const Student& other)
  : firstName(new std::string(*other.firstName)), lastName(new std::string(*other.lastName)), address(new Address(*other.address)), dob(new Date(*other.dob)), anticipatedCompletion(new Date(*other.anticipatedCompletion)), gpa(new double(*other.gpa)), creditHoursCompleted(new int(*other.creditHoursCompleted)) {}

Student::~Student() {
  delete firstName;
  delete lastName;
  delete address;
  delete dob;
  delete anticipatedCompletion;
  delete gpa;
  delete creditHoursCompleted;
}

std::string Student::getFirstName() const {
  return *firstName;
}

std::string Student::getLastName() const {
  return *lastName;
}

Address* Student::getAddress() const {
  return address;
}

Date* Student::getDOB() const {
  return dob;
}

Date* Student::getAnticipatedCompletion() const {
  return anticipatedCompletion;
}

double Student::getGPA() const {
  return *gpa;
}

int Student::getCreditHoursCompleted() const {
  return *creditHoursCompleted;
}


void Student::setFirstName(std::string firstName) {
  *this->firstName = firstName;
}

void Student::setLastName(std::string lastName) {
  *this->lastName = lastName;
}

void Student::setAddress(Address* address) {
  delete this->address;
  this->address = new Address(*address);
}

void Student::setDOB(Date* dob) {
  delete this->dob;
  this->dob = new Date(*dob);
}

void Student::setAnticipatedCompletion(Date* anticipatedCompletion) {
  delete this->anticipatedCompletion;
  this->anticipatedCompletion = new Date(*anticipatedCompletion);
}

void Student::setGPA(double gpa) {
  *this->gpa = gpa;
}

void Student::setCreditHoursCompleted(int creditHoursCompleted) {
  *this->creditHoursCompleted = creditHoursCompleted;
}


void Student::printFullReport(std::ostream& os) const {
  os << "Full Report for " << *firstName << " " << *lastName << ":" << std::endl;
  os << "Address: " << std::endl;
  address->print(os);
  os << "Date of Birth: ";
  dob->print(os);
  os << "Anticipated Completion Date: ";
  anticipatedCompletion->print(os);
  os << "GPA: " << *gpa << std::endl;
  os << "Credit Hours Completed: " << *creditHoursCompleted << std::endl << std::endl;
}


void Student::printShortReport(std::ostream& os) const {
  os << *lastName << ", " << *firstName << std::endl;
}

