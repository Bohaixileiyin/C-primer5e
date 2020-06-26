#include <iostream>

void exchange(int* a,int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void ExchangeByRefer(int &a,int&b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a,b;
    printf("please enter a & b\n");
    std::cin >> a >> b;
    printf("交换前a = %d,b = %d\n",a,b);

    exchange(&a,&b);
    ExchangeByRefer(a,b);
    
    printf("交换后a = %d,b = %d\n",a,b);
    return 0;
}