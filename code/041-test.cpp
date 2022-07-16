#include"./includes/041.hpp"

int main()
{
    MovingAverage obj(2);
    if(obj.next(1) == 1 && obj.next(10) == 5.5 && obj.next(4) == 7)
    {
        return 1;
    }
    return 0;

}

