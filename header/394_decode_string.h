#include<header/base.h>

class DecodeString{
    public:
        string Decode(string encoded_str){
            stack<string> str_stack;
            stack<int> count_stack;
            string result("");
            int tmp_cnt(0);
            for(auto c :encoded_str){
                if(c >= '0' && c <= '9'){
                    tmp_cnt = tmp_cnt * 10 + c - '0';
                } else if (c == '['){
                    str_stack.push(result);
                    count_stack.push(tmp_cnt);
                    tmp_cnt = 0;
                    result = "";
                } else if (c == ']'){
                    string tmp("");
                    for (int i = 0; i < count_stack.top(); ++i) { 
                        tmp += result;
                    }
                    result = str_stack.top() + tmp;
                    count_stack.pop();
                    str_stack.pop(); 
                } else {
                    result += c;
                }
            }
            return result;
        }
};


void test_decode_string(){
    DecodeString ds;
    string str("3[ab]2[1[c]]");
    cout << "decode string == " << ds.Decode(str) << endl;
}
