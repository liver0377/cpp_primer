#include <iostream>

int main() {
  std::cout << typeid('a').name() << std::endl;
  std::cout << typeid(L'a').name() << std::endl;
  std::cout << typeid("a").name() << std::endl;
  std::cout << typeid(L"a").name() << std::endl;
  std::cout << std::endl;

  std::cout << typeid(10).name() << std::endl;
  std::cout << typeid(10u).name() << std::endl;
  std::cout << typeid(10L).name() << std::endl;
  std::cout << typeid(10uL).name() << std::endl;
  std::cout << typeid(012).name() << std::endl;
  std::cout << typeid(0xC).name() << std::endl;
  std::cout << std::endl;
  
  std::cout << typeid(3.14).name() << std::endl;
  std::cout << typeid(3.14f).name() << std::endl;
  std::cout << typeid(3.14L).name() << std::endl;
  std::cout << std::endl;
  
  std::cout << typeid(10).name() << std::endl;
  std::cout << typeid(10u).name() << std::endl;
  std::cout << typeid(10.).name() << std::endl;
  std::cout << typeid(10e-2).name() << std::endl;
  return 0;
}