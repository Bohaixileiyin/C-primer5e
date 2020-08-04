#include <tuple>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    tuple<int, int, int> t1(10, 20, 30);
    cout << tuple_size<tuple<int, int, int>>::value <<endl;
    cout << get<0>(t1) << " ";
    cout << get<1>(t1) << " ";
    cout << get<2>(t1) << " ";
    cout << endl;
    
    tuple<string, vector<string>, pair<string, int>> hird("hello", {"world", "C++"}, {"No.", 1});
    cout << get<0>(hird) << " ";
    cout << get<1>(hird)[0] << " " << get<1>(hird)[1] << " ";
    cout << get<2>(hird).first << " " << get<2>(hird).second << " ";
    cout << endl;
}