class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

        if (!root) {
            return ans;
        }

        queue<TreeNode*> Queue;
        Queue.push(root);

        while (!Queue.empty()) {
            int n = Queue.size();
            TreeNode *temp = NULL;
            while (n--) {
                temp = Queue.front();
                Queue.pop();
                if (temp->left) {
                    Queue.push(temp->left);
                }
                if (temp->right) {
                    Queue.push(temp->right);
                }
            }
            ans.push_back(temp->val);
        }
        
        return ans;
    }
};