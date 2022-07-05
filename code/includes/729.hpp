#include<iostream>
#include<vector>
#include<map>
using namespace std;

class MyCalendar {
public:
    MyCalendar() {
        calender.clear();
    }
    
    bool book(int start, int end) {
        auto it = calender.begin();
        while(it != calender.end() && it->second <= start)
        {
            ++it;
        }
        if(it == calender.end() || it->first >= end)
        {
            calender.insert(it, make_pair(start, end));
            return true;
        }
        return false;
    }
private:
    vector<pair<int, int>> calender;
};

