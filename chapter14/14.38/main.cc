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

    for (int i = 1; i <= 10; i++) {
        std::cout << "the number of word has length "
                  << "\"" << i << " \" "
                  << "is "
                  << std::count_if(ans.begin(), ans.end(), std::bind(sl, _1, i))
                  << std::endl;
    }

    return 0;
}