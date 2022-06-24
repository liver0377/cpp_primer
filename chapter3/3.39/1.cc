#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "hello world";
    string s2 = "hello world!";

    if (s1 == s2) {
        cout << "Equal!" << endl;
    } else {
        cout << "Not Equal!" << endl;
    }
    return 0;
}