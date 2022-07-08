#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::ifstream in("./tmp.txt");
    std::unordered_map<std::string, int> mp;
    std::string s;
    while (in >> s) {
        for (auto &e : s) {
            if (isalpha(e))
                e = tolower(e);
        }

        // remove_if只是将标点符号移动到后面而已，没有物理上删除
        s.erase(std::remove_if(s.begin(), s.end(), ispunct), s.end());
        mp[s]++;
    }

    for (auto &e : mp) {
        std::cout << e.first << " " << e.second << std::endl;
    }
}