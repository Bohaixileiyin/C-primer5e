#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    map<string,vector<string>> children;
    children["Smith"];//会创建一个pair p{Smith, 空vector}
    children["Smith"].push_back("Joe");
    children["Bush"].push_back("Old");
    children["Bush"].push_back("Little");

    for(auto &family:children){
        cout << family.first << ":";
        for(auto &child:family.second){
            cout << child << ",";
        }
        cout << endl;
    }
    cout << "-----------------------------" << endl;
    map<string,vector<pair<string,int>>> birth;
    birth["Smith"].push_back(make_pair("Joe", 19950606));
    birth["Bush"].push_back(make_pair("Old", 18540225));
    birth["Bush"].push_back(make_pair("New", 18950705));
    for(auto &family:birth){
        cout << family.first << ":" << endl;
        for(auto &child:family.second){
            cout << child.first << "," << child.second << endl;
        }
    }
}