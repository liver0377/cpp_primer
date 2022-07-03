#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5, 6};
    list<int> l = {1, 2, 3, 4, 5, 6, 7};
    vector<double> v(l.begin(), l.end());
    vector<double> v2(vi.begin(), vi.end());

    return 0;
}