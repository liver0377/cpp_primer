#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    for (auto iter = v.rbegin(); iter != v.rend(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}