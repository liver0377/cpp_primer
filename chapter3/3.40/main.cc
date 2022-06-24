#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char s1[6] = "hello";
    const char s2[7] = "world!";
    char target[12];
    strcpy(target, s1);
    strcat(target, " ");
    strcat(target, s2);

    for (auto& c :target) {
        cout << c;
    }
    cout << endl;
    return 0;
}