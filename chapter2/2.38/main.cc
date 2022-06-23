#include <iostream>

int main() {
       int i = 11;
       auto j = (i = 10);
       decltype(i = 10) k = i;
       std::cout << typeid(j).name() << std::endl;
       std::cout << typeid(k).name() << std::endl;
       return 0;
}
