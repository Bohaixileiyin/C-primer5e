#include "Quote.hpp"
#include "Bulk_quote.hpp"
using namespace std;
int main(){
    Quote base("base", 5);//书号及单价
    print_total(cout, base, 2);//输出流及书本数
    Bulk_quote deri("deri", 5, 1, 0.8);//注意0.8指折扣掉0.8，即2折
    print_total(cout, deri, 5);

    base.debug();
    deri.debug();
}