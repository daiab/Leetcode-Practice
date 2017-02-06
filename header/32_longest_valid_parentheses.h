#include<header/base.h>

class LongestValidParentheses{
    public:
        static int Longest(string str){
            stack<int> stk;
            int size = str.size();
            for (int i = 0; i<size; ++i) { 
                if(stk.empty() || str[i] == '(')
                    stk.push(i); 
                else if(str[i] == ')')
                    stk.pop();
                else stk.push(i);
            } 

            int last = str.size();
            int max_length = 0;
            while(!stk.empty()){
                int idx = stk.top();
                stk.pop();
                max_length = std::max(max_length, last - idx - 1);
                last = idx;
            }
            return std::max(max_length, last);
        }
};


void test_longest_valid_parentheses(){
    string s("()()(()");
    s = "((()";
    cout << "longest == " << LongestValidParentheses::Longest(s) << endl;
}
