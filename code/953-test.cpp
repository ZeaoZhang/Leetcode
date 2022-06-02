#include"./includes/953.hpp"

int main()
{
    vector<string> words;
    words.push_back("hello");
    words.push_back("leetcode");
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    Solution solution;
    if(solution.isAlienSorted(words, order) == 1)
    {
        return 1;
    }
    return 0;
}