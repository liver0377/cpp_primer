#include <fstream>
#include <iostream>
#include <unordered_map>

using namespace std;
int main() {
    ifstream in("./tmp.txt");
    unordered_map<string, int> mp;
    string s;
    while (in >> s) {
        auto t = mp.insert({s, 1});
        if (!t.second) {
            ++t.first->second;
        }
    }

    for (auto &e : mp) {
        cout << e.first << " " << e.second << endl;
    }
}