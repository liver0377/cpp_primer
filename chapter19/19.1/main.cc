#include <cstdlib>
#include <new>

void *operator new(size_t sz) {
    if (void *mem = malloc(sz)) 
        return mem;
    else 
        throw std::bad_alloc();
}

void operator delete(void *p) {
    free(p);
}

int main() {
    void *p = ::new int(10);
    ::delete (int *)p;
}