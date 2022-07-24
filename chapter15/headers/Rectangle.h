#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>

#include "BulkQuote.h"
#include "DiscQuote.h"
#include "LimitQuote.h"
#include "Quote.h"
#include "Shape.h"

class Rectangle : public Shape {
  public:
    Rectangle() = default;
    Rectangle(const std::string &n, const Coordinate &a, const Coordinate &b,
              const Coordinate &c, const Coordinate &d)
        : Shape(n), a(a), b(b), c(c), d(d) {}

    ~Rectangle() = default;

  protected:
    Coordinate a;
    Coordinate b;
    Coordinate c;
    Coordinate d;
};

#endif