#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<string, string> author;
    auto t = author.lower_bound("鲁迅");
    if (t == author.end()) {
        cout << "No such author" << endl;
        return 0;
    }
    author.erase(t);
}