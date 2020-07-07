#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
int main(){
    vector<int> src{1,2,3,4,5,6,7,8,9};
    vector<int> dest;
    unique_copy(src.cbegin(), src.cend(), back_inserter(dest));
    for(auto &i:dest){
        cout << i << ",";
    }
    cout << endl;

    vector<int> insrt;auto ib = insrt.begin();auto ibi = inserter(insrt,ib);
    vector<int> b;auto ibb = back_inserter(b);
    list<int> f;auto iff = front_inserter(f);//vector不支持push_front

    //  copy(src.cbegin(), src.cend(), inserter(insrt,ib));
    //  copy(src.cbegin(), src.cend(), back_inserter(b));
    //  copy(src.cbegin(), src.cend(), front_inserter(f));

    for(auto &i:src){
        *ibi = i;
        *ibb = i;
        *iff = i;
    }

    for(auto &i:insrt){
        cout << i << ",";
    }
    cout << endl;
    for(auto &i:b){
        cout << i << ",";
    }
    cout << endl;
    for(auto &i:f){
        cout << i << ",";
    }
    cout << endl;

}