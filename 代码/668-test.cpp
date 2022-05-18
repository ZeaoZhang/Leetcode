#include"668.hpp"

int main()
{
    int m = 3, n = 3, k = 5;
    //1	 2	3
    //2	 4	6
    //3  6	9
    //第5小的数字是 3 (1, 2, 2, 3, 3).
    Solution solution;
    cout << solution.findKthNumber(m, n, k) << endl; //输出3


    return 0;
}