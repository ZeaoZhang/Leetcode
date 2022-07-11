#include"./includes/676.hpp"

int main()
{
    MagicDictionary MagicDictionary;
    vector<string> dic = {"hello", "leetcode"};
    MagicDictionary.buildDict(dic);
    if(MagicDictionary.search("hello") == false && MagicDictionary.search("leetcoda") == true)
    {
        return 1;
    }
    return 0;
}

