#include"./includes/668.hpp"

int main()
{
    int m = 3, n = 3, k = 5;
    //1	 2	3
    //2	 4	6
    //3  6	9
    Solution solution;
    if(solution.findKthNumber(m, n, k) == 3)
    {
        return 1;
    }


    return 0;
}