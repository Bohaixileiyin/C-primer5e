#ifndef MY_STRING_HPP
#define MY_STRING_HPP

#include <cstring>
//写这种含指针的类，一定要记得写    default ctor, copy ctor, copy assign, move ctor, move assign, dtor  六个函数
class myString{
    private:
        int size = 0;
        char* str = nullptr;
        void init(int size, const char* src){
            str = new char[size + 1];
            memcpy(str, src, size + 1);
        }
    public:
        //构造函数
        myString() = default;
        myString(const char* src){
            size = strlen(src);
            init(size, src);
        }
        //copy ctor
        myString(const myString& src){
            size = src.size;
            init(size, src.str);
        }
        //copy assign
        myString& operator=(const myString& src){
            if(this != &src){
                delete[] str;//!赋值动作记得释放原来的资源
                size = src.size;
                init(size, src.str);
            }
            return *this;
        }
        //move ctor
        myString(myString&& src){
            size = src.size;
            str = src.str;
            src.size = 0;
            src.str = nullptr;
        }
        //move assign
        myString& operator=(myString&& src){
            if(this != &src){
                delete[] str;//!
                size = src.size;
                str = src.str;
                src.size = 0;
                src.str = nullptr;
            }
            return *this;
        }
        //dtor
        ~myString(){
            if(str){
                delete[] str;
                size = 0;
            }
        }

        char* content(){
            return str;
        }
};

#endif