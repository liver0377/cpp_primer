#ifndef STRVEC_H
#define STRVEC_H

#include <algorithm>
#include <initializer_list>
#include <memory>
#include <string>
#include <utility>

class StrVec {
  public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
    StrVec(const StrVec &); // 拷贝构造函数
    StrVec(std::initializer_list<std::string>);
    StrVec &operator=(const StrVec &); // 拷贝赋值运算符
    StrVec &operator=(std::initializer_list<std::string>);
    ~StrVec(); // 析构函数

    void push_back(const std::string &); // 添加元素时拷贝元素
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }

    void reserve(size_t new_cap);
    void resize(size_t count);
    void resize(size_t count, const std::string &);

  private:
    // 工具函数，被拷贝构造函数、赋值运算符和析构函数所使用
    std::pair<std::string *, std::string *> alloc_n_copy(const std::string *,
                                                         const std::string *);
    void range_initialize(const std::string *first, const std::string *last);
    // 销毁元素并释放内存
    void free();
    // 工具函数，被添加元素的函数使用
    void chk_n_alloc() {
        if (size() == capacity())
            reallocate();
    }
    //获得更多内存并拷贝已有元素
    void reallocate();
    void alloc_n_move(size_t new_cap);

  private:
    std::string *elements;   // 指向数组首元素的指针
    std::string *first_free; // 指向数组第一个空闲元素的指针
    std::string *cap;        // 指向数组第一个空闲元素的指针
    static std::allocator<std::string> alloc; // 分配元素
};

std::allocator<std::string> StrVec::alloc;

void StrVec::push_back(const std::string &s) {
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

// 分配足够的内存来保存给定范围的元素，并将这些元素拷贝到新分配的内存中
std::pair<std::string *, std::string *>
StrVec::alloc_n_copy(const std::string *b, const std::string *e) {
    // 分配空间保存给定范围中的元素
    auto data = alloc.allocate(e - b);
    // 初始化并返回一个pair，该pair由data和uninitialized_copy的返回值构成
    return {data, std::uninitialized_copy(b, e, data)};
}

void StrVec::free() {
    // 不能传递给deallocate一个空指针，如果elements为0，函数什么也不做
    if (elements) {
        // 逆序销毁元素
        std::for_each(elements, first_free,
                      [&](std::string p) { alloc.destroy(&p); });
        alloc.deallocate(elements, cap - elements);
    }
}

StrVec::StrVec(const StrVec &rhs) {
    // 调用alloc_n_copy分配空间以容纳与rhs中一样多的元素
    auto newdata = alloc_n_copy(rhs.begin(), rhs.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::~StrVec() { free(); }

StrVec &StrVec::operator=(const StrVec &rhs) {
    // 调用alloc_n_copy分配空间以容纳与rhs中一样多的元素
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

StrVec &StrVec::operator=(std::initializer_list<std::string> list) {
    auto data = alloc_n_copy(list.begin(), list.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void StrVec::alloc_n_move(size_t new_cap) {
    auto newdata = alloc.allocate(new_cap);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + new_cap;
}

void StrVec::reallocate() {
    auto newcapacity = size() ? 2 * size() : 1;
    alloc_n_move(newcapacity);
}

void StrVec::reserve(size_t new_cap) {
    if (new_cap <= capacity())
        return;
    alloc_n_move(new_cap);
}

void StrVec::resize(size_t count) { resize(count, std::string()); }

void StrVec::resize(size_t count, const std::string &s) {
    if (count > size()) {
        if (count > capacity())
            reserve(count * 2);
        for (size_t i = size(); i != count; ++i)
            alloc.construct(first_free++, s);
    } else if (count < size()) {
        while (first_free != elements + count)
            alloc.destroy(--first_free);
    }
}

void StrVec::range_initialize(const std::string *first,
                              const std::string *last) {
    auto newdata = alloc_n_copy(first, last);
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec::StrVec(std::initializer_list<std::string> il) {
    range_initialize(il.begin(), il.end());
}
#endif
