#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>
class Screen{
    friend class Window_mgr;//把Window_mgr声明为Screen的友元类，是让Win可以访问Scree的私有部分，此文件中并未访问Win类，因此不用include Window_mgr
public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht * wd,c){}
    //类内定义的函数默认内联
    char get() const{return contents[cursor];}

    inline char get(pos ht, pos wd) const;
    Screen &move(pos r,pos c);

    Screen &set(char);
    Screen &set(pos, pos, char);

    Screen &display(std::ostream &os){do_display(os);return *this;}
    const Screen &display(std::ostream &os) const{do_display(os);return *this;}
private:
    pos cursor = 0;
    pos height = 0,width = 0;
    std::string contents;

    void do_display(std::ostream &os)const {os << contents;}
};

//在类外定义时定义内联
inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}
//在类内声明时设为内联
char Screen::get(pos r,pos c)const{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}
inline Screen &Screen::set(pos r, pos col, char ch){
    contents[r * width + col] = ch;
    return *this;
}

#endif