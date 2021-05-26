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
    bool isValidBST(TreeNode* root) {
        
        return validate(root, INT64_MAX, INT64_MIN);
        
    }
    
    bool validate(TreeNode* root, long max, long min)
    {
        if(root == NULL)
        {
            return true;
        }
        
        else if(max != INT64_MAX && root->val>=max || min!=INT64_MIN && root->val<=min)
        {
            return false;
        }
        
        else
        {
            return validate(root->left, root->val, min) && validate(root->right, max, root->val);
        }
    }
};