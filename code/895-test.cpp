#include"./includes/895.hpp"

int main()
{   
    FreqStack freqStack;
    freqStack.push(5);         // 5
    freqStack.push(7);         // 5, 7
    freqStack.push(5);         // 5, 7, 5
    freqStack.push(7);         // 5, 7, 5, 7
    freqStack.push(4);         // 5, 7, 5, 7, 4
    freqStack.push(5);         // 5, 7, 5, 7, 4, 5
    if(freqStack.pop() == 5 && freqStack.pop() == 7)
    {
        return 1;
    }
    

    return 0;
}
