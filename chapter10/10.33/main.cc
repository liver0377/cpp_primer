#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    if (argc < 4) {
        cerr << "parameter number must be more than 4" << endl;
    }
    ifstream in(argv[1]);
    ofstream o1(argv[2]), o2(argv[3]);
    istream_iterator<int> in_iter(in), eof;
    ostream_iterator<int> out_iter1(o1, " "), out_iter2(o2, " ");
    for_each(in_iter, eof, [&](const int n) {
        if (n & 1) {
            *out_iter1++ = n;
        } else {
            *out_iter2++ = n;
        }
    });
}