#include "StrBlob.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    StrBlob b({"hello", "world", "good", "enough", "bad"});
    StrBlobPtr p(b);
    StrBlobPtr end(b, b.size());
    for (; p != end; p = p.incr()) {
        cout << p.deref() << " ";
    }
    cout << endl;
}