#include <iostream>

using namespace std;

class base {
  public:
    string name() { return basename; }
    virtual void print(ostream &os) { os << basename; }

  private:
    string basename = "base";
};

class derived : public base {
  public:
    void print(ostream &os) {
        base::print(os);
        os << " " << i;
    }

  private:
    int i = 10;
};

base bobj;
base *bp1 = &bobj;
base &br1 = bobj;
derived dobj;
base *bp2 = &dobj;
base &br2 = dobj;

int main() {
    bobj.print(cout); cout << endl; // base
    dobj.print(cout); cout << endl; // derived
    bp1->name();      // base
    bp2->name();      // derived
    br1.print(cout);  cout << endl; // base
    br2.print(cout);  cout << endl; // derived 
}