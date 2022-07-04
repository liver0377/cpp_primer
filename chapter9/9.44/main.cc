#include <iostream>
#include <string>

using namespace std;

void replace(string &s, const string &old, const string &nw) {
    int len = old.size();
    for (int i = 0; i <= s.size() - old.size(); i++) {
        if (s.substr(i, len) == old) {
            s.replace(i, len, nw);
        }
    }
}

int main() {
    string s = "tho he is late, he is fine. thru this, blabla";
    replace(s, "tho", "though");
    replace(s, "thru", "through");

    cout << s << endl;
    return 0;
}