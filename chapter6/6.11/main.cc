#include <iostream>

using namespace std;

void reset(int &n) {
    n = 0;
}

int main() {
    int n = 442;

    reset(n);
    cout << n << endl;

    return 0;
}