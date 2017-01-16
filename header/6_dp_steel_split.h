#include<header/base.h>

class SteelCut{
public:
    vector<float> price;
    SteelCut(vector<float> vec):price(vec){};
    float Cut(int n){
        if(n == 0){
            return 0;
        }
        float total_price(-1.0);
        for(int i = 1; i<= n; ++i){
            float current_price = price[i];
            float tmp = Cut(n - i) + current_price;
            if(tmp > total_price){
                total_price = tmp;
            }
        }
        return total_price;
    }
};


void test_cut_steel(){
    vector<float> price_range = {0, 2.3, 5, 8, 9, 14, 16};
    SteelCut s(price_range);
    cout << "the most expensive price == " << s.Cut(5) << endl;

}
