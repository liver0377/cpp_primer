#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    vector<string> vs = {"111.3", "222.134", "33.904"};
    double res = 0;
    for (auto &e :vs) {
       res += stod(e);
    }
    cout << res << endl;

    return 0;
}