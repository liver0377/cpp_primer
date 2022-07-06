#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool helper(const string& s) {
    return s.size() >= 5;
}

int main() {
    vector<string> v = {"hello", "he", "llo", "worldddddd"};
    partition(v.begin(), v.end(), helper);
    for (auto &e: v) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}