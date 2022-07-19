#include"./includes/731.hpp"
#include<vector>

int main()
{
    MyCalendarTwo MyCalendar;
    vector<bool> result;
    vector<bool> answer = {true, true, true, false, true, true};
    result.push_back(MyCalendar.book(10, 20));
    result.push_back(MyCalendar.book(50, 60));
    result.push_back(MyCalendar.book(10, 40));
    result.push_back(MyCalendar.book(5, 15));
    result.push_back(MyCalendar.book(5, 10));
    result.push_back(MyCalendar.book(25, 55));
    //前两个日程安排可以添加至日历中。 第三个日程安排会导致双重预订，但可以添加至日历中。
    //第四个日程安排活动（5,15）不能添加至日历中，因为它会导致三重预订。
    //第五个日程安排（5,10）可以添加至日历中，因为它未使用已经双重预订的时间10。
    //第六个日程安排（25,55）可以添加至日历中，因为时间 [25,40] 将和第三个日程安排双重预订；
    //时间 [40,50] 将单独预订，时间 [50,55）将和第二个日程安排双重预订。
    if(result == answer)
    {
        return 1;
    }
    return 0;
}

