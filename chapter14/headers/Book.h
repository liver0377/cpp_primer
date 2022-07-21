#ifndef BOOK
#define BOOK

#include <iostream>
#include <string>

class Book;
std::istream &operator>>(std::istream &, Book &);
bool operator==(const Book &lhs, const Book &rhs);
bool operator!=(const Book &lhs, const Book &rhs);

class Book {
    friend std::istream &operator>>(std::istream &, Book &);
    friend bool operator==(const Book &lhs, const Book &rhs);
    friend bool operator!=(const Book &lhs, const Book &rhs);
  public:
    Book(unsigned isbn, std::string const &name, std::string const &author,
         std::string const &pubdate)
        : isbn_(isbn), name_(name), author_(author), pubdate_(pubdate) {}

    Book(std::istream &in) { in >> isbn_ >> name_ >> author_ >> pubdate_; }

  private:
    unsigned isbn_;
    std::string name_;
    std::string author_;
    std::string pubdate_;
};

std::istream &operator>>(std::istream &is, Book &b) {
    is >> b.isbn_ >> b.name_ >> b.author_ >> b.pubdate_;
}

bool operator==(const Book &lhs, const Book &rhs) {
    return lhs.author_ == rhs.author_ && lhs.isbn_ == rhs.isbn_ &&
           lhs.name_ == rhs.name_ && lhs.pubdate_ == rhs.pubdate_;
}

bool operator!=(const Book &lhs, const Book &rhs) {
    return !(lhs == rhs);
}

#endif