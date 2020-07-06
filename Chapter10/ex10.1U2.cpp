#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
using namespace std;
int main(){
    vector<int> input;
    int givenno = 0;
    int tmp;
    while(cin >> tmp){
        input.push_back(tmp);
    }
    cout << count(input.begin(), input.end(), givenno) << endl;
    
    cin.clear();

    list<string> inputs;
    string givens = "cc";
    string tmps;
    while(cin >> tmps){
        inputs.push_back(tmps);
    }
    cout << count(inputs.cbegin(), inputs.cend(), givens) << endl;
}