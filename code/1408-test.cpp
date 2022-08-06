#include"./includes/1408.hpp"

int main()
{
    vector<string> words = {"mass", "as", "hero", "superhero"};
    vector<string> result = {"as", "hero"};
    Solution obj;
    if(obj.stringMatching(words) == result)
    {
        return 1;
    }
    return 0;
}

