#ifndef HASPTR_H
#define HASPTR_H
#include <string>

class HasPtr {
  public:
    // 动态分配引用计数
    HasPtr(const std::string &s = std::string())
        : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
    HasPtr &operator=(const HasPtr &rhs);

    HasPtr(const HasPtr &hp)
        : ps(new std::string(*hp.ps)), i(hp.i), use(hp.use) {
        ++*use;
    }
    ~HasPtr() {
        if (!(--*use)) {
            delete ps;
            delete use;
        }
    }

  private:
    std::string *ps;
    int i;
    std::size_t *use;
};

HasPtr &operator=(const HasPtr &rhs) {
    ++rhs.use;
    if (!(--*use)) {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
}

#endif