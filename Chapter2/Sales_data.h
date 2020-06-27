#ifndef SALES_DATA_H//头文件保护符，在编译时第一次include本文件时，此条件为真，执行下面语句，如果再一次include则会被忽略
#define SALES_DATA_H
#include <string>//同理在已经include过string的情况下，由于string头文件也有头文件保护符，预处理时不会被重复包含
struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif