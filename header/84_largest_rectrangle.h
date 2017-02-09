#include<header/base.h>


#define INT_MAX (1 << 16)- 1
class LargestRectrangle{
    public:
        int Largest(vector<int> hist){
            int min_idx = 0, left = 0;
            int min_len = INT_MAX;
            int sum = 0, ret = 0;
            int size = hist.size();
            for(int i = 0; i < size; ++i){
                if(hist[i] < min_len){
                    min_len = hist[i];
                    min_idx = i;
                }
                sum = (i - left + 1) * min_len;
                if(sum < ret){
                    left = min_idx + 1;
                    min_len = hist[left]; 
                } else {
                    ret = std::max(ret, sum);
                }
            }
            return ret;
        }
};
