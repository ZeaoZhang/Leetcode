#include"./includes/729.hpp"

int main()
{
    MyCalendar MyCalendar;
    if(MyCalendar.book(10, 20) != true)
    {
        return 0;
    }
    if(MyCalendar.book(15, 25) != false)
    {
        return 0;
    }
    return 1;
}

