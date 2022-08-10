#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string solveEquation(string equation) 
    {
        equation += ' ';
        char pre = '+';
        int t = 0;
        int sum = 0;
        int cnt = 0;
        bool flag = true;
        bool havenum = false;
        for (char c : equation) 
        {
            if (c >= '0' && c <= '9') 
            {
                t *= 10;
                t += c - '0';
                havenum = true;
                continue;
            }
            if (c == 'x') 
            {
                if (pre == '+') 
                {
                    if (havenum) 
                    {
                        cnt += t;
                    } else 
                    {
                        ++cnt;
                    }
                } else 
                {
                    if (havenum) 
                    {
                        cnt -= t;
                    } else 
                    {
                        --cnt;
                    }
                }
            } else 
            {
                if (pre == '+') 
                {
                    sum -= t;
                } else 
                {
                    sum += t;
                }
            }
            t = 0;
            havenum = false;
            if (c == '=') 
            {
                flag = false;
                pre = '-';
            }else if (c == '+') 
            {
                pre = flag ? '+' : '-';
            } else if (c == '-') 
            {
                pre = flag ? '-' : '+';
            }
        }
        if (cnt == 0) 
        {
            return sum == 0 ? "Infinite solutions" : "No solution";
        } else 
        {
            return "x="+to_string(sum/cnt);
        }
    }
};

