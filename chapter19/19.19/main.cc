#include <iostream>
#include <vector>
#include <functional>
#include "Sales_data.h"

using namespace std;

int main() {
    function<Sales_data(vector<Sales_data>&)> f = [&](vector<Sales_data> &v)->Sales_data{
       for (auto &s: v) {
        if (s.avg_price() > 10) return s;
       } 
       return Sales_data{};
    };

}