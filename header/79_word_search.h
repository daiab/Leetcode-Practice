#include<header/base.h>

class WordSearch{
    private:
        int row, col;
    public:
        WordSearch(int r, int c):row(r), col(c){};
        bool isExist(vector<vector<char> > &rst, string &str, int idx, int i, int j){
            if(idx == (str.size() - 1)) return true;
            if(i == row || j == col || j < 0 || i < 0) return false;
            if(str[idx] != rst[i][j]) return false;
            ++idx;
            if(isExist(rst, str, idx, i + 1, j) ||
                    isExist(rst, str, idx, i-1, j) ||
                    isExist(rst, str, idx, i, j+1) ||
                    isExist(rst, str, idx, i, j-1)){
                        return true;
                    }
            return false;
        }

        bool SearchMain(vector<vector<char> > grid, string str){
            return isExist(grid, str, 0, 0, 0);
        }
};
