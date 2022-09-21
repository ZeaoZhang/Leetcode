#include<iostream>
#include<vector>
using namespace std;


class Solution {
    int res = 100000000;
public:
    void dfs(string &s1, string &s2, int cur, int ans){
        int n = s1.size();
        if(cur == n){
            res = min(res, ans);
            return;
        }
        if(ans >= res){
            return;
        }
        if(s1[cur] != s2[cur]){
            for(int i = cur + 1; i < n; ++i){
                if(s2[i] == s1[cur] && s2[i] != s1[i]){
                    swap(s2[i], s2[cur]);
                    dfs(s1, s2, cur+1, ans + 1);
                    swap(s2[i], s2[cur]);
                }
            }
        }else{
            dfs(s1, s2, cur+1, ans);
        }
    }

    int kSimilarity(string s1, string s2) {
        dfs(s1, s2, 0, 0);
        return res;
    }
};
