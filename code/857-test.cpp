#include"./includes/857.hpp"


int main()
{
    vector<int> quality = {10, 20, 5};
    vector<int> wage = {70, 50, 30};

    Solution obj;
    if(obj.mincostToHireWorkers(quality, wage, 2) == 105.0)
    {
        return 1;
    }   
    return 0;
}
