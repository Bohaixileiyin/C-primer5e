#ifndef MY_PRINT_HPP
#define MY_PRINT_HPP
#include <iostream>
template <typename arraytype, unsigned arraysize>
void myprint(const arraytype(&a)[arraysize]){
    for(size_t i = 0; i != arraysize; ++i){
        std::cout << a[i] << std::endl;
    }
}

#endif