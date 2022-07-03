#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = l.begin();
    for (; iter != l.end();) {
        if (*iter % 2) {
            iter = l.insert(iter, *iter);
            iter++;
            iter++;
        } else {
            iter = l.erase(iter);
        }
    }

    for (auto &e : l)
        cout << e << " ";
    cout << endl;
    return 0;
}