#include<header/base.h>

class GenParentheses{
        void Gen(vector<string>& rst, string str, int l_cnt, int r_cnt, int &n){
            if((l_cnt + r_cnt) == 2 * n){
                rst.push_back(str);
                return;
            }

            if(l_cnt < n) Gen(rst, str+"(", l_cnt + 1, r_cnt, n);
            if(r_cnt < n) Gen(rst, str+")", l_cnt, r_cnt + 1, n);
        }

    public:
        vector<string> GenMain(int n){
            vector<string> rst;
            Gen(rst, "", 0, 0, n);
            return rst;
        }
        
};
