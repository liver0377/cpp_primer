#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <string>

using namespace std;
int main() {
    list<int> l = {1, 2, 3, 4, 5, 6};
    deque<int> odd, even;

    for (auto &e : l) {
        if (e % 2) {
            odd.emplace_back(e);
        } else {
            even.emplace_back(e);
        }
    }

    for (auto &e : odd) {
        cout << e << " ";
    }
    cout << endl;
    for (auto &e : even) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}