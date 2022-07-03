#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl = {1, 2, 3,4, 5, 65, 7, 9};
    auto pre = fl.before_begin();
    auto cur = fl.begin();
    for (;cur != fl.end();) {
        if (*cur % 2) {
            cur = fl.erase_after(pre);
        } else {
            pre = cur;
            cur ++;
        }
    }

    for (auto &e: fl) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}