#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

#include "BulkQuote.h"
#include "DiscQuote.h"
#include "LimitQuote.h"
#include "Quote.h"

class Shape {
  public:
    typedef std::pair<double, double> Coordinate;

    Shape() = default;
    Shape(const std::string &n) : name(n) {}

    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    virtual ~Shape() = default;

  private:
    std::string name;
};

#endif