#include<header/base.h>

class IslandsNumber{
    private:
        vector<vector<int> > grid;
        void Check(int i, int j){
            if(i == (int)grid.size() || j == (int)grid[0].size() 
                    || i < 0 || j < 0 || grid[i][j] == 0) return;
            grid[i][j] = 0;
            Check(i-1, j);
            Check(i+1, j);
            Check(i, j-1);
            Check(i, j+1);
        }
    public:
        int FindIslands(vector<vector<int> > g){
            grid = g;
            int num = 0;
            int row = (int)g.size();
            int col = (int)g[0].size();
            for(int i = 0; i < row; ++i){
                for (int j = 0; j < col; ++j) { 
                    if(grid[i][j] == 1){
                        ++num; 
                        Check(i, j);
                    }
                } 
            }
            return num;
        }
};


void test_number_islands(){
    vector<vector<int> > grid = {{1,1,0,0,0},{1,1,0,0,0},{0,0,1,0,0},{0,0,0,1,1}};
    IslandsNumber in;
    cout << "the number of islands == " << in.FindIslands(grid) << endl;
}
