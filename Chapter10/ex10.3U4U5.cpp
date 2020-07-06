#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(){
    vector<int> iv{0,1,2,3,4};
    cout << accumulate(iv.cbegin(), iv.cend(), 0) <<endl;

    vector<double> dv{0.0,1.0,2.0,3.0,4.1};
    cout << accumulate(dv.cbegin(), dv.cend(), 0) <<endl;

    vector<const char*>roster1{"hello","world"};
    vector<const char*>roster2{"hello","world"};
    cout << (void*)roster1[0] << "   " << (void*)roster2[0] << endl;
    cout << (roster1[0] == roster2[0]) << endl;
    cout << equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) << endl;

    cout << "----------------------------------------" << endl;
    const char* t1 = "hello";
    const char* t2 = "hello";
    char t3[] = "hello";

    cout << t1 << "   " << t2 << "   " << t3 <<endl;
    cout << (void*)t1 << "   " << (void*)t2 << "   " << (void*)t3 <<endl;
    //cout << static_cast<const void *>(t1) << "   " << static_cast<const void *>(t2) << "   " << static_cast<const void *>(t3) <<endl;//输出指针值
    cout << &t1 << "   " << &t2 << "   " << &t3 <<endl;//打印的是tn的地址，而非所存的地址值（也就是指针的值）

    cout << (t1 == t2) <<endl;
    cout << (t3 == t2) <<endl;
}