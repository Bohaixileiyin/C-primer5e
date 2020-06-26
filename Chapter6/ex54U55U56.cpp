#include <vector>
#include <iostream>

using namespace std;

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int main(){
    vector<int(*)(int ,int )>   func{add,sub,mul,divi};
    cout << func[0](5,3) << endl;
}