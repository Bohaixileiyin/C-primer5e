#include "Foo.hpp"
#include <iostream>
using namespace std;
int main(){
    Foo obj;
    obj.sorted();
    /**通过手动注释Foo中的sorted代码，结果如下
     * 书上版本
     * 输出 sorted()const &
     * ex56
     * 无限循环输出ex56sorted()直到崩溃
     * ex57
     * 输出ex57sorted() sorted()&&符合推理
     */
}