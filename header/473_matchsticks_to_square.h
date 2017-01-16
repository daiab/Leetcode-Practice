#include<header/base.h>

class MatchSticks{
    private:
        int edge_len;
        vector<int> sticks;
        bool Make(vector<int>& edge, int idx){
            if (idx == (int)sticks.size()) { 
                if(edge[0] == edge_len && edge[1] == edge_len && edge[2] == edge_len){
                    return true;
                } else return false;
            } 
            
            for(int i = 0; i < 4; ++i){
                if (edge[i] + sticks[idx] <= edge_len) { 
                    edge[i] += sticks[idx]; 
                    if(Make(edge, idx + 1)) return true;
                    edge[i] -= sticks[idx]; 
                } 
            }
            return false;
        } 
        
    public:
        MatchSticks(vector<int> s):sticks(s){};

        void Reset(vector<int> s){
            sticks = s;
        }

        bool solution(){
            int sum = std::accumulate(sticks.begin(), sticks.end(), 0); 
            if (sticks.size() < 4 || sum % 4) { 
                return false;
            } 
            edge_len = sum / 4;
            cout << "the edge length == " << edge_len << endl;
            vector<int> edge(4, 0); 
            return Make(edge, 0);
            
            
        } 
        

};

void test_match_sticks(){
    vector<int> sticks = {1, 1, 2, 2, 2, 1, 3};
    MatchSticks ms(sticks);
    cout << "could make square? " << ms.solution() << endl;
}
