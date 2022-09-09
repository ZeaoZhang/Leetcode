#include"./includes/1598.hpp"


int main()
{
    vector<string> logs = {"d1/","d2/","../","d21/","./"};
    Solution obj;
    if(obj.minOperations(logs) == 2)
    {
        return 1;
    }
    return 0;
}
