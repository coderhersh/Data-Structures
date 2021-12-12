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
    vector<int> v1;
    void postorderTraversal(TreeNode *root, vector<int> &v1) {
        if(root == nullptr) {
            return;
        }
        postorderTraversal(root->left, this->v1);
        postorderTraversal(root->right, this->v1);
        v1.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorderTraversal(root, v1);
        return v1;
    }
};
