#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool helper(const string &s) {return s.size() > 6;}

int count(vector<string> &v, int sz) {
    return count_if(v.begin(), v.end(),
                    helper);
}

int main() {
    vector<string> v = {"hello", "worrrrld", "morning", "aghighifajo"};
    cout << count(v, 6) << endl;
}