#include "./includes/732.hpp"

int main()
{
    MyCalendarThree myCalendarThree;
    vector<int> v;
    v.push_back(myCalendarThree.book(10, 20));
    v.push_back(myCalendarThree.book(50, 60));
    v.push_back(myCalendarThree.book(10, 40));
    v.push_back(myCalendarThree.book(5, 15));
    v.push_back(myCalendarThree.book(5, 10));
    v.push_back(myCalendarThree.book(25, 55));
    //v中元素应与result中元素相同
    vector<int> result = {1, 1, 2, 3, 3, 3};
    for(int i = 0; i < 6; ++i)
    {
        if(v[i] != result[i])
        {
            return 0;
        }
    }
    return 1;
}