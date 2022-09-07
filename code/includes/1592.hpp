#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    string reorderSpaces(string text) {
        int spaces = 0;
        int words = 0;
        int i = 0;
        while(i < text.size())
        {
            if(text[i] == ' ')
            {
                ++spaces;
                ++i;
            }
            else
            {
                ++words;
                while(i < text.size() && text[i] != ' ')
                {
                    ++i;
                }
            }
        }
        if(spaces == 0)
        {
            return text;
        }
        int space;
        int other;
        if(words == 1)
        {
            space = 0;
            other = spaces;
        }
        else
        {
            space = spaces / (words - 1);
            other = spaces - (words - 1) * space;

        }
        string res = "";
        i = 0;
        while(text[i] == ' ')
        {
            ++i;
        }
        while(i < text.size())
        {
            if(text[i] != ' ')
            {
                res += text[i];
                ++i;
            }
            else
            {  
                while(i < text.size() && text[i] == ' ')
                {
                    ++i;
                }
                if(i >= text.size())
                {
                    break;
                }
                res += string(space, ' ');
            }
        }
        res += string(other, ' ');
        return res;
    }
};
