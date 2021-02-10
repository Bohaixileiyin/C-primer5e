#include "String.hpp"
#include <vector>
using namespace std;
int main(){
    vector<String> vstr;
    cout << vstr.size() << " " << vstr.capacity() << endl;

    cout << "1" << endl;
    vstr.push_back(String());//先调用默认构造函数默认初始化，再 拷贝构造/移动构造    并放入vstr
    cout << vstr.size() << " " << vstr.capacity() << endl;

    cout << "2" << endl;
    vstr.push_back(String());
    cout << vstr.size() << " " << vstr.capacity() << endl;

    cout << "3" << endl;
    vstr.push_back(String());
    cout << vstr.size() << " " << vstr.capacity() << endl;

    cout << "4" << endl;
    vstr.push_back(String());
    cout << vstr.size() << " " << vstr.capacity() << endl;

    cout << "5" << endl;
    vstr.push_back(String());
    cout << vstr.size() << " " << vstr.capacity() << endl;
/*未将移动构造函数声明为noexcept时输出如下      将移动构造函数声明为noexcept后输出如下
1                                          1
移动构造                                    移动构造
2                                          2
移动构造                                    移动构造
拷贝构造                                    移动构造
3
移动构造                                    移动构造
拷贝构造                                    移动构造
拷贝构造                                    移动构造
4
移动构造                                    移动构造
5
移动构造                                    移动构造
拷贝构造                                    移动构造
拷贝构造                                    移动构造
拷贝构造                                    移动构造
拷贝构造                                    移动构造

推测出现这种现象的原因应该是vector在扩容时，现在新申请的内存上不管移动构造函数是不是noexcept都调用移动构造函数，之后根据是不是noexcept选择调用移动/拷贝构造函数
所以加不加noexcept只会影响vector在扩容搬移旧元素到新元素时是否会调用移动构造函数，在已有空间上构建元素时不论是否noexcept都会调用移动构造函数
详见cppp    p474
因为vector只保证如果在push_back时发生异常，vector不会发生改变，因此要确保在扩容搬移过程中不会异常，因此在扩容搬移时不会调用move，在已分配好的内存上构建时可以调用move，因为如果异常也不会影响
*/
}