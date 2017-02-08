#include<header/base.h>

class AddTwo{
    public:
        vector<int> Add(vector<int>& num1, vector<int>& num2){
            vector<int> result;
            int size = std::max(num1.size(), num2.size());
            int tmp = 0;
            for (int i = 0; i < size; ++i) { 
                if(i < num1.size() && i < num2.size()){
                    int val = num1[i] + num2[i] + tmp;
                    tmp = val / 10; 
                    result.push_back(val % 10);
                } else if(i < num1.size()){
                    result.push_back(num1[i]);
                } else result.push_back(num2[i]);
            } 
            return result;
        } 
};
