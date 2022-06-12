#include"./includes/890.hpp"

int main()
{
    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    Solution solution;
    vector<string> answer = {"mee", "aqq"};
    vector<string> result = solution.findAndReplacePattern(words, pattern);
    if(result.size() != 2)
    {
        return 0;
    }
    for(int i = 0; i < 2; ++i)
    {
        if(answer[i] != result[i])
        {
            return 0;
        }
    }
    return 1;

}

