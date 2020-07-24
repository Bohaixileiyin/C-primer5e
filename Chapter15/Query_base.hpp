#ifndef QUERY_BASE_HPP
#define QUERY_BASE_HPP
//未写完，QueryResult及TextQuery见Chapt12
#include <string>
class Query_base{
    friend class Query;
    protected:
        using line_no = TextQuery::line_no;
        virtual ~Query_base() = default;
    private:
        //eval返回与当前Query匹配的QueryResult
        virtual QueryResult eval(const TextQuery&)const = 0;
        //rep是表示查询的一个string
        virtual std::string rep()const = 0;
};

#endif