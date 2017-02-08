#include<header/base.h>

class Container{
    public:
        int Max(vector<int>& height){
            int size = height.size();
            int left = 0, right = size - 1;
            int max = 0;
            while(left < right){
                max = std::max(max, (right - left) * std::min(height[left], height[right]));
                if(height[left] < height[right]) left++;
                else ++right;
            }
            return max;
        }
};
