#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> iv(begin(ia),end(ia));
    list<int> il(begin(ia),end(ia));
//注意vector被erase元素之后的迭代器都会失效，所以不能用尾后迭代器做循环判断条件
//不能保存end(),所以必须反复调研end()
    for (auto first = iv.begin(); first != iv.end(); )
    {
        //cout << *first << endl;
        if(*first / 2 * 2 < *first)
            first = iv.erase(first);
        else
            first++;
        //cout << "cpl" << endl;
    }
    
    for (auto first = il.begin(); first != il.end(); )
    {
        if(*first / 2 * 2 == *first)
            first = il.erase(first);
        else
            first++;
    }

    for (auto i:iv)
    {
        cout << i << ',';
    }
    cout << endl;
    for (auto i:il)
    {
        cout << i << ',';
    }
    cout << endl;
    
}