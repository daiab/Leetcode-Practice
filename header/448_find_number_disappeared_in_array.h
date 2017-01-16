#include<header/base.h>

class FindNumber{
    public:
        void solution(vector<int> vec){
            int size = vec.size() + 1;
            for(int num :vec){
                vec[num % size - 1] += size;
            } 
            vector<int> disp;
            for(int i = vec.size() - 1; i >= 0; --i){
                if(vec[i] < size){
                    disp.push_back(i+1);
                }
            } 
            for(int num :disp){
                cout << num << " ";
            }
            cout << endl;
        }
};

void test_448(){
    FindNumber fn;
    vector<int> vec = {1, 2, 3, 3, 5, 5, 7, 8};
    fn.solution(vec);
} 
