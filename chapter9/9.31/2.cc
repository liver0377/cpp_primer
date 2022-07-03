#include <forward_list>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    forward_list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto pre = l.before_begin();
    auto cur = l.begin();
    for (; cur != l.end();) {
        if (*cur % 2) {
            l.insert_after(pre, *cur);
            pre = cur;
            cur++;
        } else {
            cur = l.erase_after(pre);
        }
    }

    for (auto &e : l)
        cout << e << " ";
    cout << endl;
    return 0;
}