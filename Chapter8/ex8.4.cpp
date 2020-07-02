#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> res;
    string tmp;
    ifstream ipt("input.txt");
    while(getline(ipt,tmp)){
        res.push_back(tmp);
    }
    for(auto &str:res){
        cout << str << endl;
    }
}