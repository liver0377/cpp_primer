#include <iostream>
#include <map>
#include <vector>
using namespace std;

void add_family(map<string, vector<string>> &mp,
                const pair<string, vector<string>> &p) {
    mp.insert(p);
}

void add_son(map<string, vector<string>> &mp, const string &family,
             const string &son) {
    mp[family].push_back(son);
}

int main() {
    map<string, vector<string>> mp;
    add_family(mp, {"Smith", {"Jack", "Rose"}});
    add_son(mp, "Smith", "Bob");
}