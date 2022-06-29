#include <string>

struct Person {
  std::string getname() const;
  std::string getaddress() const;

  std::string name;
  std::string address;
};

std::string Person::getname() const { return name; }

std::string Person::getaddress() const { return address; }