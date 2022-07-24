#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H

#include "Quote.h"

class Disc_quote : public Quote {
  public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double prices, std::size_t qty,
               double disc)
        : Quote(book, price), quantity(qty), discount(disc) {
        std::cout << "constructing Disc_quote\n";
    }

    // net_price函数在该类中没有任何意义
    virtual double net_price(std::size_t) const = 0;
    virtual void debug() const;
    virtual ~Disc_quote() override { std::cout << "destructing Disc_quote\n"; }

  protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

void Disc_quote::debug() const {
    Quote::debug();
    std::cout << "quantity: " << quantity << "\t"
              << "discount: " << discount << "\t";
}
#endif