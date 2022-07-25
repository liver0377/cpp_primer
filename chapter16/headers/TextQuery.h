#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <vector>

#include "DebugDelete.h"

using namespace std;

class QueryResult;

class TextQuery {
    friend class QueryResult;

   public:
    TextQuery(ifstream &);
    QueryResult query(string);

   private:
    shared_ptr<vector<string>> lines_ptr;
    map<string, set<int>> mp;
};

TextQuery::TextQuery(ifstream &in)
    : lines_ptr(new vector<string>, DebugDelete()) {
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

#endif