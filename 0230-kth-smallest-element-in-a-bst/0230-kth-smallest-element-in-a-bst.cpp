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
      vector<int> ans;
    int kthSmallest(TreeNode* root, int k) {
        traverse(root);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
    void traverse(TreeNode* r){
        if(r==NULL)
            return;
         ans.push_back(r->val);
         traverse(r->left);
        traverse(r->right);
    }
};