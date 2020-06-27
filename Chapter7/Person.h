#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using std::istream;
using std::ostream;
struct Person
{
    //ex7.4
    std::string name;
    std::string address;
    //ex7.5
    std::string getName() const{return name;}
    std::string getAddress() const{return address;}
};
//ex7.9
istream &read(istream &is,Person &people){
    is >> people.name >> people.address;
    return is;
}
ostream &print(ostream &os,const Person &people){
    os << people.getName() << people.getAddress();
    return os;
}
#endif