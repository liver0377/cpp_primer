#ifndef BOOK
#define BOOK

#include <initializer_list>
#include <iostream>
#include <string>

class Book {
  public:
    Book(unsigned isbn, std::string const &name, std::string const &author,
         std::string const &pubdate)
        : isbn_(isbn), name_(name), author_(author), pubdate_(pubdate) {}
    Book &operator=(const Book &);
    Book &operator=(Book &&) noexcept;

    Book(std::istream &in) { in >> isbn_ >> name_ >> author_ >> pubdate_; }

  private:
    unsigned isbn_;
    std::string name_;
    std::string author_;
    std::string pubdate_;
};

Book &Book::operator=(const Book &book) {
    isbn_ = book.isbn_;
    name_ = book.name_;
    author_ = book.author_;
    pubdate_ = book.pubdate_;
    return *this;
}

Book &Book::operator=(Book &&book) noexcept {
    if (this != &book) {
        isbn_ = book.isbn_;
        name_ = book.name_;
        author_ = book.author_;
        pubdate_ = book.pubdate_;
    }
    return *this;
}

#endif