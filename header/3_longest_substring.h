#include<header/base.h>

class LongestSubstring{
    int FindLongest(string str){
        vector<int> vec(256, 0);
        int idx = 0;
        int max_len = 0;
        for(int i = 0; i < str.size(); ++i){
            auto c = str[i];
            int pos = vec[c];
            if(pos > idx){
                ++idx;
                max_len = std::max(max_len, i - pos - 1);
            } else max_len = std::max(max_len , i - idx);
            vec[c] = i;
       }
        return max_len;
    }
};
