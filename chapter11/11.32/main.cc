#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<string, string> author = {
        {"鲁迅", "狂人日记"}, {"鲁迅", "朝花夕拾"}, {"老舍", "茶馆"}};
    for (auto iter = author.begin(); iter != author.end();) {
        auto pos = author.equal_range(iter->first);
        cout << iter->first << ": ";
        for (; pos.first != pos.second; pos.first++) {
            cout << pos.first->second << " ";
        }
        cout << endl;
        iter = pos.second;
    }
}