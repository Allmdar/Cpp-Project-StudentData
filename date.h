#ifndef DATE_H
#define DATE_H

#include<string>

class Date {
  private:
    int month;
    int day;
    int year;

  public:
    Date();
    Date(int month, int day, int year);
    ~Date();
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    std::string getDateString() const;
    void print(std::ostream& os) const;
};

#endif
