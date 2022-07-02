#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int count = 0;
        if(target <= startFuel)
        {
            return 0;
        }
        int fuel = startFuel;
        int k = 0;
        vector<int> memory;
        int n = stations.size();
        while(fuel < target && k <= stations.size())
        {
            int goal = (k == n ? target : stations[k][0]);
            if(fuel < goal)
            {
                if(memory.empty())
                {
                    return -1;
                }
                else
                {
                    fuel += memory[0];
                    memory.erase(memory.begin());
                    ++count;
                }
            }
            else
            {
                auto it = memory.begin();
                while(it != memory.end() && *it > stations[k][1])
                {
                    ++it;
                }
                memory.insert(it, 1, stations[k][1]);
                ++k;
            }
        }
        return count;

    }
};

