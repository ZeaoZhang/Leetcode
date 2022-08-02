#include<iostream>
#include<vector>
using namespace std;

class MyCircularQueue {
private:
    vector<int> q;
    int front;
    int back;
    int n;
    int flag;
public:
    MyCircularQueue(int k) {
        q.resize(k);
        front = k - 1;
        back = k - 1;
        n = k;
        flag = false;
    }
    
    bool enQueue(int value) {
        if(isFull())
        {
            return false;
        }
        back = (back + 1) % n;
        q[back] = value;
        if(front == back)
        {
            flag = true;
        }
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
        {
            return false;
        }
        front = (front + 1) % n;
        if(flag == true)
        {
            flag = false;
        }
        return true;

    }
    
    int Front() {
        if(isEmpty())
        {
            return -1;
        }
        return q[(front + 1) % n];
    }
    
    int Rear() {
        if(isEmpty())
        {
            return -1;
        }
        return q[back];
    }
    
    bool isEmpty() {
        if(front == back && flag == false)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(flag == true)
        {
            return true;
        }
        return false;
    }
};


