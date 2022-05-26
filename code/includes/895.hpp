#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class FreqStack {
public:
    FreqStack() {                   //初始化
        st.clear();
        f.clear();
    }

    void push(int val) {
        if (f.find(val) != f.end())            //若在f中找到新入栈的元素，即元素不是第一次入栈
        {
            if (f[val] == st.size() - 1)       //若当前元素已出现次数是最高，则新建一层vector数组并元素入栈
            {
                vector<int> value(1, val);
                st.push_back(value);
            }
            else                              //否则直接入栈进入更高一层
            {
                st[f[val] + 1].push_back(val);
            }
            ++f[val];                         //更新元素val出现次数
        }
        else                                  //第一次入栈
        {
            f[val] = 0;                       //将元素val及出现次数插入f中
            if (st.size() == 0)                //若当前栈st为空，新建一层vector数组，元素入栈
            {
                vector<int> value(1, val);
                st.push_back(value);
            }
            else                              //否则，元素直接进入最低层
            {
                st[0].push_back(val);
            }

        }
    }

    int pop() {
        int layer = st.size() - 1;
        int v = st[layer].back();
        st[layer].pop_back();                //最高频率且离栈顶最近的元素出栈

        if (st[layer].size() == 0)            //若出站后最高层为空，删除最高层
        {
            auto it = st.end();
            it--;
            st.erase(it);
        }

        --f[v];                             //更新f
        if (f[v] < 0)                        //若此时栈中已无此元素，删除f中的联系
        {
            f.erase(v);
        }
        return v;
    }

private:
    vector<vector<int>> st;
    map<int, int> f;
};