#include<iostream>
#include<vector>
#include<string>
using namespace std;

class MagicDictionary {
public:
    MagicDictionary() {
        dic.clear();
    }
    
    void buildDict(vector<string> dictionary) {
        dic.swap(dictionary);
    }
    
    bool search(string searchWord) {
        for(string it : dic)
        {
            int count = 0;
            int n = it.size();
            if(searchWord.size() != n || searchWord == it)
            {
                continue;
            }
            for(int i = 0;i < n; ++i)
            {
                if(searchWord[i] != it[i])
                {
                    ++count;
                    if(count > 1)
                    {
                        break;
                    }
                }
            }
            if(count == 1)
            {
                return true;
            }
        }
        return false;
    }
private:
    vector<string> dic;
};

