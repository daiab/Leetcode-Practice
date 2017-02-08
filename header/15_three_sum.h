#include<header/base.h>

class ThreeSum{
    public:
        vector<vector<int> > Find(vector<int> num){
            vector<vector<int> > rst;
            int size = num.size();
            if(size < 3) return rst; 
            std::sort(num.begin(), num.end());
            if(num[0] > 0 || num[size -1 ] < 0) return rst;

            int l, r, val;
            vector<int> tmp;
            for(int i = 0; i < size; ++i){
                l = i - 1;
                r = i + 1;
                val = num[i];
                while(l >= 0 && r < size){
                    int sum = val + num[l] + num[r];
                    if(sum == 0){
                        tmp[0] = l;
                        tmp[1] = i;
                        tmp[2] = r;
                        rst.push_back(tmp);
                    } else if(sum < 0){
                        ++r;
                    } else --l;
                }
            }
            return rst;
        }
};
