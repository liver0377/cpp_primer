#ifndef STR_BLOB_H
#define STR_BLOB_H

#include <initializer_list>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

class StrBlobPtr;
class ConstStrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;
    friend class ConstStrBlobPtr;

  public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}
    StrBlob(std::initializer_list<std::string> l)
        : data(std::make_shared<std::vector<std::string>>(l)) {}
    StrBlob(const StrBlob &sb)
        : data(std::make_shared<std::vector<std::string>>(*sb.data)) {}
    StrBlob &operator=(const StrBlob &sb);

    size_type size() const;
    bool empty() const;

    void push_back(const std::string &t);
    void pop_back();

    std::string &front();
    std::string &back();
    const std::string back() const;
    const std::string front() const;

    StrBlobPtr begin();
    StrBlobPtr end();
    ConstStrBlobPtr cbegin() const;
    ConstStrBlobPtr cend() const;

  private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type, const std::string &msg) const;
};

StrBlob &StrBlob::operator=(const StrBlob &sb) {
    data = std::make_shared<std::vector<std::string>>(*sb.data);
    return *this;
}

std::vector<std::string>::size_type StrBlob::size() const {
    return data->size();
}

bool StrBlob::empty() const { return data->empty(); }

void StrBlob::check(size_type t, const std::string &msg) const {
    if (t > data->size()) {
        throw std::out_of_range(msg);
    }
}

void StrBlob::push_back(const std::string &s) { data->push_back(s); }

void StrBlob::pop_back() { data->pop_back(); }

std::string &StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data->front();
}

const std::string StrBlob::front() const {
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string &StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data->back();
}

const std::string StrBlob::back() const {
    check(0, "back on empty StrBlob");
    return data->back();
}

class StrBlobPtr {
  public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}

    bool operator!=(const StrBlobPtr &p) { return p.curr != curr; }
    std::string &deref() const;
    StrBlobPtr &incr();

  private:
    std::shared_ptr<std::vector<std::string>>
    check(size_t i, const std::string &msg) const;

    std::weak_ptr<std::vector<std::string>> wptr;
    size_t curr;
};

std::string &StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr &StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(size_t i, const std::string &msg) const {
    auto ret = wptr.lock();
    if (!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

class ConstStrBlobPtr {
  public:
    ConstStrBlobPtr() : curr(0) {}
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}

    bool operator!=(const ConstStrBlobPtr &p) { return p.curr != curr; }
    const std::string &deref() const;
    ConstStrBlobPtr &incr();

  private:
    std::shared_ptr<std::vector<std::string>>
    check(size_t i, const std::string &msg) const;

    std::weak_ptr<std::vector<std::string>> wptr;
    size_t curr;
};

// 定义在StrBlobPtr定义之后
StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }

StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, data->size()); }

ConstStrBlobPtr StrBlob::cbegin() const { return ConstStrBlobPtr(*this); }

ConstStrBlobPtr StrBlob::cend() const { return ConstStrBlobPtr(*this); }

#endif