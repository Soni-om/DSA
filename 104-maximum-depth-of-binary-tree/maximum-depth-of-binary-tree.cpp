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
    int solve(TreeNode* root){
        if(root ==NULL){
            return 0;
        }
            int leftT = solve(root->left);
            int rightT = solve(root->right);

            int maxL = 1 + max(leftT , rightT);
            return maxL;
    }
public:
    int maxDepth(TreeNode* root) {
        return solve(root);
    }
};