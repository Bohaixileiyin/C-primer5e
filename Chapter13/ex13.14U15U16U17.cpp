#include <iostream>
#include "numbered.hpp"
using namespace std;

void f(const numbered &s){ cout << s.mysn << endl;}
int main(){
    //ex13.14   输出都是1
    //ex13.15   输出4/5/6因为传非引用类型参数给f发生了拷贝初始化，s的mysn自增
    //ex13.16   输出1/2/3
    //cout << numbered::No << endl;
    numbered a, b = a, c = b;
    f(a);   f(b);   f(c);
}