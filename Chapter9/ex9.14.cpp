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
    n.assign(oldstyle.begin(),oldstyle.end());
    cout << n[0] << endl;
}