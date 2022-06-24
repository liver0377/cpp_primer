#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a(10);
    for (size_t i = 0; i < a.size(); i++) {
        a[i] = i;
    }

    vector<int> b = a;
    for (auto&r : b) {
        cout << r << " ";
    }
    cout << endl;
    return 0;
}