#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <string>

#include "BulkQuote.h"
#include "DiscQuote.h"
#include "LimitQuote.h"
#include "Quote.h"
#include "Rectangle.h"

class Square : public Rectangle {
  public:
    Square() = default;
    Square(const std::string &n, const Coordinate &a, const Coordinate &b,
           const Coordinate &c, const Coordinate &d)
        : Rectangle(n, a, b, c, d) {}

    ~Square() = default;
};

#endif