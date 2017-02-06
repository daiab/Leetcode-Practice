#include<header/base.h>

#define INT_MIN 0

class Node{
    public:
        //Node() = default;
        Node():left(NULL), right(NULL){};
        Node* left;
        Node* right;
        int value;
};

class MaximumPathSum{
    private:
        static int MaxPathLength(Node* node, int& max_sum){
            if(!node) return 0;
            int left_len = std::max(MaxPathLength(node->left, max_sum), INT_MIN);
            int right_len = std::max(MaxPathLength(node->right, max_sum), INT_MIN);
            max_sum = std::max(max_sum, left_len + right_len + node->value);
            return std::max(left_len, right_len) + node->value;
        }
    public:
        static int MaxSum(Node* node){
            if(!node) return 0;
            int max_sum = INT_MIN;
            MaxPathLength(node, max_sum);
            return max_sum;
        }
};



void test_maximum_path_sum(){
    Node root, n1, n2, n3, n4;
    root.left = &n1;
    root.right = &n2;
    n2.left = &n3;
    n2.right = &n4;
    root.value = 1;
    n1.value = 2;
    n2.value = 3;
    n3.value = 1;
    n4.value = 4;
    cout << "null == " << n4.left << endl;
    // right resutl = 10
    cout << "max path sum == " << MaximumPathSum::MaxSum(&root) << endl;
}
