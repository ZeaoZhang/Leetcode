#include"./includes/854.hpp"


int main()
{
    string s1 = "abc";
    string s2 = "bca";
    Solution obj;
    if(obj.kSimilarity(s1, s2) == 2)
    {
        return 1;
    }
    return 0;
}
