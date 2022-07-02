#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream f;
    string t;
    vector<string> ans;

    f.open("./tmp.txt");
    while (f >> t) {
        ans.push_back(t);
    }

    for (auto &e : ans) {
        cout << e << endl;
    }

    return 0;
}