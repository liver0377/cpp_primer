#include <iostream>

using namespace std;

int main() {
    string s, pre;
    bool flag = false;
    while (cin >> s) {
        if (s == pre) {
            cout << s << endl;
            flag = true;
            break;
        }
        pre = s;
    }

    if (!flag) {
        cout << "No repetitive words" << endl;
    }
    
    return 0;
}