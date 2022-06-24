#include <iostream>
#include <string>
#include <vector>


int main() {
  int ia[3][4] = {
        {0, 1, 2, 3}, 
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
  auto p = *ia;   // *ia为int[4]数组, 使用auto时，*ia是数组的名字，会被解释成首元素的指针,即Int*
  auto& pp = ia;  // 使用auto&时，不会将数组名解释成首元素的指针
  std::cout << typeid(p).name() << std::endl;
  std::cout << typeid(pp).name() << std::endl;
  return 0;
}
