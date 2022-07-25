#include "BulkQuote.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <memory>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    vector<shared_ptr<Quote>> ans;
    for (int i = 0; i < 10; i++) {
        ans.push_back(make_shared<Quote>("001", 10.0));
    }
    double sum = accumulate(
        ans.begin(), ans.end(), 0.0,
        [&](double sum, shared_ptr<Quote> p) { return sum + p->net_price(5); });
    cout << sum << endl;
}