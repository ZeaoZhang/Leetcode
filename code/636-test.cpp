#include"./includes/636.hpp"

int main()
{
    vector<string> logs = {"0:start:0", "1:start:2", "1:end:5", "0:end:6"};
    Solution obj;
    vector<int> result = obj.exclusiveTime(2, logs);
    vector<int> answer = {3, 4};
    if(result == answer)
    {
        return 1;
    }
    return 0;
}

