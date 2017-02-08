#include<header/base.h>

class Letter{
        void Combinate(vector<string>& rst, string str, string &num, int idx){
            vector<string> tmp(4, "");
            int cnt = 0;
            if(idx == num.size()){
                rst.push_back(str);
                return;
            }
            switch(num[idx]){
                case '2':{
                    cnt = 3;
                    tmp[0] = 'a';
                    tmp[1] = 'b';
                    tmp[2] = 'c';
                    break;
                }
                case '3':{
                    cnt = 3;
                    tmp[0] = 'd';
                    tmp[1] = 'e';
                    tmp[2] = 'f';
                    break;
                }
            }
            for (int i = 0; i < cnt; ++i) { 
                Combinate(rst, str+tmp[i], num, idx+1); 
            } 
            return;
        }
    public:
        vector<string> LetterMain(string num){
            vector<string> rst;
            Combinate(rst, "", num, 0);
            return rst; 
        }
};
