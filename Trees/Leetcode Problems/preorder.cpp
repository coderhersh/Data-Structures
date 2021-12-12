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
    void preorderTraversal(TreeNode *root, vector<int> &v1) {
        if(root == nullptr) {
            return;
        }
        v1.push_back(root->val);
        preorderTraversal(root->left, this->v1);
        preorderTraversal(root->right, this->v1);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversal(root, v1);
        return v1;
    }
};
