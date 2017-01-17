#include<header/base.h>

class AssignCookie{
        static bool smaller(int& a, int& b) {return a < b;}
        int c_size_;

    public:
        int a = 0;
        int Assign(vector<int> children, vector<int> cookie){
            c_size_ = cookie.size();
            std::sort(children.begin(), children.end(), smaller);
            std::sort(cookie.begin(), cookie.end(), smaller);
            int idx = 0;
            for (int c : cookie) { 
                if(c >= children[idx]){
                    idx++;
                    if(idx == c_size_) break;
                } 
            } 
            return idx;
        }
};


void test_assign_cookie(){
    vector<int> c = {2, 3, 2, 1};
    vector<int> cookie = {1, 2, 2};
    AssignCookie ac;
    cout << "num == " << ac.Assign(c, cookie) << endl;
}
