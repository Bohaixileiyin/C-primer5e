#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> iv{0,1,2,3,4};

    fill_n(back_inserter(iv),10,0);
    for(auto &i:iv){
        cout << i ;
    }
    cout << endl;
    fill_n(iv.begin(),iv.size(),0);
    for(auto &i:iv){
        cout << i ;
    }
    cout << endl;

    vector<int> vec;//{1,1,1,1,1,1,1,1,1,1};
    vec.reserve(10);
    fill_n(vec.begin(), 10, 0);
    for(auto &i:vec){
        cout << i ;
    }
    cout << endl;
}