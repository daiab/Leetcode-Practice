#include<header/base.h>

class validUtf8{
    public:
        bool valid(vector<int> data){
            int count = 0;
            for(auto d: data){
                if(!count){
                    if((d & 0x80) == 0) count = 0;
                    if((d & 0xe0) == 0xc0) count = 1;
                    if((d & 0xf0) == 0xe0) count = 2;
                    if((d & 0xf8) == 0xf0) count = 3;
                } else {
                    if((d & 0xc0) != 0x80) return false;
                    count--;
                }
            }
            return !count;
        }
};


