#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int ret;
int main() {
    ifstream in("./tmp.txt");
    if (in) cout << "ok" << endl;

    char sink[250];
    while (in.getline(sink, 250)) {
        cout << sink << endl;
    }
    return 0;
}