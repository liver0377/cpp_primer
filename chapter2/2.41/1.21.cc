#include <iostream>
#include <string>

struct Sale_data {
  std::string bookNo;
  std::string bookName;
  unsigned units_sold = 0;
  double revenue = 0.0;
  double price = 0.0;
};

// 读取销售记录,将每条记录打印到标准输出
int main() {
  Sale_data s;

  while (std::cin >> s.bookNo >> s.units_sold >> s.price) {
    std::cout << s.bookNo << " " << s.units_sold << " " << s.price << std::endl;
  }
  return 0;
}