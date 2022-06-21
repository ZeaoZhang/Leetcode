#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    string defangIPaddr(string address) {
        int len = address.size();
        string s = "";
        for(int i = 0; i < len; ++i)
        {
            if(address[i] == '.')
            {
                s += "[.]";
            }
            else
            {
                s += address[i];
            }
        }
        return s;
    }
};

