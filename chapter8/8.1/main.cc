#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

istream &print(istream &is) {
    string t;
    while (is >> t) {
        cout << t;
    }
    is.clear();

    return is;
}

int main() { 
    print(cin);
}