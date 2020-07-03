#include <vector>
#include <iostream>

#include <list>
using std::list;

using std::vector;
bool find(vector<int>::iterator s, vector<int>::iterator e, int target){
    while (s != e)
    {
        if (*s == target)
            return true;
        else
            ++s;
    }
    return false;
}

int findidx(vector<int>::iterator s, vector<int>::iterator e, int target){
    int index = 0;
    while (s != e)
    {
        if (*s == target)
            return index;
        else
            {
                ++s;
                ++index;
            }
    }
    return -1;
}

int main(){
    vector<int> mustBeTrue{1,2,3,4,5};
    vector<int> mustBeFalse{1,2,4,5};
    std::cout << find(mustBeTrue.begin(), mustBeTrue.end(), 3) << std::endl;
    std::cout << find(mustBeFalse.begin(), mustBeFalse.end(), 3) << std::endl;

    std::cout << findidx(mustBeTrue.begin(), mustBeTrue.end(), 3) << std::endl;
    std::cout << findidx(mustBeFalse.begin(), mustBeFalse.end(), 3) << std::endl;

    list<int> lst1;
    list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
    // while (iter1 < iter2)
    // {
    //     /* code */
    // }
    
}