#include <iostream>
#include <string>

int main(int argc,char *argv[]){
    printf("%d\n",argc);
    std::string str;
    for(int i = 1;i < argc;i++){
        str += argv[i];
    }
    std::cout << str << std::endl;
    return 0;
}