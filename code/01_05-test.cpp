#include"./includes/01_05.hpp"

int main()
{

    string a = "abc";
    string b = "abec";
    string c = "a";
    Solution solution;
    if(solution.oneEditAway(a, b) == true && solution.oneEditAway(a, c) == false)
    {
        return 1;
    }
    return 0;
}