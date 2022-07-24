#include "BulkQuote.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double print_total(std::ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret
       << endl;
    return ret;
}

int main() {
    Quote qt("123", 8.8);
    Bulk_quote bq("123", 8.8, 3, 0.2);

    print_total(cout, qt, 5);
    print_total(cout, bq, 5);
}