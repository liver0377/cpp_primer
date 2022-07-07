#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> v = {1, 2, 0, 0, 1, 1, 2, 0, 1, 1};
    list<int> l;
    copy(v.rbegin() + 3, v.rend() - 2, back_inserter(l));
    for (auto &e: l) {
        cout << e << " ";
    }
    cout << endl;
}