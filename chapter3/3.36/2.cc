#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if (a == b) {
        cout << "Equal!" << endl;
    } else {
        cout << "Not Equal!" << endl;
    }
    return 0;
}