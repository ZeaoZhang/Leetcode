#include"./includes/745.hpp"

int main()
{
    vector<string> words = {"apple"};
    WordFilter WordFilter(words);
    if(WordFilter.f("a", "e") == 0)
    {
        cout << "OK" <<endl;
        return 1;
    }
    return 0;
}

