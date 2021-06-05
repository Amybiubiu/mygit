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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return compare(root->left, root->right);
    }
    bool compare(TreeNode* t1, TreeNode* t2){
        if(!t1 && !t2)  return true;
        if(!t1 && t2)   return false;
        if(t1 && !t2)   return false;
        if(t1->val != t2->val){
            return false;
        }
        // t1 左树的遍历要和 t2 右树的遍历结果相同
        // t1 右树与 t2 左树
        return compare(t1->left, t2->right) &&
            compare(t1->right, t2->left);
    }
};