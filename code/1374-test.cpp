#include"./includes/1374.hpp"
#include<map>


int main()
{
    Solution Solution;
    string result = Solution.generateTheString(8);
    map<char, int> mp;
    for(char c : result)
    {
        ++mp[c];
    }
    for(auto it : mp)
    {
        if(it.second % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

