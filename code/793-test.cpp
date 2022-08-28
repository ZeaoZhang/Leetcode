#include"./includes/793.hpp"

int main()
{
    int k[] = {0, 5, 3};
    int answer[] = {5, 0, 5};
    Solution obj;
    for(int i = 0;i < 3; ++i)
    {
        if(obj.preimageSizeFZF(k[i]) != answer[i])
        {
            return 0;
        }
    }
    return 1;
}
