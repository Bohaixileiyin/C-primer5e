#include <initializer_list>
#include <iostream>

int sum(std::initializer_list<int> il){
    int s = 0;
    for(auto beg = il.begin();beg != il.end();++beg){
        s += *beg;
    }
    return s;
}

int main(){
    int res = sum({1,2,3});
    std::cout << res << std::endl;
    return 0;
}