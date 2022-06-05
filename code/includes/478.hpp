#include<iostream>
#include<random>
#include<vector>
using namespace std;

class Solution {
public:
    Solution(double radius, double x_center, double y_center) {
        this->r = radius;
        this->x = x_center;
        this->y = y_center;
    }
    
    vector<double> randPoint() {
        double rand_x, rand_y;
        do{
            rand_x = (double)rand() / (double)RAND_MAX * 2 - 1;
            rand_y = (double)rand() / (double)RAND_MAX * 2 - 1;
        }while((rand_x * rand_x + rand_y * rand_y) > 1);
        double offset_x = rand_x * r;
        double offset_y = rand_y * r;
        vector<double> v = {x + offset_x, y + offset_y};
        return v;
    }

private:
    double r;
    double x;
    double y;
};

