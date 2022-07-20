#include "StrVec.h"
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <vector>

using std::endl;
using std::ifstream;
using std::istringstream;
using std::map;
using std::ostream;
using std::set;
using std::shared_ptr;
using std::string;
using std::vector;

class QueryResult;

class TextQuery {
    friend class QueryResult;

  public:
    TextQuery(ifstream &);
    QueryResult query(string);

  private:
    shared_ptr<StrVec> lines_ptr;
    map<string, set<int>> mp;
};

TextQuery::TextQuery(ifstream &in) : lines_ptr(new StrVec) {
    string s;
    while (getline(in, s)) {
        lines_ptr->push_back(s);
        istringstream is(s);
        string t;
        while (is >> t) {
            mp[t].insert(lines_ptr->size());
        }
    }
}

class QueryResult {
  public:
    set<int>::iterator begin() { return ptr->begin(); }
    set<int>::iterator end() { return ptr->end(); }
    shared_ptr<StrVec> get_file() { return file; }

  public:
    string word;
    shared_ptr<set<int>> ptr;
    shared_ptr<StrVec> file;
};

QueryResult TextQuery::query(string s) {
    if (mp.count(s)) {
        auto ptr = std::make_shared<set<int>>(mp[s]);
        return {s, ptr, lines_ptr};
    } else {
        return {s, nullptr, lines_ptr};
    }
}

void print(ostream &os, const QueryResult &q) {
    if (q.ptr == nullptr)
        return;
    os << q.word << "occurs " << q.ptr->size() << " times" << endl;
    for (auto &e : *q.ptr) {
        os << "    "
           << "(line " << e << " )";
        os << *(q.file->begin() + e - 1) << endl;
        // os << q.file->at(e - 1) << endl;
    }
}

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        std::cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(std::cin >> s) || s == "q")
            break;
        print(std::cout, tq.query(s));
        std::cout << endl;
    }
}

int main() {
    ifstream ifs("./tmp.txt");
    runQueries(ifs);
    return 0;
}