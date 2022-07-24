class Base {
  public:
    void pub_mem();

  protected:
    int prot_mem;

  private:
    char priv_mem;
};

struct Pub_Derv : public Base {
    int f() { return prot_mem; }
    void memfcn(Base &b) { b = *this;}
};

struct Prot_Derv : protected Base {
    void memfcn(Base &b) { b = *this;}
};

struct Priv_Derv : private Base {
    int f1() const { return prot_mem; }
    void memfcn(Base &b) { b = *this;}
};

struct Derived_from_Public : public Pub_Derv {
    int use_base() { return prot_mem; }
    void memfcn(Base &b) { b = *this;}
};

struct Derived_from_Private : public Priv_Derv {
    void memfcn(Base &b) { b = *this;}
};

struct Derived_from_Protected : public Prot_Derv {
    int use_base() { return prot_mem; }
    void memfcn(Base &b) { b = *this;}
};

Base *p1, *p2, *p3, *p4, *p5, *p6;
Pub_Derv d1;
Priv_Derv d2;
Prot_Derv d3;
Derived_from_Public dd1;
Derived_from_Private dd2;
Derived_from_Protected dd3;

int main() {
    // 用户代码，使用规则1
    p1 = &d1;  // 派生类公有继承自基类, 合法
    p2 = &d2;  // 非公有继承, 不合法
    p3 = &d3;  // 非公有继承, 不合法
    p4 = &dd1; // 两重公有继承, 合法
    p5 = &dd2;
    p6 = &dd3; // 2, 3已经不合法，继续派生肯定不合法
}