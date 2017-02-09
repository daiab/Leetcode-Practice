#include<header/base.h>

class AddBinary{
    public:
        string Add(string a, string b){
            int tmp = 0;
            int sum = 0;
            string ret = "";
            int sz_a = a.size();
            int sz_b = b.size();
            int size = std::max(sz_a, sz_b);
            for (int i = 0; i < size; ++i) { 
                sum = tmp;
                if(i < sz_a) sum += (a[sz_a - 1 -i] - '0');
                if(i < sz_b) sum += (b[sz_b - 1 -i] - '0');
                tmp = sum >> 1;
                ret = char(sum & 0x1 ? '1' : '0') + ret;
            } 
            return ret;
        }
};
