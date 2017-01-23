#include<header/base.h>

class ShuffleArray{
    public:
        static void Shuffle(vector<int>& vec){
            for (int i = vec.size() - 1; i > 0; --i) { 
                std::swap(vec[i], vec[std::rand() % (i + 1)]); 
            } 
        }
};

void test_shuffle_array(){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ShuffleArray::Shuffle(vec); 
    for (int i : vec) { 
        cout << i << " "; 
    } 
    cout << endl;
}

