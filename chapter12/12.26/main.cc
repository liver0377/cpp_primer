#include <iostream>
#include <memory>

using namespace std;

int main() {
    int n = 10;
    allocator<string> alloc;
    string *const p = alloc.allocate(n);
    string s;
    string *q = p;
    while (cin >> s && q != p + n) {
        alloc.construct(q, s);
        q++;
    }
    const size_t size = q - p;
    for (int i = 0; i < size; i++) {
        cout << p[i] << endl;
    }
    alloc.destroy(p);
    alloc.deallocate(p, size);
}