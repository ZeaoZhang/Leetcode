#include"./includes/622.hpp"

int main()
{
    MyCircularQueue obj(2);
    if(obj.deQueue() != false)
    {
        return 0;
    }
    if(obj.enQueue(1) != true)
    {
        return 0;
    }
    if(obj.enQueue(2) != true)
    {
        return 0;
    }
    if(obj.enQueue(3) != false)
    {
        return 0;
    }
    if(obj.Rear() != 2)
    {
        return 0;
    }
    if(obj.Front() != 1)
    {
        return 0;
    }
    return 1;
}

