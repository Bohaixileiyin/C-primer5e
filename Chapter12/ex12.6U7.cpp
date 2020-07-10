#include <iostream>
#include <vector>
#include <memory>
#include <typeinfo>
using namespace std;

vector<int>* vec(){
    return new vector<int>;
}
void read(vector<int>* p){
    int tmp = 0;
    while(cin >> tmp){
        p->push_back(tmp);
    }
}
void wirte(vector<int>* p){
    for(int &i:*p){
        cout << i << ',';
    }
    cout << endl;
}

shared_ptr<vector<int>> svec(){
    return make_shared<vector<int>>();
}
void sread(shared_ptr<vector<int>> p){
    int tmp = 0;
    while(cin >> tmp){
        p->push_back(tmp);
    }
}
void swirte(shared_ptr<vector<int>> p){
    for(int &i:*p){
        cout << i << ',';
    }
    cout << endl;
}

int func(){}

int main(){
    auto pointer = vec();
    read(pointer);
    wirte(pointer);
    delete pointer;

    cout << cin.eof() << endl;//返回1说明在子函数eof后，状态是保持整个进程
    cin.clear();

    auto spointer = svec();
    sread(spointer);
    swirte(spointer);

    cout << "************************" << endl;

    int i();//这是函数声明！！！而非值初始化
    cout << i << endl;//输出是1注意别被误导，i不是变量是函数
    cout << func << endl;//这个没有函数体的函数输出也是1

    int j{};//这才是值初始化
    cout << j << endl;//内置类型没有构造函数，所以值初始化都是零初始化
    //详见stackflow         https://stackoverflow.com/questions/17131911/what-does-int-do-in-c

    int* pi = new int();
    cout << *pi << endl;
}