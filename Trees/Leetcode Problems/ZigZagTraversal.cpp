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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (!root) {
            return ans;
        }
        
        bool RightToLeft = false;
        queue<TreeNode*> Queue;
        Queue.push(root);

        while (!Queue.empty()) {
            vector<int> temp;
            int n = Queue.size();

            for (int i = 0; i < n; ++i) {
                root = Queue.front();
                if (root->left) {
                    Queue.push(root->left);
                }
                if (root->right) {
                    Queue.push(root->right);
                }
                temp.push_back(root->val);
                Queue.pop();
            }

            if (RightToLeft) {
                reverse(temp.begin(), temp.end());
            }

            ans.push_back(temp);
            RightToLeft = !RightToLeft;
        }

        return ans;
    }
};