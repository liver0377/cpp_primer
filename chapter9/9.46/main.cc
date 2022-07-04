#include <iostream>
#include <string>

using namespace std;

void add(string &s, const string &pre, const string &sub) {
    s.insert(s.begin(), pre.begin(), pre.end());
    s.insert(s.end(), sub.begin(), sub.end());
}

int main() {
    string name = "Jack";
    add(name, "Mr.", "III");

    cout << name << endl;
}