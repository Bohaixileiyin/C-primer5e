#ifndef BEGIN_AND_END_HPP
#define BEGIN_AND_END_HPP

template<typename arraytype, unsigned arraysize>
const arraytype* mybegin(const arraytype(&a)[arraysize]){
    return a;
}

template<typename arraytype, unsigned arraysize>
const arraytype* myend(const arraytype(&a)[arraysize]){
    return a + arraysize - 1;
}

#endif