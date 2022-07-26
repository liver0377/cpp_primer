#include <iostream>
#include <memory>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

int main() {
    auto item = make_tuple(string("hello"), vector<string>({"hello", "world"}),
                           make_pair("hello", 20));
}