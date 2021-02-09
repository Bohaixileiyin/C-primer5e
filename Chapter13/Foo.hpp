#ifndef FOO_HPP
#define FOO_HPP

#include <algorithm>
#include <vector>
#include <iostream>
class Foo{
    public:
        Foo sorted()&&;
        Foo sorted()const &;
        Foo ex56sorted()const &;
        Foo ex57sorted()const &;
    private:
        std::vector<int> data = {1, 3, 2};
};
Foo Foo::sorted()&&{
    std::cout << "sorted()&&" << std::endl;
    std::sort(data.begin(), data.end());
    return *this;
}
// Foo Foo::sorted()const &{
//     std::cout << "sorted()const &" << std::endl;
//     Foo ret(*this);
//     std::sort(ret.data.begin(), ret.data.end());
//     return ret;
// }
// Foo Foo::sorted()const &{
//     std::cout << "ex56sorted()" << std::endl;
//     Foo ret(*this);
//     return ret.sorted();
// }
Foo Foo::sorted()const &{
    std::cout << "ex57sorted()" << std::endl;
    return Foo(*this).sorted();
}

#endif