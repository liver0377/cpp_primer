#include "BulkQuote.h"
#include <numeric>
#include <vector>

using namespace std;

int main() {
    // Bulk_quote dq("123", 10.0, 3, 0.8);
    // dq.debug();
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = accumulate(v.begin(), v.end(), 0,
                         [&](int init, int x) { return init + x; });
    cout << sum << endl;
}