#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int len(vector<int> &v)
    {
        return v[0] * v[0] + v[1] * v[1];
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> p12 = {p2[0] - p1[0], p2[1] - p1[1]};
        vector<int> p13 = {p3[0] - p1[0], p3[1] - p1[1]};
        vector<int> p14 = {p4[0] - p1[0], p4[1] - p1[1]};
        vector<int> p23 = {p3[0] - p2[0], p3[1] - p2[1]};
        vector<int> p24 = {p4[0] - p2[0], p4[1] - p2[1]};
        vector<int> p34 = {p4[0] - p3[0], p4[1] - p3[1]};
        if(len(p12) != 0 && len(p12) == len(p13) && len(p13) == len(p24) && len(p24) == len(p34))
        {
            if(p12[0] * p13[0] + p12[1] * p13[1] == 0)
            {
                return true;
            }
        }
        else if(len(p12) != 0 && len(p12) == len(p14) && len(p14) == len(p23) && len(p23) == len(p34))
        {
            if(p12[0] * p14[0] + p12[1] * p14[1] == 0)
            {
                return true;
            }
        }
        else if(len(p13) != 0 && len(p13) == len(p14) && len(p13) == len(p23) && len(p23) == len(p24))
        {
            if(p13[0] * p14[0] + p13[1] * p14[1] == 0)
            {
                return true;
            }
        }
        return false;
    }
};

