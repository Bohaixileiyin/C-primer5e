//./Chapter1/readitem < ./Chapter1/input.txt
#include    "../../GCC_4_7_0/1/Sales_item.h"
#include    <iostream>

int main(){
    int choose;
    std::cin >> choose;
    if(choose == 0){
        Sales_item  book;
        std::cin >> book;
        std::cout << book << std::endl;
        return 0;
    }else{
        Sales_item  item1,item2;
        std::cin >> item1 >> item2;
        std::cout << item1 + item2 << std::endl;
        return 0;
    }
}