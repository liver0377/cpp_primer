#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

#include "Sales_data.h"

using namespace std;

bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2) {
    return sd1.isbn() == sd2.isbn();
}

typedef tuple<vector<Sales_data>::size_type, vector<Sales_data>::const_iterator,
              vector<Sales_data>::const_iterator>
    matches;

vector<matches> findBook(const vector<vector<Sales_data>> &files,
                         const string &book) {
    vector<matches> ret;
    for (auto it = files.cbegin(); it != files.cend(); ++it) {
        auto found = equal_range(it->cbegin(), it->cend(), book, compareIsbn);
        if (found.first != found.second) {
            ret.push_back(
                make_tuple(it - files.begin(), found.first, found.second));
        }
    }
    return ret;
}
