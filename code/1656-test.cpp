#include"./includes/1656.hpp"

int main()
{
    OrderedStream obj(5);
    obj.insert(3, "ccccc");
    obj.insert(1, "aaaaa");
    obj.insert(2, "bbbbb");
    obj.insert(5, "eeeee");
    vector<string> result = obj.insert(4, "ddddd");
    vector<string> answer = {"ddddd", "eeeee"};
    if(result == answer)
    {
        return 1;
    }
    return 0; 
}

