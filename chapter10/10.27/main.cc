#include <vector>
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> l;
    vector<int> v = {1, 1, 2, 3, 4,2 , 1, 1 ,4};
    unique_copy(v.begin(), v.end(), back_inserter(l));
    for (auto &e: l) {
        cout << e << " ";
    }
    cout << endl;
}