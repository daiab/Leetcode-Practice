#include<header/base.h>

class Pow{
    public:
        static long PowXN(int x, int n){
            if(n == 1) return x;
            int idx = 1;
            long tmp = x;
            while(idx * 2 <= n){
                tmp = tmp * tmp;
                idx *= 2;
            }
            if(n - idx != 0){
                tmp = tmp * PowXN(x, n-idx);
            }
            return tmp;
        }
};

void test_pow_xn(){
    cout << "2 ^ 8 == " << Pow::PowXN(2, 8) << endl;
}
