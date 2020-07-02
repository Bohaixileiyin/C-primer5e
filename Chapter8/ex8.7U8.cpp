//./ex8.7U8 ../Chapter7/input.txt data.txt
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include    "../Chapter7/Sales_data.h"
using namespace std;
int main(int argc, char* argv[]){
    //ifstream input("../Chapter7/input.txt");
    ifstream input(*++argv);
    ofstream output(*++argv,ofstream::app);

    Sales_data total;
    if(read(input, total)){
        Sales_data trans;
        while (read(input, trans))
        {
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) <<endl;
                total = trans;
            }
        }
        output << total.isbn() << endl;
    }else
    {
        cerr << "No data?!" << endl;
    }
    
    
}