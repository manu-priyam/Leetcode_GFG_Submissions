/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* helper(int lo, int hi, vector<int>& arr){
        if(lo>hi) return NULL;
        int mid = lo + (hi-lo)/2;
        TreeNode* node = new TreeNode(arr[mid]);
        node->left = helper(lo,mid-1,arr);
        node->right = helper(mid+1,hi,arr);
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        vector<int> nums;
        ListNode* node = head;
        while(node){
            nums.push_back(node->val);
            node = node->next;
        }
        return helper(0,nums.size()-1,nums);
        
    }
};