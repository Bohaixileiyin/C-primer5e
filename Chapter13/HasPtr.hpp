#ifndef HAS_PTR_HPP
#define HAS_PTR_HPP

#include <string>
#include <iostream>

class HasPtr{
    public:
        HasPtr(const std::string &s = std::string()):ps(new std::string(s)), i(0){}
        //ex13.5
        HasPtr(const HasPtr &ori):ps(new std::string(*ori.ps)),i(ori.i){}
        //ex13.8
        HasPtr& operator=(const HasPtr& ori){*ps = *ori.ps;i = ori.i;return *this;}//拷贝赋值需要返回值，拷贝构造和析构不需要
        //ex13.11
        ~HasPtr(){delete ps;}
    private:
        std::string *ps;
        int i;
};

#endif