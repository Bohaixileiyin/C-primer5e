#include <iostream>
#include <map>
#include <set>
//#include <algorithm>
using namespace std;

// bool compareTwoString(const pair<string,string> p1, const pair<string,string> p2){
//     if(p1.first == p2.first)return p1.second < p2.second;
//     return p1.first < p2.first;
// }

int main(){
    multimap<string,string> books;
    books.insert({"b", "fsdfs"});
    books.insert({"b", "ksda"});
    books.insert({"b", "bdsds"});

    books.insert({"a", "dasda"});
    books.insert({"a", "adsds"});
    books.insert({"a", "fasd"});
    for(auto &ab:books){//此时只是按键值字典序排序
        cout << ab.first << ":" << ab.second <<endl;
    }
    cout << "-------------------------------" << endl;
    auto iter = books.find("a");
    if(iter != books.end())books.erase(iter);//记得判断
    for(auto &ab:books){
        cout << ab.first << ":" << ab.second <<endl;
    }
    cout << "-------------------------------" << endl;
    iter = books.find("c");
    if(iter != books.end())books.erase(iter);
    for(auto &ab:books){
        cout << ab.first << ":" << ab.second <<endl;
    }

    //因为要实现的字典序不只要求key，所以自定义key的比较函数并没有用
    cout << "-------------------------------" << endl;
    //又因为关联容器不能用sort所以自定义比较pair也不行
    // sort(books.begin(),books.end(),compareTwoString);
    // for(auto &ab:books){
    //     cout << ab.first << ":" << ab.second <<endl;
    // }

    //可以遍历同一个作者的作品并存入set，然后遍历set输出
    set<string> tmp;
    auto cont = 0;
    auto flag = books.begin();
    while(flag != books.end()){
        cout << flag->first << ":" <<endl;
        cont = books.count(flag->first);
        for(int i = 0;i < cont;++i){
            tmp.insert(flag->second);
            ++flag;
        }
        for(auto &b:tmp){
            cout << b << endl;
        }
        tmp.erase(tmp.begin(),tmp.end());
    }
}