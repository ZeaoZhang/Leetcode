#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class WordFilter {
public:
    WordFilter(vector<string>& words) {
        for(int m = 0; m < words.size(); ++m){
            int n = words[m].size();
            for(int i = 0; i < n; ++i){
                for(int j = n - 1; j >= 0; --j){
                    string pre = words[m].substr(0,i + 1);
                    string suf = words[m].substr(j);
                    mp[pre + "+" + suf] = m; 
                }
            }
        }
    }
    
    int f(string pref, string suff) {   
        if(mp.find(pref + "+" + suff) != mp.end()) return mp[pref + "+" + suff];
        return -1;
    }
    
private:
    unordered_map<string,int> mp;
};

