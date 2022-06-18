#include"./includes/029.hpp"

int main()
{
    Node *s1 = new Node(3);
    Node *s2 = new Node(4);
    Node *s3 = new Node(1);
    s1->next = s2; 
    s2->next = s3; 
    s3->next = s1;
    //head = [3, 4, 1]
    Solution solution;
    Node * head = solution.insert(s1, 2);
    //head = [3, 4, 1, 2]
    if(head->next->next->next->val == 2)
    {
        return 1;
    }
    return 0;
}

