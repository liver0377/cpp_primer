#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> l = {"fox", "jumps", "red", "over",  "quick",
                      "red", "slow",  "the", "turtle"};
    l.sort();
    l.unique();
    for (auto &e : l) {
        cout << e << endl;
    }
}