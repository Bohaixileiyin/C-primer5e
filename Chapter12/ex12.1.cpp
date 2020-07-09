#include "StrBlob.hpp"
#include <vector>
#include <iostream>
using namespace std;
int main(){
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        cout << b1.size() << b2.size() << endl;
    }
}