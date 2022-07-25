#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

class Quote {
    friend bool operator!=(const Quote &lhs, const Quote &rhs);

  public:
    Quote() {}
    Quote(const std::string &b, double p) : bookNo(b), price(p) {}

    // copy constructor
    Quote(const Quote &q) : bookNo(q.bookNo), price(q.price) {}

    // move constructor
    Quote(Quote &&q) noexcept
        : bookNo(std::move(q.bookNo)), price(std::move(q.price)) {}

    // copy =
    Quote &operator=(const Quote &rhs) {
        if (*this != rhs) {
            bookNo = rhs.bookNo;
            price = rhs.price;
        }

        return *this;
    }

    // move =
    Quote &operator=(Quote &&rhs) noexcept {
        if (*this != rhs) {
            bookNo = std::move(rhs.bookNo);
            price = std::move(rhs.price);
        }

        return *this;
    }

    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return n * price; }

    virtual Quote *clone() const & { return new Quote(*this); }
    virtual Quote *clone() && { return new Quote(std::move(*this)); }
    virtual void debug() const;

    virtual ~Quote() {}

  private:
    std::string bookNo;

  protected:
    double price = 10.0;
};

bool inline operator!=(const Quote &lhs, const Quote &rhs) {
    return lhs.bookNo != rhs.bookNo && lhs.price != rhs.price;
}

void Quote::debug() const {
    std::cout << "bookNo: " << bookNo << "\t"
              << "price: " << price;
}
#endif