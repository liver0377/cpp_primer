#include <iostream>
#include <unordered_map>
#include <fstream>

using namespace std;
int main() {
    ifstream in("./tmp.txt");
    unordered_map<string, int> mp;
    string s;
    while (in >> s) {
        mp[s] ++;
    }

    for (auto &e: mp) {
        cout << e.first << " " << e.second << endl;
    }
}