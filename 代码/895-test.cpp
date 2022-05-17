#include"895.hpp"

int main()
{   
    FreqStack freqStack;
    freqStack.push(5);         // 5
    freqStack.push(7);         // 5, 7
    freqStack.push(5);         // 5, 7, 5
    freqStack.push(7);         // 5, 7, 5, 7
    freqStack.push(4);         // 5, 7, 5, 7, 4
    freqStack.push(5);         // 5, 7, 5, 7, 4, 5
    for (int i = 0; i < 4; ++i)
    {
        cout << freqStack.pop() << endl;       //ÒÀ´Îµ¯³ö5,7,5,4
    }
    

    return 0;
}
