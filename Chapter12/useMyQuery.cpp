#include "myQueryResult.hpp"
#include "myTextQuery.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void runQueries(ifstream &infile){
    myTextQuery tq(infile);
    while(true){
        cout << "enter word to look for, or q to quit: ";
        string s;
        if(!(cin >> s) || s == "q") break;
        print(cout,tq.query(s)) << endl;
    }
}
//修改完头文件后一定要切换回cpp文件界面编译，不然编译的是头文件，执行文件没变
//构造函数初始值记住要设定，否则有可能出错，比如此次遇到的shared_ptr    即构造函数参数列表前到函数体间的那段内容P258
//记得调试文件生成的自动调试目录是在项目根目录，如果需要此目录的文件，需要修改launch.json

//ostream &print这个函数没有return os也会段错误为什么？查了好久
//print(cout,tq.query(s)) << endl; 这一句有返回值时相当于cout << endl;没有返回值相当于 <<endl;所以段错误
//但是编译编译可以通过，因为如果你假如不在调用后 <<endl; 是没有问题的
//函数不加返回值gcc和vscode都没有提示，因此切记要写return   加上-Wall就会有警告，见https://zhuanlan.zhihu.com/p/35605079
//调试错误最重要的是定位错误
//找不到错误时打开编译器的警告选项
//-Wall 编译后显示所有警告
//-W        会显示警告，但是只显示编译器认为会出现错误的警告
//-w        编译后不显示任何warning
int main(){
    ifstream fs("The Hound of the Baskervilles.txt");
    runQueries(fs);
}