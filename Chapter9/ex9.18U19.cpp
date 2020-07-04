#include <deque>
#include <iostream>
#include <string>
#include <list>
using namespace std;
int main(){
    string word;

    deque<string> que;

    while(cin >> word){
        que.push_back(word);
    }
    for(auto first = que.begin(), last = que.end();first != last;++first){
        cout << *first << endl;
    }

    cout << cin.eof() <<endl;
    cin.clear();
    cout << cin.eof() <<endl;

    list<string> lst;
    while(cin >> word){
        lst.push_back(word);
    }
    for(auto first = lst.begin(), last = lst.end();first != last;++first){
        cout << *first << endl;
    }
}