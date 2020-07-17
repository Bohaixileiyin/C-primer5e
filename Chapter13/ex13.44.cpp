#include <iostream>
#include "String.hpp"
using namespace std;
int main(){
    String str("hello,world");
    cout << str.begin() << endl;

    String copy(str);
    cout << copy.begin() << endl;

    copy = str;
    cout << copy.begin() << endl;

    // for (size_t i = 0; i < 1000000000; i++)
    // //数分钟的运行过程内存占用没有变化，大致可判断无泄露
    // //需要先把打印"析构"注释掉
    // //可以使用valgrind
    // {
    //     String test("helloworld");
    // }
}