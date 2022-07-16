#include<iostream>
#include<vector>
using namespace std;

class MovingAverage {
public:
    MovingAverage(int size) {
        v.clear();
        this->size = size;
    }
    
    double next(int val) {
        v.push_back(val);
        while(v.size() > size)
        {
            v.erase(v.begin());
        }
        double sum = 0;
        for(int &i : v)
        {
            sum += i;
        }
        return double(sum / v.size());
    }

private:
    vector<int> v;
    int size;
};

