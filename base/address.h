#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <sstream>

class Address {
  private:
    std::string* line1;
    std::string* line2;
    std::string* city;
    std::string* state;
    std::string* zipCode;
  public:
    Address();
    Address(std::string line1, std::string line2, std::string city, std::string state, std::string zipCode);
    Address(const Address& other);
    ~Address();
    std::string getLine1() const;
    std::string getLine2() const;
    std::string getCity() const;
    std::string getState() const;
    std::string getZipCode() const;
    void setLine1(std::string line1);
    void setLine2(std::string line2);
    void setCity(std::string city);
    void setState(std::string state);
    void setZipCode(std::string zipCode);
    void print(std::ostream& os) const;
    std::string toString() const;
};

#endif