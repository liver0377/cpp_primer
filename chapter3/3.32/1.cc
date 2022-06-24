#include <iostream>

using namespace std;

int main() {
    int a[10];
    for (size_t i = 0; i < 10; i++) {
      a[i] = i;
    }

    int b[10];
    for (size_t i = 0; i < 10; i++) {
        b[i] = a[i];
    }
    for (auto&r : b) {
        cout << r << " ";
    }
    cout << endl;
    return 0;
}