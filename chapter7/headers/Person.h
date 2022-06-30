#include <string>

struct Person {
    friend std::istream &read(std::istream &is, Person &p);
    friend std::ostream &print(std::ostream &os, const Person &p);

  public:
    // 构造函数
    Person() = default;
    Person(const std::string &n, const std::string &adr = "")
        : name(n), address(adr) {}

    std::string getname() const;
    std::string getaddress() const;

  private:
    std::string name;
    std::string address;
};

// 类内成员
std::string Person::getname() const { return name; }

std::string Person::getaddress() const { return address; }

// 类外接口函数
std::istream &read(std::istream &is, Person &p) {
    is >> p.name >> p.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &p) {
    os << p.name << p.address;
    return os;
}