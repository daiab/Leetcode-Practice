#include<header/base.h>

class SortCharacters{
    public:
        string Sort(string& str){
            vector<int> freq(2 << 8, 0);
            for (auto c : str) { 
                freq[c] += 1; 
            }     
            int max = *std::max_element(freq.begin(), freq.end());
            vector<string> bucket(max + 1, "");
            for (int i = 0; i < 256 ; ++i) { 
                bucket[freq[i]] += string(freq[i], i);
            } 
            string result("");
            for(vector<string>::reverse_iterator iter = bucket.rbegin() ; iter != bucket.rend(); ++iter){
                result += *iter; }
            return result;
        } 
};

void test_sort_characters(){
    SortCharacters sc;
    string str("daianbo");
    cout << sc.Sort(str) << endl;
}
