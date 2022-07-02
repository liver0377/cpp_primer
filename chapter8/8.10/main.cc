#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string t;
    ifstream in("./tmp.txt");
    vector<string> input;
    while (getline(in, t)) {
        input.push_back(t);
    }

    for (auto &l : input) {
        istringstream is(l);
        string t;
        while (is >> t) {
            cout << t << " ";
        }
        cout << endl;
    }
    return 0;
}