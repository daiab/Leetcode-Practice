#include<header/base.h>

class TwoSum{
    public:
        vector<int> FindPos(vector<int>& vec, int target){
            unordered_map<int, int> map;
            vector<int> idx = {0,0};
            for(int i = 0; i < vec.size(); ++i){
                auto it = map.find(target - vec[i]);                
                if(it != map.end()){
                    idx.push_back(std::max(i, it->second));
                    idx.push_back(std::min(i, it->second));
                    return idx;
                }
                else map[vec[i]] = i;
            }
            return idx;
        }
};
