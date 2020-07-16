#include <vector>
#include <list>
#include <string>
#include <iostream>
#include "myfind.hpp"
#include "myprint.hpp"
#include "beginAndend.hpp"
using namespace std;
int main(){
    cout << "--------------------16.4--------------------" << endl;
    vector<int> iv{0,1,2,3,4};
    auto res = myfind(iv.begin(),iv.end(), 2);
    cout << *res << endl;

    list<string> sl{"hello", "c++", "the", "best", "programming", "language"};
    auto rs = myfind(sl.begin(), sl.end(), "the");
    cout << *rs << endl;

    cout << "--------------------16.5--------------------" << endl;
    int ia[3] = {5,6,7};
    myprint(ia);
    char ca[3] = {'a', 'b', 'c'};
    myprint(ca);

    cout << "--------------------16.6--------------------" << endl;
    cout << *mybegin(ia) << " " << *myend(ia) << endl;
    cout << *mybegin(ca) << " " << *myend(ca) << endl;
}