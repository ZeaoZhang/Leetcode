#include"./includes/1592.hpp"


int main()
{
    string text = "  this   is  a sentence ";
    string res = "this   is   a   sentence";
    Solution obj;
    if(obj.reorderSpaces(text) == res)
    {
        return 1;
    }
    return 0;
}
