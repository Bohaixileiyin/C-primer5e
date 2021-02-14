#include <iostream>
#include "String.hpp"
#include "myString.hpp"
using namespace std;
int main(){
    myString s("hello,world");
    cout << s.content() << endl;

    myString copy(s);
    cout << copy.content() << endl;

    copy = s;
    cout << copy.content() << endl;
    for (size_t i = 0; i < 1000000000; i++){
        myString test("helloworld");
    }
    //刚开始忘了写析构函数，结果内存暴涨，vscode也卡死了

    // for (size_t i = 0; i < 1000000000; i++)
    // //数分钟的运行过程内存占用没有变化，大致可判断无泄露
    // //需要先把打印"析构"注释掉
    // //可以使用valgrind
    // {
    //     String test("helloworld");
    // }


}