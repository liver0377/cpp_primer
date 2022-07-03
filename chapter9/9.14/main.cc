#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    list<const char *> l = {"a", "b"};
    vector<string> vs;
    vs.assign(l.begin(), l.end());

    for (auto& e: vs) {
        cout << e << endl;
    }

    return 0;
}