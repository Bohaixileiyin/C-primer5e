#include <iostream>
#include "../Chapter7/Sales_data.h"

using namespace std;
int main(){
    auto f1 = [](int a, int b){return a+b;};
    cout << f1(3, 5) << endl;

    int caped = 3;
    auto f2 = [caped](int b){return caped + b;};
    cout << f2(5) << endl;

    auto compareIsbn = [](const Sales_data& s1,const Sales_data& s2){
        return s1.isbn() < s2.isbn();
    };
    cout << compareIsbn(Sales_data("5615161"), Sales_data("65649843")) << endl;
}