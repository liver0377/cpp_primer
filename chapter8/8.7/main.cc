#include "Sales_data_2.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
    if (argc < 3)
        return 0;

    ifstream f1;
    ofstream f2;
    Sales_data total;

    f1.open(argv[1]);
    f2.open(argv[2], ostream::app);
    if (f1 >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (f1 >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                f2 << total.bookNo << " " << total.units_sold << " "
                   << total.revenue << endl;
                total = trans;
            }
        }
        f2 << total.bookNo << " " << total.units_sold << " " << total.revenue
           << endl;
    } else {
        f2 << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}