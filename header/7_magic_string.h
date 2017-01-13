#include<header/base.h>
#include<algorithm>

class Solution{
    public:
        typedef string::size_type size;
        int MagicString(size n){
            string str("1");
            int idx(0);
            while(str.size() < n){
                str += string(str[idx++] - '0', str.back() ^ 3); 
            }
            cout << "magic number is :" << str << endl;
            return std::count(str.begin(), str.end(), '1');
        }
};

void test_magic_string(){
    Solution s;
    cout << "1`s count == " << s.MagicString(10) << endl;;
} 
