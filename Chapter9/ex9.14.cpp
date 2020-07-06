#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;
int main(){
    list<char*> oldstyle;
    vector<string> n;
    char ct[] = "helloworld";
    oldstyle.push_back(ct);
    n.assign(oldstyle.begin(),oldstyle.end());//隐式的自动将char*类型转换为string
    cout << n[0] << endl;
}