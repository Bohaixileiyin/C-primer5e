#include "Chapter6.h"
#include <iostream>

void fact(){
    printf("please enter a number: \n");
    int c = 0;
    std::cin >> c;
    printf("%d! is ",c);
    int ret = 1;
    while(c > 1){
        ret *= c--;
    }
    printf("%d\n",ret);
}