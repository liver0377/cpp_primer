#include "StrLength.h"
#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std::placeholders;

int main() {
    StrLength sl;
    std::ifstream in("./tmp.txt");
    std::string t;
    std::vector<std::string> ans;
    while (in >> t) {
        ans.push_back(t);
    }

    int sum = 0;
    for (int i = 1; i <= 9; i++) {
        int t = 0;
        std::cout << "the number of word has length "
                  << "\"" << i << " \""
                  << "is "
                  << (t = std::count_if(ans.begin(), ans.end(),
                                        std::bind(sl, _1, i)))
                  << std::endl;
        sum += t;
    }

    std::cout << "the number of word whose length is more than \"10\" is "
              << ans.size() - sum << std::endl;

    return 0;
}