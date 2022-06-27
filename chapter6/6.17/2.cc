#include <iostream>

using namespace std;

void set_lower(string& s) {
    for (auto& e: s) {
        e = tolower(e); 
    }
}

int main() {
    string s = "HELLO";

    set_lower(s);
    cout << s << endl;

    return 0;
}