#include <iostream>
#include <string>

using namespace std;

void replace(string &s, const string &old, const string &nw) {
    for (auto cur = s.begin(); cur <= s.end() - old.size();)
        if (old == string{cur, cur + old.size()})
            cur = s.erase(cur, cur + old.size()),
            cur = s.insert(cur, nw.begin(), nw.end()), cur += nw.size();
        else
            ++cur;
}

int main() {
    string s = "tho he is late, he is fine. thru this, blabla";
    replace(s, "tho", "though");
    replace(s, "thru", "through");

    cout << s << endl;
    return 0;
}