#include"./includes/1455.hpp"


int main()
{
    string sentence = "i love eating burger";
    string searchWord = "burg";
    Solution obj;
    if(obj.isPrefixOfWord(sentence, searchWord) == 4)
    {
        return 1;
    }
    return 0;
}
