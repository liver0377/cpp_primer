#include <iostream>
#include <sstream>
#include <vector>
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
    string t = "hello world";
    istringstream is(t);
    print(is);

    return 0;
}
