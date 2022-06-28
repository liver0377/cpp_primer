#include <iostream>
#include <algorithm>

using namespace std;

bool string_subrange(const string& s1, const string& s2) {
    if (s1.size() == s2.size()) {
        return s1 == s2;
    }
    auto sz = min(s1.size(), s2.size());
    for (int i = 0; i < sz; i++) {
        if (s1[i] != s2[i]) {
            return;
        }
    }
}

int main() {

    return 0;
}