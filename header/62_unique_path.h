#include<header/base.h>

class UniquePath{
    public:
        static int Find(int m, int n){
            if(m == 0 && n == 0) return 0;
            vector<vector<int> > path_value(m, vector<int>(n, 0));
            for(int i = 0; i < m; ++i) path_value[i][n-1] = 1;
            for(int i = 0; i < n; ++i) path_value[m-1][i] = 1;
            for(int i = m - 2; i >=0 ; --i){
                for(int j = n-2; j >=0; --j){
                    path_value[i][j] = path_value[i+1][j] + path_value[i][j+1];
                }
            }
            return path_value[0][0];

        }
};

void test_unique_path(){
    cout << "total path == " << UniquePath::Find(4, 5) << endl;
}
