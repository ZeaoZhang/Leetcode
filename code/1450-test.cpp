#include"./includes/1450.hpp"


int main()
{
    vector<int> startTime = {1, 2, 3};
    vector<int> endTime = {3, 2, 7};
    Solution obj;
    if(obj.busyStudent(startTime, endTime, 4) == 1)
    {
        return 1;
    }
    return 0;
}
