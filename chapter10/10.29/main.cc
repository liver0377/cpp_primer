#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    istream_iterator<string> in_iter(cin), eof;
    ostream_iterator<string> out_iter(cout, " ");
    vector<string> ans(in_iter, eof);
    copy(ans.begin(), ans.end(), out_iter); 
}