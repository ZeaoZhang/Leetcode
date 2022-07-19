#include<iostream>
#include<map>
using namespace std;

// 每次调用book时， mp[start]++ 表示从此时开始进行中的日程加一
// mp[end]-- 表示从此时开始进行中的日程减一
//之后依次计算当前日程的累加， 若累加大于2， 则表示当前时间进行的日程数大于2，返回false
//并且--mp[start], ++mp[end] 即将当前的日程回原


class MyCalendarTwo {
public:
    map<int,int> mp;
    MyCalendarTwo() {

    }
    bool book(int start, int end) {
        ++mp[start];    //从此时开始进行中的日程加一
        --mp[end];      //从此时开始进行中的日程减一
        int res=0;
        for(auto it=mp.begin();it!=mp.end();it++){      //计算当前日程数的累计
            res += it->second;
            if(res > 2){            //若当前日程数大于二， 则还原mp， 返回false
                --mp[start];
                ++mp[end];
                return false;
            }
        }
        return true;        //整个过程中没有同时进行日程数大于二， 返回true

    }
};

