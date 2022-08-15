#include"./includes/641.hpp"

int main()
{
    MyCircularDeque obj(2);
    obj.insertFront(3);
    obj.insertLast(6);
    if(obj.getFront() != 3 || obj.getRear() != 6 || !obj.isFull())
    {
        return 0;
    }
    obj.deleteFront();
    obj.deleteLast();
    if(!obj.isEmpty())
    {
        return 0;
    }
    return 1;
}

