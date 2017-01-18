#include<header/base.h>

class ForgJump{
    vector<int> stones;
    int size;
    map<string, bool> memory;
    string GenKey(int& a, int& b){
        return string(1, a) + "-" + string(1, b);
    }
    public:
        ForgJump(vector<int> s):stones(s), size(s.size()){};
        bool Jump(int cur, int pre){
            if(cur == size - 1){
                return true;
            } 
            string key = GenKey(cur, pre);
            if(memory.count(key)) return memory[key];

            int range = stones[cur] - stones[pre];
            for (int i = range - 1; i <= range + 1; i++) { 
                //for the first step is 1, then maybe the next step to be 0;
                if(i == 0) continue;
                int next_stone = stones[cur] + i;
                int tmp = cur;
                while(next_stone >= stones[++tmp] && tmp < size){
                    if(next_stone == stones[tmp]){
                        pre = cur;
                        cur = tmp;
                        if(Jump(cur, pre)) {
                            return true;
                        } 
                    }
                }
            } 
            return memory[key] = false;
        }
};


void test_forg_jump(){
    vector<int> stones = {0,1,3,5,6,8,12,17};
    ForgJump fj(stones);
    cout << "could jump cross the river? " << fj.Jump(1, 0) << endl;
}
