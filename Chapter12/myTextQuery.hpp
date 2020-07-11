#ifndef MY_TEXT_QUERY_HPP
#define MY_TEXT_QUERY_HPP

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <memory>
#include "myQueryResult.hpp"

using std::shared_ptr;
using std::vector;
using std::string;
using std::map;
using std::set;
using std::istringstream;
using std::ifstream;
using std::istream;

class myTextQuery{
    friend class myQueryResult;
    public:
        myTextQuery() = default;
        myTextQuery(ifstream &);
        myQueryResult query(const string& word){
            return myQueryResult(word,text,lineNumber);
        }
    private:
        shared_ptr<vector<string>> text;
        shared_ptr<map<string,set<int>>> lineNumber;
};

myTextQuery::myTextQuery(ifstream &infile):text(std::make_shared<vector<string>>()),lineNumber(std::make_shared<map<string,set<int>>>()){
    string line;
    int lineNo = 0;

    while(getline(infile,line)){
        ++lineNo;
        text->push_back(line);
        istringstream lineStream(line);
        string word;
        while(lineStream >> word){
            (*lineNumber)[word].insert(lineNo);//还可以用->at()来替代(*)[]，但不会自动添加
        }
    }

}

#endif