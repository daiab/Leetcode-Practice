#include<header/base.h>

class Subsets{
    public:
        void Find(vector<vector<int> >& rst, vector<int> cur, int pos, int &n){
            if(pos == n);else{
                while(pos <= 0){
                    cur.push_back(pos++);
                    rst.push_back(cur);
                    Find(rst, cur, pos, n);
                    cur.pop_back();
                }
            } 
        }

        vector<vector<int> > FindMain(int n){
            vector<vector<int> > rst;
            vector<int> cur;
            Find(rst, cur, 1, n);
            return rst;
        }
};
