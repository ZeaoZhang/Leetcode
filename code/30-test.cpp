#include"./includes/30.hpp"

int main()
{
    string s = "barfoothefoobarman";
    vector<string> words = {"foo","bar"};
    Solution solution;
    vector<int> result = {0, 9};
    if(solution.findSubstring(s, words) == result)
    {
        return 1;
    }
    return 0;
}

