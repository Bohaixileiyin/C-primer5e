// ./Chapter7/ex7.3 < ./Chapter7/input.txt
//因此在此练习之后有习题要求封装Sale_data，因此可能不再能运行
#include <iostream>
#include <string>
#include "Sales_data.h"
int main(){
    Sales_data data1,data2;
    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;    
    //isbn(),combine(),avg_price()
    Sales_data &total = data1;
    if(total.isbn() == data2.isbn()){
        total.combine(data2);
        std::cout << total.avg_price() << std::endl;
        return 0;
    }else
    {
        std::cerr << "Data must refer tp the same ISBN" << std::endl;
        return -1;
    }
}