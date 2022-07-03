#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 13, 21, 55, 89};

    vector<int> vi;
    vi.assign(begin(ia), end(ia));

    list<int> l;
    l.assign(begin(ia), end(ia));
    
    for (auto iter = vi.begin(); iter != vi.end();) {
        if (!(*iter % 2)) {
            iter = vi.erase(iter);
        } else {
            iter ++;
        }
    }

    for (auto iter = l.begin(); iter != l.end();) {
        if (*iter % 2) {
            iter = l.erase(iter);
        } else {
            iter ++;
        }
    }

    for (auto &e: vi) {
        cout << e << " ";
    }
    cout << endl;

    for (auto &e: l) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}