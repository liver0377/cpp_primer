#include <string>
using namespace std;

class Sales_data {
  public:
    Sales_data(string s, int u, double r)
        : bookNo(s), units_sold(u), revenue(r) {}
    operator string() const {
        return string(bookNo + to_string(units_sold) + to_string(revenue));
    }
    operator double() const { return double(units_sold * revenue); }

  private:
    string bookNo;
    int units_sold;
    double revenue;
};

int main() {
    Sales_data sd{"12345", 10, 3.5};
    string res = sd;
    double rd = sd;
}