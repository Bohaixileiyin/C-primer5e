#ifndef DISC_QUOTE_HPP
#define DISC_QUOTE_HPP

#include"Quote.hpp"
class Disc_quote:public Quote{
    double net_price(size_t)const = 0;
};

#endif