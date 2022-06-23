#ifndef SALE_DATA_H
#define SALE_DATA_H

#include <string>
struct Sale_data {
  std::string bookNo;
  std::string bookName;
  unsigned units_sold = 0;
  double revenue = 0.0;
  double price = 0.0;
};

#endif