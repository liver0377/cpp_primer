#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> vc = {'a', 'b', 'c', 'd'};
    string s(vc.cbegin(), vc.cend());

    return 0;
}