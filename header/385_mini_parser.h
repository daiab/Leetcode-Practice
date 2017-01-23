#include<header/base.h>

class NestedInteger{
    public:
        int data;
        vector<NestedInteger> ni_vec;
        NestedInteger(){};
        NestedInteger(int i):data(i){};
        void add(const NestedInteger &ni){
            ni_vec.push_back(ni);
        }
};

class MiniParser{
    public:
        NestedInteger Parser(string str){
            if(str[0] != '[') return NestedInteger(stoi(str));

            stack<NestedInteger*> ni_stack;
            NestedInteger* ni =  nullptr;
            int num;
            for(auto c :str){
                if(c == '['){
                    ni_stack.push(new NestedInteger()); 
                    ni = ni_stack.top();
                } else if(c == ']'){
                    NestedInteger* tmp = ni_stack.top();
                    ni_stack.pop();
                    if(!ni_stack.empty()) ni_stack.top()->add(*tmp);
                } else if(c == ','){
                    ni->data = num;
                } else {
                    num = num * 10 + c - '0';
                }
            }
            return *ni; 
        }
};

