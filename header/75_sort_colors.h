#include<header/base.h>

class SortColors{
    public:
        void Sort(vector<int> &vec){
            int l = 0, r = vec.size() - 1;
            int tmp_val; 
            for(int i = 0; i < vec.size() && l < r; ++i){
                if(vec[i] == 0){
                    tmp_val = vec[l];
                    vec[l] = vec[i];
                    ++l;
                    if(tmp_val == 2){
                        vec[i] = vec[r];
                        vec[r] = tmp_val;  
                        ++r;
                    } else {
                        vec[i] = tmp_val; 
                    }
                } else if(vec[i] == 2){
                    tmp_val = vec[r];
                    vec[r] = vec[i];
                    ++r;
                    if(tmp_val == 0){
                        vec[i] = vec[l];
                        vec[l] = tmp_val;
                        ++l;
                    } else {
                        vec[i] = tmp_val;
                    }
                }
            }
        }
};
