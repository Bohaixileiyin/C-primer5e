#include <typeinfo>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin();//, it2 = v2.begin();
    //auto it2 = v2.begin();
    auto it3 = v1.cbegin(), it4 = v2.cbegin();

    cout << typeid(it1).name() << endl;
    cout << typeid(it3).name() << endl;
    cout << typeid(it4).name() << endl;
}