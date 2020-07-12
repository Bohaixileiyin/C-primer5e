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
int numbered::No = 0;

#endif