#include <iostream>
#include <algorithm>

using namespace std;

int cmp(int a, int* pb) {
    return a > *pb ? a : *pb;
}

int main() {
    int a = 1, b = 2;
    cout << cmp(a, &b) << endl;

    return 0;
}