#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 0, 0, 1, 1, 2, 0};
    auto iter = find(v.rbegin(), v.rend(), 0);
    cout << iter.base() - 1 - v.begin() << endl;
}