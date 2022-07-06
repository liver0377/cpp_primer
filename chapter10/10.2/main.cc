#include <algorithm>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> l = {"hello", "hello", "world", "hello"};
    cout << count(l.begin(), l.end(), "hello") << endl;
}