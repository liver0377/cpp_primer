#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "DiscQuote.h"

class Bulk_quote : public Disc_quote {

  public:
    // using Disc_quote::Disc_quote;
    Bulk_quote() : Disc_quote() {}
    Bulk_quote(const std::string &b, double p, std::size_t q, double disc)
        : Disc_quote(b, p, q, disc) {}
    Bulk_quote(const Bulk_quote &bq) : Disc_quote(bq) {}

    Bulk_quote &operator=(const Bulk_quote &rhs);
    Bulk_quote &operator=(Bulk_quote &&rhs) noexcept;

    double net_price(std::size_t n) const override;
    void debug() const override;

    Bulk_quote *clone() const & override;
    Bulk_quote *clone() && override;

    ~Bulk_quote() override {}
};

Bulk_quote &Bulk_quote::operator=(const Bulk_quote &rhs) {
    Disc_quote::operator=(rhs);
    return *this;
}

Bulk_quote &Bulk_quote::operator=(Bulk_quote &&rhs) noexcept{
    Disc_quote::operator=(std::move(rhs));
    return *this;
}

void Bulk_quote::debug() const { Disc_quote::debug(); }

double Bulk_quote::net_price(size_t cnt) const {
    if (cnt >= quantity)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}

Bulk_quote *Bulk_quote::clone() const & { return new Bulk_quote(*this); }

Bulk_quote *Bulk_quote::clone() && { return new Bulk_quote(std::move(*this)); }

#endif