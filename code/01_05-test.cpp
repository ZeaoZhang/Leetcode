#include"01_05.hpp"

int main()
{

    string a = "abc";
    string b = "abec";
    string c = "a";
    Solution solution;
    cout << solution.oneEditAway(a, b) << endl;     //一次插入即可，返回True
    cout << solution.oneEditAway(a, c) << endl;     //一次操作不行，返回False

    return 0;
}