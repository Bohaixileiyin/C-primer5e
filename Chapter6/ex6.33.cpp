#include <iostream>
#include <vector>

void recur(std::vector<int> copy){
    int num;
    if(!copy.empty()){
        std::cout << copy.back() << std::endl;
        copy.pop_back();
        recur(copy);
    }
}
int main(){
    std::vector<int>  iterr{0,1,2,3};
    recur(iterr);
    return 0;
}