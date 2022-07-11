#include <iostream>
#include <memory>
#include <vector>

using namespace std;

shared_ptr<vector<int>> alloc_vector() { return make_shared<vector<int>>(); }

void assign_vector(shared_ptr<vector<int>> &p) {
    int i;
    while (std::cin >> i) {
        p->push_back(i);
    }
}

void print_vector(shared_ptr<vector<int>> &p) {
    for (auto i : *p) {
        std::cout << i << std::endl;
    }
}

int main() {
    auto p = alloc_vector();
    assign_vector(p);
    print_vector(p);
    return 0;
}