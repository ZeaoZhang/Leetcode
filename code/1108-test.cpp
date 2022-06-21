#include"./includes/1108.hpp"

int main()
{
    string address = "1.1.1.1";
    Solution solution;
    if(solution.defangIPaddr(address) == "1[.]1[.]1[.]1")
    {
        return 1;
    }
    return 0;
}


