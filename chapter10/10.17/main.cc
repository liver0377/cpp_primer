#include "Sales_data.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main() {
    Sales_data s1("0xf31fh09", 11, 0.8);
    Sales_data s2("fh3fihi", 141, 2.9);
    Sales_data s3("fheifi", 19, 9.2);
    vector<Sales_data> v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);

    sort(v.begin(), v.end(), [](const Sales_data& s1, const Sales_data &s2) {
        return s1.isbn() < s2.isbn();
    });

    for (auto &e : v) {
        cout << e.isbn() << endl;
    }
}