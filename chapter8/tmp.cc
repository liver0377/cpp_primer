#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    stringstream s;
    s.setstate(s.badbit);
    cout << s.rdstate() << endl;
    s.setstate(s.failbit);
    cout << s.rdstate() << endl;
    return 0;
}