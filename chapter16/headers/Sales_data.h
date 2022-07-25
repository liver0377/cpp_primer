#ifndef SALES_DATA
#define SALES_DATA

#include <iostream>
#include <string>

// 前向声明
class Sales_data;

// 类外接口函数声明
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

class Sales_data {
    // 友元声明
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend std::ostream &print(std::ostream &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);

  public:
    // 构造函数
    Sales_data(const std::string &s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(p) {}
    Sales_data() : Sales_data("", 0, 0) {}
    explicit Sales_data(const std::string &s) : Sales_data(s, 0, 0) {}
    explicit Sales_data(std::istream &is) : Sales_data() { read(is, *this); }

    // 成员函数
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

  private:
    // 成员对象
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// 类内成员函数
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline double Sales_data::avg_price() const { return revenue / units_sold; }

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " "
       << item.avg_price();
    return os;
}

#endif
