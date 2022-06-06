#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class MyCalendarThree {
public:
    MyCalendarThree() {
        v.clear();
    }

    static bool cmp(pair<int, int> &v1, pair<int, int> &v2)
    {
        return v1.first < v2.first;
    }
  
    int book(int start, int end) {
        if(start >= end)
        {
            return -1;
        }
        auto it = v.begin();
        for(; it != v.end(); ++it)
        {
            if((*it).first > start || ((*it).first == start && (*it).second < end))
            {
                break;
            }
        }
        v.insert(it, make_pair(start, end));
        int count = 0;
        int ans = 1;
        for(auto x : v)
        {
            q.push(x.second);
            ++count;
            while(!q.empty() && q.top() <= x.first)
            {
                q.pop();
                --count;
            }
            ans = max(ans, count);
        }
        while(!q.empty())
        {
            q.pop();
        }
        return ans;
    }
private:
    vector<pair<int, int>> v;
    priority_queue<int, vector<int>, greater<int>> q;
};


