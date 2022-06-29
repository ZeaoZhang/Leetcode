#include"./includes/535.hpp"

int main()
{
    string url = "https://leetcode.com/problems/design-tinyurl";
    Solution obj;
    string shorturl = obj.encode(url);
    if(obj.decode(shorturl) == url)
    {
        cout << " OK" <<endl;
        return 1;
    }
    return 0;
}

