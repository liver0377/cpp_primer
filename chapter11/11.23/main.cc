#include <iostream>
#include <map>
#include <vector>
using namespace std;

void add_family(multimap<string, vector<string>> &mp,
                const pair<string, vector<string>> &p) {
    mp.insert(p);
}

void add_son(multimap<string, vector<string>> &mp, const string &family,
             const string &son) {
    mp.insert({family, {son}});
}

int main() {
    multimap<string, vector<string>> mp;
    add_family(mp, {"Smith", {"Jack", "Rose"}});
    add_son(mp, "Smith", "Bob");

    for (auto &e : mp) {
        cout << e.first << " ";
        for (auto &r : e.second) {
            cout << r << " ";
        }
        cout << endl;
    }
}