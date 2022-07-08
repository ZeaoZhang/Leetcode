#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd_num = 0, even_num = 0;
        for(int i : position)
        {
            if(i % 2 == 0)
            {
                ++even_num;
            }
            else
            {
                ++odd_num;
            }
        }
        return odd_num > even_num ? even_num : odd_num;
    }
};

