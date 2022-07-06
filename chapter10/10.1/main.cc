#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 156, 1, 1, 4, 1, 61, 614, 44, 41};
    cout << count(v.begin(), v.end(), 1) << endl;
}