#include "Sales_data.h"
#include <iostream>

int main() {
  Sales_data total;

  if (read(std::cin, total)) {
    Sales_data tmp;
    while (read(std::cin, tmp)) {
      if (tmp.isbn() == total.isbn()) {
        total.combine(tmp);
      } else {
        print(std::cout, total) << std::endl;
        total = tmp;
      }
    }
    print(std::cout, total) << std::endl;
  } else {
    std::cout << "No Data!?" << std::endl;
  }
}