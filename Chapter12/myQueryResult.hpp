#ifndef MY_QUERY_RESULT_HPP
#define MY_QUERY_RESULT_HPP

#include<iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <memory>

using std::map;
using std::shared_ptr;
using std::set;
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::ostream;

class myQueryResult{
    public:
        myQueryResult() = default;
        myQueryResult(const string w,shared_ptr<vector<string>> txt,shared_ptr<map<string,set<int>>> ln):word(w),text(txt),lineNumber(ln){}

        void printWord()const{cout << word << " occurs " << (*(*lineNumber).find(word)).second.size() << "  times" << endl;}
        void printText()const{
            for(auto &ln:(*(*lineNumber).find(word)).second){
                cout << "    " << "(line " << ln << ")" << text->at(ln - 1) << endl;
            }
        }
    private:
        string word;
        shared_ptr<vector<string>> text = std::make_shared<vector<string>>();
        shared_ptr<map<string,set<int>>> lineNumber = std::make_shared<map<string,set<int>>>();
};
ostream &print(ostream &os,const myQueryResult &res){
    res.printWord();
    res.printText();
    return os;
}

#endif