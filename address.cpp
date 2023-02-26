#include "address.h"

Address::Address() {
    line1 = new std::string();
    line2 = new std::string();
    city = new std::string();
    state = new std::string();
    zipCode = new std::string();
}


Address::Address(std::string line1, std::string line2, std::string city, std::string state, std::string zipCode) {
    this->line1 = new std::string(line1);
    this->line2 = new std::string(line2);
    this->city = new std::string(city);
    this->state = new std::string(state);
    this->zipCode = new std::string(zipCode);
}


Address::Address(const Address& other) {
    line1 = new std::string(*other.line1);
    line2 = new std::string(*other.line2);
    city = new std::string(*other.city);
    state = new std::string(*other.state);
    zipCode = new std::string(*other.zipCode);
}


Address::~Address() {
    delete line1;
    delete line2;
    delete city;
    delete state;
    delete zipCode;
}


std::string Address::getLine1() const {
    return *line1;
}

std::string Address::getLine2() const {
    return *line2;
}

std::string Address::getCity() const {
    return *city;
}

std::string Address::getState() const {
    return *state;
}

std::string Address::getZipCode() const {
    return *zipCode;
}


void Address::setLine1(std::string line1) {
    *this->line1 = line1;
}

void Address::setLine2(std::string line2) {
    *this->line2 = line2;
}

void Address::setCity(std::string city) {
    *this->city = city;
}

void Address::setState(std::string state) {
    *this->state = state;
}

void Address::setZipCode(std::string zipCode) {
    *this->zipCode = zipCode;
}


std::string Address::toString() const {
    std::stringstream ss;
    ss << getLine1() << ", ";
    if (getLine2() != "") {
        ss << getLine2() << ", ";
    }
    ss << getCity() << ", " << getState() << " " << getZipCode();
    return ss.str();
}

void Address::print(std::ostream& os) const {
    os << getLine1() << std::endl;
    if (getLine2() != "") {
        os << getLine2() << std::endl;
    }
    os << getCity() << ", " << getState() << " " << getZipCode() << std::endl;
}

