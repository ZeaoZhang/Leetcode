#include<iostream>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        Node *p = new Node(insertVal);
        if(head == NULL)
        {
            p->next = p;
            return p;
        }
        Node *q = head;
        while(q->next != head && q->next->val >= q->val)
        {
            q = q->next;
        }
        Node *s = q->next;
        if(s->val >= insertVal)
        {
            q->next = p;
            p->next = s;
        }
        else
        {
            while(s != q && s->next->val <= insertVal)
            {
                s = s->next;
            }
            p->next = s->next;
            s->next = p;
        }
        return head;       
    }
};

