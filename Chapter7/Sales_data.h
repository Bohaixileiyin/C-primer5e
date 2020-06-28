#ifndef SALES_DATA_H//头文件保护符，在编译时第一次include本文件时，此条件为真，执行下面语句，如果再一次include则会被忽略
#define SALES_DATA_H

#include <iostream>
#include <string>//同理在已经include过string的情况下，由于string头文件也有头文件保护符，预处理时不会被重复包含

using std::istream;
using std::ostream;

class Sales_data
{
friend Sales_data add(const Sales_data &,const Sales_data &);
friend istream &read(istream &,Sales_data &);
friend ostream &print(ostream &,const Sales_data &);
//定义在类内部的函数是隐式的inline函数，见P214
public:
    //构造函数
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s){}
    Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p * n){}
    Sales_data(istream &);
    //成员函数
    std::string isbn() const{return bookNo;}
    Sales_data& combine(const Sales_data&);
private:
    double avg_price() const;//此函数的目的并不是给用户来调用，只是类的实现的一部分，因此属于类的实现而非接口
    //数据成员
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
//非成员接口函数声明
Sales_data add(const Sales_data&,const Sales_data&);
std::ostream &print(std::ostream&,const Sales_data&);
std::istream &read(std::istream&,Sales_data&);

//在类的外部也可以定义成员函数
double Sales_data::avg_price() const{
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;    
}
Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

//定义非成员函数
istream &read(istream &is,Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
ostream &print(ostream &os,const Sales_data &item){
    os << item.isbn() << "  " << item.units_sold << "  " << item.revenue << "  " << item.avg_price();
    return os;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

//在类的外部定义构造函数
Sales_data::Sales_data(istream &is){
    read(is,*this);
}

#endif