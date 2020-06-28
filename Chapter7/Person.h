#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using std::istream;
using std::ostream;
using std::string;
class Person
{
    friend istream &read(istream &,Person &);
    friend ostream &print(ostream &,const Person &);
    public:
        //ex7.15
        Person() = default;
        Person(string &n,string &a):name(n),address(a){}
        Person(istream &is){
            read(is,*this);
        }
        //ex7.5
        std::string getName() const{return name;}
        std::string getAddress() const{return address;}
    private:
        //ex7.4
        std::string name;
        std::string address;
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