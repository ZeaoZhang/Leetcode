#include"./includes/1282.hpp"

int main()
{
    vector<int> groupsSize = {3,3,3,3,3,1,3};
    Solution obj;
    vector<vector<int>> result = obj.groupThePeople(groupsSize);
    for(auto &v : result)
    {
        for(int &i : v)
        {
            if(groupsSize[i] != v.size())
            {
                return 0;
            }
        }
    }
    return 1;
}

