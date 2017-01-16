#include<header/base.h>

class LicenseFormat{
    public:
        string Format(string license, int k){
            string result("");
            int count = 0;
            for(int idx = license.size() - 1; idx >= 0 ; --idx){
                char c = license[idx];
                if(c == '-') continue;
                if(count++ == k){
                    result += '-';
                    count = 0;
                }else if(c >= 'a' && c <= 'z'){
                    result += c - 0x20;
                }else{
                    result += c;
                }
            } 
            std::reverse(result.begin(), result.end());
            return result;
        } 
};


void test_license_format(){
    LicenseFormat lf;
    string str("sd-aaa-ddd-cccC-Yyy-dd");
    cout << "format code == " << lf.Format(str, 3) << endl;
}
