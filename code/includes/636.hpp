#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n, 0);
        stack<node> st;
        for(int i = 0; i < logs.size(); ++i)
        {
            node p = split(logs[i]);
            if(p.flag == false)
            {
                st.push(p);
            }
            else
            {
                node t = st.top();
                st.pop();
                int runtime = p.time - t.time + 1;
                result[t.id] += (runtime - t.occupytime);   
                if(!st.empty())
                {
                    st.top().occupytime += runtime;
                }
            }
        }
        return result;
    }

private:
    struct node
    {
        int id;
        bool flag;  // start 0, end 1
        int time;
        int occupytime = 0;
    };

    node split(string s)
    {
        int i = 0;
        while(s[i] != ':')
        {
            ++i;
        }
        node result;
        result.id = stringtoint(s.substr(0, i));
        int j = ++i;
        while(s[j] != ':')
        {
            ++j;
        }
        if(s.substr(i, j - i) == "start")
        {
            result.flag = false;
        }
        else
        {
            result.flag = true;
        }
        result.time = stringtoint(s.substr(j + 1));
        return result;
    }

    int stringtoint(string s)
    {
        int ans = 0;
        for(int i = 0;i < s.size(); ++i)
        {
            ans = ans * 10 + (s[i] - '0');
        }
        return ans;
    }
};

