#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;

void elimdups(vector<std::string> &vs) {
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

bool check_size(const string &s, string::size_type sz) { return s.size() < sz; }

void biggies(vector<std::string> &vs, std::size_t sz) {

    elimdups(vs);

    stable_sort(vs.begin(), vs.end(), [](string const &lhs, string const &rhs) {
        return lhs.size() < rhs.size();
    });

    auto wc = stable_partition(vs.begin(), vs.end(), bind(check_size, _1, sz));

    for_each(wc, vs.end(), [](const string &s) { std::cout << s << " "; });
}

int main() {
    vector<std::string> v{"1234", "1234", "1234", "hi~", "alan", "alan", "cp"};
    biggies(v, 3);
    cout << std::endl;

    return 0;
}