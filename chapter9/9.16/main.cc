#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool compare(vector<int> &a, list<int>& b) { 
     vector<int> tmp(b.begin(), b.end());
     return a > tmp;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    list<int> l = {1, 2, 3, 4};
    cout << compare(v, l) << endl;
}