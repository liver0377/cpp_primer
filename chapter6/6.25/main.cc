#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
    if (argc < 3) {
        cerr << "parameter be more than 1" << endl;
        return 0;
    } 

    string ans;
    ans = ans + argv[1] + argv[2];

    cout << ans << endl;

    return 0;
}