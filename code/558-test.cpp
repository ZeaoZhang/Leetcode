#include"./includes/558.hpp"

int main()
{
    Node *quadTree1 = new Node(0, 1);
    Node *quadTree2 = new Node(0, 1);
    Solution Solution;
    Node *result = Solution.intersect(quadTree1, quadTree2);
    if(result->val == false && result->isLeaf == true)
    {
        return 1;
    }
    return 0;
}

