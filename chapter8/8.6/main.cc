#include "Sales_data_2.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
    if (argc < 2)
        return 0;

    ifstream f;
    Sales_data total;

    f.open(argv[1]);
    if (f >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (f >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.bookNo << " " << total.units_sold << " "
                     << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue
             << endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}