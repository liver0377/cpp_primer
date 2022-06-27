#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int t = b;
    a = b;
    b = a;
}

int main() {
    int a = 10, b = 11;
    cout << a << " " << b << endl;

    return 0; 
}