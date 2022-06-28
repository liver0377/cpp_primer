#include <iostream>
#include <vector>

using namespace std;

void prt(vector<int>& v, int idx) {
    if (idx >= v.size()) return;

    cout << v[idx] << ' ';
    prt(v, idx + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 6};
    prt(v, 0);

    return 0;
}