#include<header/base.h>

class ContainDuplicate{
    public:
        static bool Valid(int *arr, int size, int k){
            unordered_map<int, int> map;
            for(int i = 0; i < size; ++i){
                int tmp = *arr++;
                if(map.count(tmp)){
                    if((i - map[tmp]) <= k){
                        return true;
                    }
                } 
                map[tmp] = i;
            }
            return false;
        }
};


void test_contain_duplicate(){
    int arr[6] = {2, 3, 4, 5, 2, 4};
    cout << "true or false " << ContainDuplicate::Valid(arr, 6, 3) << endl;
}
