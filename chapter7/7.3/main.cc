#include <iostream>
#include "Sales_data.h"

int main() {
   Sales_data total;
   if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
       Sales_data trans;
       while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
          if (total.isbn() == trans.isbn()) {
            total.combine(trans);
          } else {
            std::cout << total.bookNo << "  " << total.units_sold << "  " << total.revenue << std::endl;
            total = trans;
          }
       }
       std::cout << total.bookNo << "  " << total.units_sold << "  " << total.revenue << std::endl;
   } else {
      std::cout << "No data?!" << std::endl;
   }

   return 0;
}