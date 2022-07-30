#include <fstream>
#include "Query.h"

using namespace std;

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        std::cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout, tq.query(s));
        std::cout << endl;
    }
}

int main() {
    ifstream in("./tmp.txt");

    runQueries(in);
}