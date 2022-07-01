#ifndef SCREEN
#define SCREEN

#include <string>
#include <vector>

class Window_mgr {
  public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

  private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen {
    friend void Window_mgr::clear(Window_mgr::ScreenIndex);

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
    pos size() const;

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

inline Screen::pos Screen::size() const { return height * width; }

// 类内私有函数
inline void Screen::do_display(std::ostream &os) const { os << contents; }

// Window_mgr私有成员函数
void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}
#endif