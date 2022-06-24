#include <iostream>
#include <vector>

using namespace std;

int main() { 
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
    for (auto i1 = v.cbegin(), i2 = v.cend() - 1; i1 < i2; i1 ++, i2 --) {
        cout << *i1 + *i2 << " ";
    }
    cout << endl;
    return 0;
}