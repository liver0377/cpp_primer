#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void elimdups(std::vector<std::string> &vs) {
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

void biggies(std::vector<std::string> &vs, std::size_t sz) {
    using std::string;

    elimdups(vs);

    std::stable_sort(vs.begin(), vs.end(),
                     [](string const &lhs, string const &rhs) {
                         return lhs.size() < rhs.size();
                     });

    auto wc = std::stable_partition(
        vs.begin(), vs.end(), [sz](const string &s) { return s.size() < sz; });

    std::for_each(wc, vs.end(), [](const string &s) { std::cout << s << " "; });
}

int main() {
    std::vector<std::string> v{"1234", "1234", "1234", "hi~",
                               "alan", "alan", "cp"};
    biggies(v, 3);
    std::cout << std::endl;

    return 0;
}