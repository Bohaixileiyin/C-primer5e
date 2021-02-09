#include "String.hpp"
#include <vector>
using namespace std;
int main(){
    vector<String> vstr;
    vstr.push_back(String());//先调用默认构造函数默认初始化，再 拷贝构造/移动构造    并放入vstr
}