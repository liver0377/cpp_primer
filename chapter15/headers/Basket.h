#ifndef BASKET_H
#define BASKET_H

#include "Quote.h"
#include <iostream>
#include <memory>
#include <set>

using std::cout;
using std::endl;

double print_total(std::ostream &os, const Quote &item, size_t n);

class Basket {
  public:
    void add_item(const Quote &);
    void add_item(Quote &&);
    double total_receipt(std::ostream &os) const;

  private:
    static bool compare(const std::shared_ptr<Quote> &lhs,
                        const std::shared_ptr<Quote> &rhs) {
        return lhs->isbn() < rhs->isbn();
    }

    std::multiset<std::shared_ptr<Quote>, decltype(compare) *> items{compare};
};

double Basket::total_receipt(std::ostream &os) const {
    double sum = 0.0;
    for (auto iter = items.cbegin(); iter != items.cend();
         iter = items.upper_bound(*iter)) {
        sum += print_total(os, **iter, items.count(*iter));
    }

    os << "Total Sale: " << sum << endl;
    return sum;
}

void Basket::add_item(const Quote &sale) {
    items.insert(std::shared_ptr<Quote>(sale.clone()));
}

void Basket::add_item(Quote &&sale) {
    // 调用移动版本的clone
    items.insert(std::shared_ptr<Quote>(std::move(sale).clone())); // sale为左值，需要手动将其转换为右值
}

double print_total(std::ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret
       << endl;
    return ret;
}
#endif