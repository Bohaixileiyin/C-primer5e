#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto uniq_end = unique(words.begin(), words.end());
    words.erase(uniq_end,words.end());
}

bool isShorter(const string &s1,const string &s2){
    return s1.size() < s2.size();
}
bool isSmallerThan5(const string &s){
    return  s.size() < 5;
}

int main(){
    vector<string> story{"the","quick","red","fox","jumps","over","the","the","slow","red","turtle"};
    elimDups(story);

    for(auto &str:story){
        cout << str << "   " ;
    }
    cout << endl;

    stable_sort(story.begin(), story.end(), isShorter);
    for(auto &str:story){
        cout << str << "   " ;
    }
    cout << endl;

    auto notSmallerThan5 = partition(story.begin(), story.end(), isSmallerThan5);
    for(auto str = notSmallerThan5;str != story.end();++str){
        cout << *str << "   " ;
    }
    cout << endl;
}