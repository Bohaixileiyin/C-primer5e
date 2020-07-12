#ifndef NUMBERED_HPP
#define NUMBERED_HPP

class numbered{
    public:
        numbered():mysn(++No){}
        numbered(const numbered &ori):mysn(++No){}

        int mysn;
        static int No;
    private:
};
//静态数据成员不能在类内定义
int numbered::No = 0;

#endif