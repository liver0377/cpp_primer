#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a = 10;
    auto f = [&a]() mutable -> bool {
        if (a) {
            --a;
            return false;
        } else
            return true;
    };
    for (int i = 0; i < 100; i++) {
        cout << f() << endl;
    }
}