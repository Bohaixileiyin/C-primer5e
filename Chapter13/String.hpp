#ifndef STRING_HPP
#define STRING_HPP
#include <cstring>
#include <memory>
#include <iostream>
using std::cout;
using std::endl;
class String{
    private:
        unsigned size = 0;
        char* header = nullptr;

        static std::allocator<char> alloc;//只是声明，还需要在类外定义

        char* alloc_n_copy(const char *b, size_t s){//分配空间并拷贝，返回首地址
            auto h = alloc.allocate(s);
            return std::uninitialized_copy_n(b, size, h) - s;
        }
        void free(){
            for(auto p = begin(); p != end(); ++p){
                alloc.destroy(p);
            }
            alloc.deallocate(begin(), size);
        }

    public:
        String() = default;//默认构造函数
        //由C风格字符串构造
        String(const char* ca){
            size = strlen(ca);
            header = alloc_n_copy(ca, size);
        }
        //拷贝构造
        String(const String& o){//调用const的对象时只能调用其const成员函数，因为要确保不改变对象成员
            cout << "拷贝构造" << endl;
            size = o.size;
            header = alloc_n_copy(o.begin(), size);
        }
        //拷贝赋值
        String &operator=(const String& o){
            cout << "拷贝赋值" << endl;
            auto t = alloc_n_copy(o.begin(), o.size);//先拷贝这样就能处理自赋值
            //拷贝赋值函数一般要执行拷贝构造和析构函数中都要执行的工作，可以把公共部分作为实现放入private
            free();
            header = t;
            return *this;
        }
        //析构
        ~String(){free();//cout << "析构" << endl;
        }

        char *begin()const{
            return header;
        }
        char *end()const{//注意返回的应该是尾后指针
            return header + size;
        }
};
std::allocator<char> String::alloc;

#endif