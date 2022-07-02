#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> ans;
    ifstream f;
    string t;

    f.open("./tmp.txt");
    while (getline(f, t)) {
        ans.push_back(t);
    }    
    for (auto &e: ans) {
        cout << e << endl;
    }
    
    return 0;
}