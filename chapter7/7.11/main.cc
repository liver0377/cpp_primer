#include "Sales_data.h"
#include <iostream>

int main() {
  Sales_data sd1;
  Sales_data sd2(std::cin);
  Sales_data sd3("0-201-88954-4");
  Sales_data sd4("0-201-88954-4", 10, 18.8);

  return 0;
}