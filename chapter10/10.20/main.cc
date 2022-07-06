#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int count(vector<string>& v, int sz) {
    return count_if(v.begin(), v.end(), [&](const string &s) {
        return s.size() > 6;
    });
}

int main() {
    vector<string> v = {"hello", "worrrrld", "morning", "aghighifajo"};
    cout << count(v, 6) << endl;
}