#include<iostream>
#include<vector>
#include<string>
using namespace std;

class OrderedStream {
public:
    OrderedStream(int n) {
         stream.resize(n);
         fill(stream.begin(), stream.end(), "");
         ptr = 0;
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> result;
        if(stream[idKey - 1] == "")
        {
            stream[idKey - 1] = value;
        }
        
        while(stream[ptr] != "" && ptr < stream.size())
        {
            result.push_back(stream[ptr]);
            ++ptr;
        }
        return result;
    }

private:
    vector<string> stream;
    int ptr;
};

