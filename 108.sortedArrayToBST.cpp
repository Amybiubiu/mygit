/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return helper(nums, 0, nums.size()-1);
    }
    
    TreeNode* helper(vector<int>& nums, int left, int right){
        if(left > right)
            return NULL;
        int mid = (left+right)/2;
        TreeNode* res = new TreeNode(nums[mid]);
        res->left = helper(nums, left, mid - 1);
        res->right = helper(nums, mid + 1, right);
        return res;
    }
};
