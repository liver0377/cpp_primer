#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
class Employee {
  public:
    Employee() : name(""), myid(id++) {}
    Employee(const std::string &nm) : name(nm), myid(id++) {}
    Employee(const Employee &e) : name(e.name), myid(id++) {}

  private:
    std::string name;
    int myid;
    static std::int id;
};

static Employee::id = 10000;
#endif