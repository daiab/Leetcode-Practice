#include<header/base.h>

class ClimbingStairs{
    public:
        void Climb(int& cnt, int len){
            if(len == 1){
                cnt += 1;
                return;
            } else if(len == 2){
                cnt += 2;
                return;
            } else if(len == 0){
                return;
            }

            Climb(++cnt, len-1);
            Climb(++cnt, len-2);
        }

        int ClimbMain(int len){
            int cnt = 0;
            Climb(cnt, len);
            return cnt;
        }
};
