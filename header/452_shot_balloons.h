#include<header/base.h>

class ShotBalloons{
    inline int max(int& a, int& b){
        return a > b? a: b;
    }

    inline int min(int& a, int& b){
        return a > b? b: a;
    }
    public:
        int Shot(vector<pair<int, int> > balloons){
            std::sort(balloons.begin(), balloons.end());
            int count(0);
            pair<int, int> left;
            left = {0, 0};
            for(pair<int, int> right : balloons){
                if(left.first < right.first && right.first < left.second){
                    left.first = right.first;
                    left.second = min(left.second, right.second);
                }else{
                    left = right;
                    count += 1;
                }
            };

            return count;
        }
};


void test_shot_balloon() {
    vector<pair<int, int> > b = {{10,16}, {2,8}, {1,6}, {7,12}};
    ShotBalloons sb;
    cout << "need arrows number == " << sb.Shot(b) << endl;
}
