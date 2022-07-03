#include <iostream>
#include <vector>

using namespace std;

bool find(vector<int>::iterator b, vector<int>::iterator e, int target) {
    for (; b < e; b++) {
        if (*b == target)
            return true;
    }
    return false;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << find(v.begin(), v.begin() + 9, 10) << endl;
    return 0;
}