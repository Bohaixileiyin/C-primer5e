#include<iostream>
#include"../Chapter7/Sales_data.h"
using namespace std;
int main(){
    Sales_data tmp;
    while(cin >> tmp){
        cout << tmp << endl;
    }
}
//  ./ex14.6U9 < ../Chapter7/input.txt