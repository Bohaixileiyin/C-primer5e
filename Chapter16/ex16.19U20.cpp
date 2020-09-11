#include <bits/stdc++.h>
using namespace std;
//ex16.19
template <typename T>
void printContainer(T& container){
    for(typename T::size_type i = 0; i < container.size(); i++){
        cout << container[i] << endl;
    }
}

//ex16.19
template <typename T>
void printContainer2(T& container){
    for(auto i = container.begin(); i != container.end(); i++){
        cout << *i << endl;
    }
}
int main(){
    vector<int> vi{0, 1, 2, 3};
    vector<string> vstr{"hi", "world"};

    printContainer(vi);
    printContainer(vstr);

    cout << max<double>(1, 0.5) << endl;
}