#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

void insert(forward_list<string> &fl, const string &a, const string &b) {
    auto pre = fl.before_begin();
    for (auto cur = fl.begin(); cur != fl.end();) {
        if (*cur == a) {
            fl.insert_after(cur, b);
            return;
        } else {
            pre = cur;
            cur++;
        }
    }
    fl.insert_after(pre, b);
}

int main() {
    forward_list<string> fl = {"hello", "world", "today", "morning"};
    insert(fl, "after", "!");

    for (auto &e : fl) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}