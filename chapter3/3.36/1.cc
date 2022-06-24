#include <iostream>

using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i;
    for (i = 0; i < 10; i++) {
        if (a[i] != b[i]) {
            cout << "Not Equal!" << endl;
        }
    }
    if (i == 10) {
        cout << "Equal!" << endl;
    }

    return 0;
}