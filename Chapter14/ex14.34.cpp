class if_then_else{
    public:
        int operator()(int first, int second, int third)const{
            if(first)return second;
            return third;
        }
};

#include<iostream>
using namespace std;
int main(){
    if_then_else ite;
    cout << ite(1,2,3) << endl;
    cout << ite(0,2,3) << endl;
}