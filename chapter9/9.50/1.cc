#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    vector<string> vs = {"111", "222", "33"};
    int res = 0;
    for (auto &e :vs) {
       res += stoi(e);
    }
    cout << res << endl;

    return 0;
}