#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "address.h"
#include "date.h"

class Student {
  private:
    std::string* firstName;
    std::string* lastName;
    Address* address;
    Date* dob;
    Date* anticipatedCompletion;
    double* gpa;
    int* creditHoursCompleted;
  public:
    Student();
    Student(std::string firstName, std::string lastName, Address* address, Date* dob, Date* anticipatedCompletion, double gpa, int creditHoursCompleted);
    Student(const Student& other);
    ~Student();
    std::string getFirstName() const;
    std::string getLastName() const;
    Address* getAddress() const;
    Date* getDOB() const;
    Date* getAnticipatedCompletion() const;
    double getGPA() const;
    int getCreditHoursCompleted() const;
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setAddress(Address* address);
    void setDOB(Date* dob);
    void setAnticipatedCompletion(Date* anticipatedCompletion);
    void setGPA(double gpa);
    void setCreditHoursCompleted(int creditHoursCompleted);
    void printFullReport(std::ostream& os) const;
    void printShortReport(std::ostream& os) const;
};

#endif 
