#include <iostream>
#include <vector>

using namespace std;

void prt(vector<int>& v, int idx) {
#ifndef NDEBUG
    cerr << "file name : " <<  __FILE__ << endl;
    cerr << "line num: " << __LINE__ << endl;
    cerr << "time : " << __TIME__ << endl;
    cerr << "date : " << __DATE__ << endl;
    cerr << __func__ << ": vector size is: " << v.size() << endl;
    cerr << endl << endl;
#endif

    if (idx >= v.size()) return;

    cout << v[idx] << ' ';
    prt(v, idx + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 6};
    prt(v, 0);

    return 0;
}