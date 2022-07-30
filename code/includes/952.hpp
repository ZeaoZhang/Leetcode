#include<iostream>
#include<vector>
using namespace std;

const int N = 100001;
class Solution {
    int father[N], cnt[N];
    int find(int x){
        if(father[x] != x) father[x] = find(father[x]);
        return father[x];
    }

    void merge(int x, int y){
        int px = find(x), py = find(y);
        if(px != py) father[px] = py;
    }
public:
    int largestComponentSize(vector<int>& nums) {
        for(int i = 0; i < N; ++ i) father[i] = i;
        for(auto num : nums){
            for(int i = 2; i <= num / i; ++ i){
                if(num % i == 0){
                    merge(num, i);
                    if(i != num / i) 
                    {
                        merge(num, num / i);
                    }
                }
            }
        }
        int ans = 1;
        for(auto num : nums){
            cnt[find(num)] ++;
            ans = max(ans, cnt[find(num)]);
        }
        return ans;
    }
};

