#include<header/base.h>

class LongestPalSubString{
    public:
        string Find(string str){
            string rst = "";
            string tmp_str;
            int tmp = 1;
            int size = str.size();
            for(int i = 0; i < size ; ++i){
                tmp_str += str[i];
                while((i - tmp) > 0 && (i + tmp) < size && str[i - tmp] == str[i + tmp]){
                    ++tmp;
                    tmp_str = str[i - tmp] + tmp_str;
                    tmp_str += str[i+tmp];
                }
                if(tmp_str.size() > rst.size()) rst = tmp_str;
            }
            return rst;
        }
};
