#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int t;
    vector<pair<string, int>> v;
    while (cin >> s >> t) {
        v.push_back({s, t});
    }

    for (auto &e: v) {
        cout << e.first << " " << e.second << endl;
    }
}