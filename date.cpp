#include "date.h"
#include <sstream>

Date::Date() {
  Date::month = 0;
  Date::day = 0;
  Date::year = 0;
}

Date::Date(int month, int day, int year) {
  Date::month = month;
  Date::day = day;
  Date::year = year;
}

Date::~Date() {
  // nothing to do here
}

void Date::setMonth(int month) {
  Date::month = month;
}

void Date::setDay(int day) {
  Date::day = day;
}

void Date::setYear(int year) {
  Date::year = year;
}

int Date::getMonth() const {
  return Date::month;
}

int Date::getDay() const {
  return Date::day;
}

int Date::getYear() const {
  return Date::year;
}

std::string Date::getDateString() const {
  std::stringstream ss;
  ss << Date::month << "/" << Date::day << "/" << Date::year;
  return ss.str();
}

void Date::print(std::ostream& os) const {
  os << getDateString() << std::endl;
}
