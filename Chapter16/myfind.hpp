#ifndef MY_FIND_HPP
#define MY_FIND_HPP

template<typename iter, typename value>
iter myfind(const iter&ib, const iter&ie, const value &v){
    auto i = ib;
    for(; i != ie; ++i){
        if(*i == v)
            return i;
    }
        return i;
}

#endif