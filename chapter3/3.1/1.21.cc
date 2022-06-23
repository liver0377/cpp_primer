#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sale_data {
  string bookNo;
  string bookName;
  unsigned units_sold = 0;
  double revenue = 0.0;
  double price = 0.0;
};

// 读取销售记录,将每条记录打印到标准输出
int main() {
  Sale_data s;

  while (cin >> s.bookNo >> s.units_sold >> s.price) {
    cout << s.bookNo << " " << s.units_sold << " " << s.price << endl;
  }
  return 0;
}