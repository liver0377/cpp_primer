#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::string;

class HasPtr {
  public:
    HasPtr(const std::string &s = std::string())
        : ps(new std::string(s)), i(0) {}
    HasPtr &operator=(HasPtr);
    bool operator<(const HasPtr &);
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
    ~HasPtr() { delete ps; }

  private:
    std::string *ps;
    void swap(HasPtr &, HasPtr &);
    int i;
};

inline void HasPtr::swap(HasPtr &lhs, HasPtr &rhs) {
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "swap() " << std::endl;
}

HasPtr &HasPtr::operator=(HasPtr rhs) {
    swap(*this, rhs);
    return *this;
}

bool HasPtr::operator<(const HasPtr &rhs) { return *ps < *rhs.ps; }

int main() {
    std::vector<HasPtr> v;
    v.insert(v.end(), {string("hello"), string("world"), string("ok"),
                       string("day"), string("vvv")});
    sort(v.begin(), v.end());
}