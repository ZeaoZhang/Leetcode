#include"464.hpp"


int main()
{
    int maxChoosableInteger = 10, desiredTotal = 11;
    Solution solution;
    //无论第一个玩家选择哪个整数，他都会失败。
    //第一个玩家可以选择从 1 到 10 的整数。
    //如果第一个玩家选择 1，那么第二个玩家只能选择从 2 到 10 的整数。
    //第二个玩家可以通过选择整数 10（那么累积和为 11 >= desiredTotal），从而取得胜利.
    //同样地，第一个玩家选择任意其他整数，第二个玩家都会赢。
    //输出0
    cout << solution.canIWin(maxChoosableInteger, desiredTotal) << endl;     
    return 0;
}