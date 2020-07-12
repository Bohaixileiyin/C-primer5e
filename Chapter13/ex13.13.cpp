#include <iostream>
using namespace std;

struct X{
    X(){cout << "X()" << endl;}//不接受任何实参，也就是默认构造函数
    X(const X&){cout << "X(const X&)" << endl;}//拷贝构造函数
    X& operator=(const X&){cout << "X& operator=(const X&)" << endl;}//拷贝赋值函数
    ~X(){}//析构函数
};

int main(){
    cout << "1:默认构造         默认初始化" << endl;
    X x1;
    cout << "2:拷贝构造         拷贝初始化" << endl;
    X x2 = x1;
    cout << "3:拷贝赋值         " << endl;
    x1 = x2;
}