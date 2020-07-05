#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> svec;
    svec.reserve(1024);
    string word;
    int num = 1024;
    for(int i = 0; i < num; ++i)
        svec.push_back(word);

    cout << (svec.size() + svec.size() / 2) << endl;
    svec.resize(svec.size() + svec.size() / 2);

    cout <<svec.capacity() << endl;
}