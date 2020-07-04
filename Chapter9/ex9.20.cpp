#include <iostream>
#include <list>
#include <deque>
using namespace std;
int main(){
    list<int> lst{0,1,2,3,4,5,6,7};
    deque<int> q1;
    deque<int> q2;
    for (auto first = lst.begin(), last = lst.end(); first != last; first++)
    {
        if(*first / 2 * 2 < *first)
            q1.push_back(*first);
        else
            q2.push_back(*first);
    }
    for(auto &x:q1){
        cout << x << ',';
    }
    cout << endl;
   for(auto &x:q2){
        cout << x << ',';
    }
    cout << endl;
    
}