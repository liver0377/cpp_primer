#include <algorithm>
#include <iostream>
#include <memory>

class String;
std::ostream &operator<<(std::ostream &, const String &);

class String {
  public:
    String() : String("") {}
    String(const char *);
    String(const String &);
    String(String &&);
    String &operator=(const String &);
    ~String();

    const char *c_str() const { return elements; }
    size_t size() const { return end - elements; }
    size_t length() const { return end - elements - 1; }

  private:
    std::pair<char *, char *> alloc_n_copy(const char *, const char *);
    void range_initializer(const char *, const char *);
    void free();

  private:
    char *elements;
    char *end;
    static std::allocator<char> alloc;
};

std::allocator<char> String::alloc;

std::pair<char *, char *> String::alloc_n_copy(const char *b, const char *e) {
    auto str = alloc.allocate(e - b);
    return {str, std::uninitialized_copy(b, e, str)};
}

void String::range_initializer(const char *first, const char *last) {
    auto newstr = alloc_n_copy(first, last);
    elements = newstr.first;
    end = newstr.second;
}

String::String(const char *s) {
    char *sl = const_cast<char *>(s);
    while (*sl)
        ++sl;
    range_initializer(s, ++sl);
}

String::String(const String &rhs) {
    range_initializer(rhs.elements, rhs.end);
    std::cout << "copy constructor" << std::endl;
}

String::String(String &&rhs) {
    auto newcapacity = rhs.end - rhs.elements;
    auto newstr = alloc.allocate(newcapacity);
    auto last = uninitialized_copy(std::make_move_iterator(rhs.elements),
                                   std::make_move_iterator(rhs.end), newstr);
    elements = newstr;
    end = last;
    std::cout << "move constructor" << std::endl;
}

void String::free() {
    if (elements) {
        std::for_each(elements, end, [this](char &c) { alloc.destroy(&c); });
        alloc.deallocate(elements, end - elements);
    }
}

String::~String() { free(); }

String &String::operator=(const String &rhs) {
    auto newstr = alloc_n_copy(rhs.elements, rhs.end);
    free();
    elements = newstr.first;
    end = newstr.second;
    std::cout << "copy-assignment" << std::endl;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const String &s) {
    os << s.c_str();
    return os;
}