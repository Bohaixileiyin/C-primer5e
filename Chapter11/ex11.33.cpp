#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;
int main(){
    ifstream input("input.txt");
    ifstream rule("rule.txt");

    map<string,string> rulemap;
    string key;
    string value;
    while(rule >> key && getline(rule,value)){
        //rulemap[key] = value.substr(1);
        rulemap.insert({key, value.substr(1)});
    }

    string text;
    while(getline(input,text)){
        istringstream line(text);
        bool isfirst = true;
        string word;

        while(line >> word){
            if(isfirst){
                isfirst = false;
            }else{
                cout << " ";
            }
            if(rulemap.find(word) != rulemap.end()){
                cout << rulemap[word];
            }else{
                cout << word;
            }
        }

        cout << endl;
    }
}