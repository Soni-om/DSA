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
    void CreateVector(TreeNode* root, vector<int> & arr){
        if(root == NULL) return ;
        CreateVector(root->left, arr);
        arr.push_back(root->val);
        CreateVector(root->right, arr);
    }

    bool solve(vector<int>& stor, int k){
        int st = 0;
        int end = stor.size()-1;

        while(st < end){
            int sum = stor[st] + stor[end];

            if(sum == k){
                return true;
            }else if(sum < k){
                st++;
            }else{
                end--;
            }
        }
        return false;
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> stor;
        CreateVector(root, stor);

        return solve(stor, k);

    }
};