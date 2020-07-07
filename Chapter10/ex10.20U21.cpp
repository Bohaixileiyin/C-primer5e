#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> story{"the","quick","red","fox","jumps","over","the","the","slow","red","turtle", "sixsixsix", "sixsixsix", "sixsixsix",};
    cout << count_if(story.begin(), story.end(), [](const string &str){return str.size() > 6;}) << endl;

    int local = 5;
    auto dec = [local]()mutable{return (local?local--:local)?true:false;};

    int count = 0;
    while(dec()){
        cout << "5 - local:" << ++count << endl;
    }

    cout << dec() << endl;//输出都是0，说明没有继续递减
    cout << dec() << endl;
}