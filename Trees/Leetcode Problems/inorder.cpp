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
    void inorderTraversal(TreeNode *root, vector<int> &v1) {
        if(root == nullptr) {
            return;
        }
        inorderTraversal(root->left, this->v1);
        v1.push_back(root->val);
        inorderTraversal(root->right, this->v1);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversal(root, v1);
        return v1;
    }
};

