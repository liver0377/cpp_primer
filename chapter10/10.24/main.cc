#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using std::bind;
using std::cout;
using std::endl;
using std::find_if;
using std::size_t;
using std::string;
using std::vector;

auto check_size(string const &str, size_t sz) { return str.size() < sz; }

int main() {
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7};
    string str("123456");
    auto result = find_if(vec.begin(), vec.end(),
                          bind(check_size, str, std::placeholders::_1));
    if (result != vec.end())
        cout << *result << endl;
    else
        cout << "Not found" << endl;

    return 0;
}