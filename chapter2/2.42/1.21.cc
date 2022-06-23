#include "Sale_data.h"
#include <iostream>
#include <string>

// 读取销售记录,将每条记录打印到标准输出
int main() {
  Sale_data s;

  while (std::cin >> s.bookNo >> s.units_sold >> s.price) {
    std::cout << s.bookNo << " " << s.units_sold << " " << s.price << std::endl;
  }
  return 0;
}