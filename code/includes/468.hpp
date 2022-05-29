#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int count(string IP)
    {
        int num4 = 0, num6 = 0;
        for (char s : IP)
        {
            if (s == '.')
            {
                ++num4;
            }
            else if (s == ':')
            {
                ++num6;
            }
        }
        if (num4 == 3 && num6 == 0)
        {
            return 3;
        }
        else if (num4 == 0 && num6 == 7)
        {
            return 7;
        }
        else
        {
            return -1;
        }
    }

    void split(string str, vector<string>& v, char spacer)
    {
        int pos1, pos2;
        int len = 1;     //记录分隔符的长度
        pos1 = 0;
        pos2 = str.find(spacer);
        while (pos2 != string::npos)
        {
            v.push_back(str.substr(pos1, pos2 - pos1));
            pos1 = pos2 + len;
            pos2 = str.find(spacer, pos1);    // 从str的pos1位置开始搜寻spacer
        }
        if (pos1 != str.length()) //分割最后一个部分
            v.push_back(str.substr(pos1));
    }



    bool judgeIPV4(string IP)
    {
        if (IP.size() < 7 || IP.size() > 15)
        {
            return false;
        }
        vector<string> v;
        split(IP, v, '.');
        if (v.size() != 4)
        {
            return false;
        }
        for (string s : v)
        {
            if (s.size() == 0 || s.size() > 3)
            {
                return false;
            }
            if (s[0] == '0' && s.size() > 1)
            {
                return false;
            }
            for (char i : s)
            {
                if (!(i >= '0' && i <= '9'))
                {
                    return false;
                }
            }
            int num = atoi(s.c_str());
            if (num > 255)
            {
                return false;
            }
        }
        return true;
    }

    bool judgeIPV6(string IP)
    {
        if (IP.size() < 15 || IP.size() > 39)
        {
            return false;
        }
        vector<string> v;
        split(IP, v, ':');
        if (v.size() != 8)
        {
            return false;
        }
        for (string s : v)
        {
            if (s.size() > 4 || s.size() == 0)
            {
                return false;
            }
            for (char i : s)
            {
                if (!((i >= '0' && i <= '9') || (i >= 'a' && i <= 'f') || (i >= 'A' && i <= 'F')))
                {
                    return false;
                }
            }
        }
        return true;
    }



    string validIPAddress(string queryIP) {
        int num = count(queryIP);
        if (num == 3)
        {
            if (judgeIPV4(queryIP))
            {
                return "IPv4";
            }
        }
        if (num == 7)
        {
            if (judgeIPV6(queryIP))
            {
                return "IPv6";
            }
        }
        return "Neither";

    }
};