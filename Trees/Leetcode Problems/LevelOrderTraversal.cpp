#include <queue>
#include <vector>
#include <iostream>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* right, *left;
};

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    queue<TreeNode*> Queue;
    Queue.push(root);

    while (!Queue.empty()) {
        TreeNode *current = Queue.front();
        cout << current->data << " ";
        if (current->left) {
            Queue.push(current->left);
        }
        if (current->right) {
            Queue.push(current->right);
        }
        Queue.pop();
    }

    return ans;
}

int main(void) {
    
    return 0;
}