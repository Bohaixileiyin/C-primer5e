#include <stack>
#include <iostream>
//eg.(3 + 5)
//只支持个位数的四则运算，括号内只能有一次运算
//多位需要用string，还要分割字符串（要不输入时加空格，要不程序里判断）比较麻烦
//注意结果入栈时需要整数转字符
//还有虽然输入时字符是一次性输入的，但是程序读取每次只读一个字符并处理，每次遇到（就会处理掉，所以不用特意考虑嵌套括号的情况
using namespace std;
int main(){
    stack<char> stk;
    char c;
    int rvalue = 0;
    int lvalue = 0;
    char op;
    int res = 0;
    while(cin >> c){
        if( c == ')'){
            while(stk.top() != '('){
                rvalue = stk.top() - '0';
                stk.pop();

                op = stk.top();
                stk.pop();

                lvalue = stk.top() - '0';
                stk.pop();

                switch (op)
                {
                case '+':
                    res = lvalue + rvalue;
                    break;
                case '-':
                    res = lvalue - rvalue;
                    break;
                case '*':
                    res = lvalue * rvalue;
                    break;
                case '/':
                    res = lvalue / rvalue;
                    break;
                }
            }
            stk.pop();//将左括号出栈
            stk.push(res + '0');
        }else{
            stk.push(c);
        }
    }
    
    for(auto r = stk.top(); !stk.empty(); stk.pop()){
        cout << r << endl;
    }
    
}