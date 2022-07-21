#include "PrintString.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
    PrintString ps;
    std::vector<std::string> ans;

    std::string t;
    do {
        t = ps(std::cin);
        ans.push_back(t);
    } while (t != "");

    for (auto &e : ans)
        std::cout << e << std::endl;
}