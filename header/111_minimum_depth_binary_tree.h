#include<header/base.h>

struct Node{
    int value;
    Node* left;
    Node* right;
};

#define INT_MAX (1 << 16)-1

class MinimumDepth{
    public:
        int Find(Node* root, int depth){
            if(!root) return depth;
            depth += root->value;
            int left_depth = INT_MAX, right_depth = INT_MAX;
            if (root->left){
                left_depth = Find(root->left, depth);
            }
            if (root->right){
                right_depth = Find(root->right, depth);
            }
            return std::min(left_depth, right_depth);
        }

        int MinimumMain(Node* root){
            return Find(root, 0);
        }

};

int dai = 22 * 12;
vector<int> in;
