#include <string>

class Screen {
  public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht * wd, c) {}

    char get() const;
    char get(pos r, pos c) const;
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;
    Screen &set(char c);
    Screen &set(pos row, pos col, char c);
    Screen &move(pos r, pos c);

  private:
    void do_display(std::ostream &os) const;

  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

// 类内接口函数
Screen &Screen::display(std::ostream &os) {
    do_display(os);
    return *this;
}

const Screen &Screen::display(std::ostream &os) const {
    do_display(os);
    return *this;
}

inline Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos row, pos col, char c) {
    contents[row * width + col] = c;
    return *this;
}

inline char Screen::get() const { return contents[cursor]; }

inline char Screen::get(pos r, pos c) const { return contents[r * width + c]; }

// 类内私有函数
inline void Screen::do_display(std::ostream &os) const { os << contents; }