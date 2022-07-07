#include "Sales_item.h"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    istream_iterator<Sales_item> in_iter(cin), eof;
    vector<Sales_item> v(in_iter, eof);
    if (v.empty()) {
        cout << "No Data?!" << endl;
    }
    sort(v.begin(), v.end(), [&](const Sales_item &s1, const Sales_item &s2) {
        return s1.isbn() < s2.isbn();
    });

    vector<Sales_item>::iterator start = v.begin(), cur = v.begin() + 1;
    for (; cur < v.end(); cur++) {
        while (cur != v.end() && compareIsbn(*cur, *start))
            cur++;
        cout << start->isbn() << " " << accumulate(start, cur, Sales_item())
             << endl;
        start = cur;
    }
}