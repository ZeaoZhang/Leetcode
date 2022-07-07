#include"./includes/648.hpp"

int main()
{
    Solution solution;
    vector<string> dictionary = {"cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";
    string result = "the cat was rat by the bat";
    if(solution.replaceWords(dictionary, sentence) == result)
    {
        return 1;
    }
    return 0;
}

