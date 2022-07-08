#include "Sales_data.h"
#include <set>

using namespace std;

bool compareIsbn(const Sales_data &s1, const Sales_data &s2) {
    return s1.isbn() < s2.isbn();
}

int main() {
    multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)>
        bookstore(compareIsbn);
}