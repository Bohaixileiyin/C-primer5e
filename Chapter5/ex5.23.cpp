#include <iostream>
#include <stdexcept>
int main(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0,v2 = 0;
    while(std::cin >> v1 >> v2){
        try{
            if(v2 == 0){
                throw std::runtime_error("v2 can't be zero");
            }else{
                std::cout << "The div of " << v1 << "and" << v2 << "is" << (double)v1/v2 <<std::endl;
                return 0;
        }
        }catch(std::runtime_error err){
            std::cout << err.what() << "\nTry again? Enter y or n." << std::endl;
            char c;
            std::cin >> c;
            if(!std::cin || c == 'n'){
                break;
            }
        }
    }
}