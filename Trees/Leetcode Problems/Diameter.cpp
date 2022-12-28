class Solution {
private:
    int height(Node* root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        if (root == NULL) {
            return 0;
        }
        
        int LeftHeight = height(root->left);
        int RightHeight = height(root->right);
        
        int LeftDiameter = diameter(root->left);
        int RightDiamter = diameter(root->right);
        
        return max(LeftHeight + RightHeight + 1, max(LeftDiameter, RightDiamter));
    }
};