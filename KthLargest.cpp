class Solution {
    private:
        vector<int> array;
    public:
        void inorder(Node* root) {
            if (root == NULL) {
                return;
            }
            inorder(root->left);
            array.push_back(root->data);
            inorder(root->right);
        }
    
    int kthLargest(Node *root, int K) {
        inorder(root);
        return array[array.size() - K];
    }
};