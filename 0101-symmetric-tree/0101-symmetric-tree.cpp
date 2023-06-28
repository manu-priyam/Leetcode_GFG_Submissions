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

    bool isSym(TreeNode* l, TreeNode* r){
        //Terminating cases
        if(l==NULL && r==NULL) return true;
        if(l==NULL || r==NULL) return false;
        //Compare the values of the two nodes, if same then go to their children, otherwise return false from here itself
        if(l->val != r->val) return false;
        //same value for the two nodes, then go deeper to children
        return isSym(l->left,r->right) && isSym(l->right,r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return isSym(root->left, root->right);
    }
};