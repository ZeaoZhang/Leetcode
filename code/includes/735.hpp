#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for(int &a : asteroids)
        {
            if(a > 0)
            {
                st.push_back(a);
            }
            else
            {
                if(st.empty())
                {
                    st.push_back(a);
                }
                else if((st.back() > 0 && a > 0) || (st.back() < 0 && a < 0) || (st.back() < 0 && a > 0)) 
                {
                    st.push_back(a);
                }
                else
                {
                    while(!st.empty() && st.back() > 0)
                    {
                        if(st.back() > -a)
                        {
                            break;
                        }
                        else if(st.back() == -a)
                        {
                            st.pop_back();
                            break;
                        }
                        else
                        {
                            st.pop_back();
                            if(st.empty() || st.back() < 0)
                            {
                                st.push_back(a);
                            }
                        }
                    }
                }
            }
        }
        return st;
    }
};

