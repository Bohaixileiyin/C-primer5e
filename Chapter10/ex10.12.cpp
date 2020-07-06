#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include "../Chapter7/Sales_data.h"
using namespace std;

bool compareIsbn(const Sales_data& s1,const Sales_data& s2){
    return s1.isbn() < s2.isbn();
}

int main(){
    vector<Sales_data> data{Sales_data("5615161"), Sales_data("65649843"), Sales_data("231035")};
    for(auto &book:data){
        print(cout,book);
        cout << endl;
    }
    cout << "--------------Sorted--------------" << endl;
    sort(data.begin(),data.end(),compareIsbn);
    for(auto &book:data){
        print(cout,book);
        cout << endl;
    }
}