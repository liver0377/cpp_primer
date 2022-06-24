#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char s1[] = "hello world";
    const char s2[] = "hello world!";
    if (!strcmp(s1, s2)) {
        cout << "Equal!" << endl;
    } else {
        cout << "Not Equal!" << endl;
    }
    return 0;
}