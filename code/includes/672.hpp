#include<iostream>
using namespace std;


class Solution {
public:
    int flipLights(int n, int presses) {
        if(presses==0)return 1;
        else if(n==1)return 2;
        else if(n==2)return (presses==1)?3:4;
        return (presses>2)?8:(presses==1)?4:7;
    }
};
