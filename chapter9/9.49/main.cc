#include <iostream>
#include <string>

using namespace std;

int main() {
    string t;
    string ans;

    while (cin >> t) {
        if (t.find_first_not_of("aceiomrstuvwxz") == string::npos) {
            if (t.size() > ans.size())
                ans = t;
        }
    }

    cout << ans << endl;
}