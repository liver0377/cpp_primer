#include <iostream>

#include "StrVec.h"

void *operator new(size_t sz) {
    if (void *mem = malloc(sz))
        return mem;
    else
        throw std::bad_alloc();
}

void operator delete(void *p) { free(p); }

int main() {
    StrVec sv;
    sv.push_back("hello");
    std::cout << *sv.begin() << std::endl;
}