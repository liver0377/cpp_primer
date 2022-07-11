#include <iostream>
#include <map>
#include <vector>
using namespace std;

void add_family(map<string, vector<pair<string, string>>> &mp,
                const pair<string, vector<pair<string, string>>> &p) {
    mp.insert(p);
}

void add_son(map<string, vector<pair<string, string>>> &mp,
             const string &family, const pair<string, string> &son) {
    mp[family].push_back(son);
}

int main() {
    map<string, vector<pair<string, string>>> mp;
    add_family(mp, {"Smith", {{"Jack", "2000/1/1"}, {"Rose", "2001/1/1"}}});
    add_son(mp, "Smith", {"Lucy", "2001/1/1"});

    for (auto &e : mp) {
        cout << e.first << " ";
        for (auto &r : e.second) {
            cout << r.first << " " << r.second << " ";
        }
        cout << endl;
    }
}