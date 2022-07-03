#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    string t;
    list<string> ans;
    while (cin >> t) {
        ans.emplace_back(t);
    }

    for (auto &e : ans) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}