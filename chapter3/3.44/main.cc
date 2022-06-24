#include <iostream>
using A4_i = int[4];

int main() {
  int ia[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (A4_i& r: ia) {  // 必须加引用，因为数组不能拷贝
    for (int &c : r) {
      std::cout << c << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}