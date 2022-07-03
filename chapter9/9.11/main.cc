#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;                        // 空
    vector<int> v2(v);                    // 空
    vector<int> v3 = v;                   // 空
    vector<int> v4{1, 2, 3, 4, 5};        // 包含1, 2, 3, 4, 5
    vector<int> v5 = {1, 2, 3, 4, 5};     // 包含1, 2, 3, 4, 5
    vector<int> v6(v5.begin(), v5.end()); // 包含1, 2, 3, 4, 5
    vector<int> v7(10);                   // 包含10个0
    vector<int> v8(10, 1);                // 包含10个1

    return 0;
}