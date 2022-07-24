#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include "DiscQuote.h"

class Limit_quote : public Disc_quote {
  public:
    Limit_quote();
    Limit_quote(const std::string &b, double p, std::size_t q, double d)
        : Disc_quote(b, p, q, d){}

    double net_price(std::size_t n) const override;
    void debug() const override;
};

double Limit_quote::net_price(std::size_t n) const {
    if (n > quantity)
        return quantity * price * (1 - discount) + (n - quantity) * price;
    else
        return n * (1 - discount) * price;
}

void Limit_quote::debug() const {
    Disc_quote::debug();
}
#endif