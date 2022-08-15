#include<iostream>
#include<vector>
using namespace std;

class MyCircularDeque {
private:
    vector<int> q;
    int front, rear;
    bool tag;
    int len;
public:
    MyCircularDeque(int k) {
        len = k;
        q.resize(k);
        tag = false;
        front = 0;
        rear = 0;
    }
    
    bool insertFront(int value) {
        if(!isFull())
        { 
            front = (front - 1 + len) % len;  
            q[front] = value;
            if(rear == front)
            {
                tag = true;
            } 
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(!isFull())
        {   
            q[rear] = value;
            rear = (rear + 1) % len;  
            if(rear == front)
            {
                tag = true;
            } 
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(!isEmpty())
        {   
            front = (front + 1) % len;  
            tag = false;
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(!isEmpty())
        {   
            rear = (rear - 1 + len) % len;  
            tag = false;
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(isEmpty())
        {
            return -1;
        }
        return q[front];
    }
    
    int getRear() {
        if(isEmpty())
        {
            return -1;
        }
        return q[(rear + len - 1) % len];
    }
    
    bool isEmpty() {
        if(front == rear && tag == false)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(front == rear && tag == true)
        {
            return true;
        }
        return false;
    }
};

