#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char *target = new char[11];
    const char *s1 = "hello";
    const char *s2 = "world";
    strcpy(target, s1);
    strcat(target + strlen(s1), s2);
    cout << target << endl;
}