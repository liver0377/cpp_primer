#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> v(in_iter, eof);
    sort(v.begin(), v.end());
    copy(v.begin(), v.end(), out_iter); 
}