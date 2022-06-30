#include "headers/Sales_data.h"
#include <iostream>

class A {
  public:
    int a = 10;
};

void f() {
    int a;
    std::cout << a << std::endl;
}

int main() {
    // f();
    A t;
    std::cout << t.a << std::endl;
    return 0;
}