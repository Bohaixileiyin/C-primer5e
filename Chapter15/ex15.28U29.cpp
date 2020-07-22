#include "Quote.hpp"
#include "Bulk_quote.hpp"
#include <vector>
#include <iostream>
#include <memory>
using namespace std;
int main(){
    vector<Quote> setofq;
    vector<shared_ptr<Quote>> setofp;
    for(int i = 0; i != 5; ++i){
        setofq.push_back(Bulk_quote("deri", 5, 1, 0.8));
        setofp.push_back(make_shared<Bulk_quote>("deri", 5, 1, 0.8));
    }
    double t1 = 0;
    double t2 = 0;
    for(int i = 0; i != 5; ++i){
        t1 += setofq[i].net_price(5);
        t2 += setofp[i]->net_price(5);//注意参数勿小于5，否则打折后取整为0
    }
    cout << t1 <<endl;//输出125，为未打折价格
    cout << t2 <<endl;//输出24，原因是t2类型设为了int，改为double后正确，但不知道为什么只比正确值少一，如果用int类型中间变量存setofp[i]->net_price(5)会每次都少
    //应该是double在+=时隐式转换为int有一些奇怪的东西，以后注意别无脑int
}