#include<header/base.h>

class ZigZag{
    public:
        string Convert(string str, int rows){
            if(rows < 2) return str;
            vector<string> vec(rows, "");
            int size = str.size();
            int row = 0;
            int tmp = -1;
            for (int i = 0; i < size; ++i) { 
                vec[row] += str[i];
                if((i+1) % (rows + 2) == 0 || (i % (2*i - 2) == 0) == 0) tmp *= -1;
                row += tmp;
            } 
            string rst = "";
            for(string s: vec){
                rst += s;
            }
            return rst;
        }
};
