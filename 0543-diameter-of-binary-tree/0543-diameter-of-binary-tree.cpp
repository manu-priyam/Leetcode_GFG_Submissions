/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res = 0;
    int height(TreeNode* node){
        if(node==NULL) return 0;
        int left_height = height(node->left);
        int right_height = height(node->right);
        res = max(res, (1+left_height+right_height));
        cout<<res<<" ";
        return 1+max(left_height,right_height);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int h = height(root);
        cout<<h;
        return res-1;
    }
};