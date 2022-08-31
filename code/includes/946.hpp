#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int> st;
        int i = 0, j = 0;
        int n = pushed.size();
        st.push_back(pushed[i++]);
        while(j < n)
        {
            if(!st.empty() && st.back() == popped[j])
            {
                st.pop_back();
                ++j;
            }
            else if(i < n)
            {
                st.push_back(pushed[i++]);
            }
            else
            {
                break;
            }
        }
        return j == n ? true : false;
    }
};
