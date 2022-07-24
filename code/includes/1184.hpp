#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start == destination)
        {
            return 0;
        }
        int d1 = 0, d2 = 0;
        int s = min(start, destination), d = max(start, destination);
        int sum = 0;
        for(int &i : distance)
        {
            sum += i;
        }
        while(s < d)
        {
            d1 += distance[s++];
        }
        d2 = sum - d1;
        return min(d1, d2);
    }
};

