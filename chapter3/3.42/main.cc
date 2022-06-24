#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[10];
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (size_t i = 0; i < v.size(); i++) {
        arr[i] = v[i];
    }

    for (auto& r: arr) {
        cout << r << " ";
    }
    cout << endl;
    return 0;
}