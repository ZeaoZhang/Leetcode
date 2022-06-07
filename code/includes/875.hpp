#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int right = 0;
        for(int i : piles)
        {
            if(i > right)
            {
                right = i;
            }
        }
        int left = 1;
        while(left<right){
            int mid = left+(right-left)/2;
            int time = 0;
            for(int pile : piles) 
            {
                time += (pile-1)/mid+1;        
            }
            if(time<=h) 
            {
                right = mid;
            }
            else 
            {
                left = mid+1;
            }
        }
        return left;
    }
};
