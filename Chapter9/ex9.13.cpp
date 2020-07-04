#include <vector>
#include <list>
#include <iostream>
using namespace std;
int main(){
    list<int> li{0,1,2,3};
    vector<int> vi{0,1,2,3};
    //容器类型不同，只能用迭代器拷贝，元素类型能转换即可
    vector<double> fli(li.begin(),li.end());
    //只有容器和元素类型完全相同才能用容器初始化，double != int因此还是迭代器初始化
    vector<double> fvi(vi.begin(),vi.end());
    for (int i = 0; i < 4; i++)
    {
        cout << fli[i] << fvi[i] << endl;
    }
    
}