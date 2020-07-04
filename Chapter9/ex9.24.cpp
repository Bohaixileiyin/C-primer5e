#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> sv{"hello"};
    //string s = sv.at(0);
    cout << sv.at(0) << endl;
    cout << sv[0] << endl;
    cout << sv.front() << endl;
    cout << *sv.begin() << endl;
}