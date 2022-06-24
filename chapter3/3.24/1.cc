#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (auto iter = v.cbegin(); iter < v.cend(); iter += 2) {
        auto sum = *iter;
        if (iter + 1 != v.cend()) sum += *(iter + 1);
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}