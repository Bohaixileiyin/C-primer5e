#ifndef STR_BLOB_H
#define STR_BLOB_H

#include <vector>
#include <string>
#include <memory>
class StrBlob{
    public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> i1);
    size_type size() const{return data->size();}
    bool empty() const{return data->empty();}

    void push_back(const std::string &t){data->push_back(t);}

    std::string& front(){
        check(0, "front on empty StrBlob");
        return data->front();
    }
    std::string& back(){
        check(0, "back on empty StrBlob");
        return data->back();
    }
    void pop_back(){
        check(0, "pop_back on empty StrBlob");
        return data->pop_back();
    }

    std::string& front()const{
        check(0, "front on empty StrBlob");
        return data->front();
    }
    std::string& back()const{
        check(0, "back on empty StrBlob");
        return data->back();
    }
    private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i,const std::string &msg) const;
};
StrBlob::StrBlob():data(std::make_shared<std::vector<std::string>>()){}
StrBlob::StrBlob(std::initializer_list<std::string> i1):data(std::make_shared<std::vector<std::string>>(i1)){}

void StrBlob::check(size_type i, const std::string &msg)const{//末尾加const为const成员函数，表示不会修改成员，只有类的成员函数有这种写法，其它函数加了会报错也没有必要加，见P248
    if(i >= data->size())
        throw std::out_of_range(msg);
}

#endif