vector<int> leftView(Node *root) {
   vector<int> ans;
   if (!root) {
       return ans;
   }
   
   queue<Node*> Queue;
   Queue.push(root);
   
   while (!Queue.empty()) {
       int n = Queue.size();
       vector<int> temp;
       
       for (int i=0; i < n; ++i) {
           root = Queue.front();
           Queue.pop();
           temp.push_back(root->data);
           
           if (root->left) {
               Queue.push(root->left);
           }
           
           if (root->right) {
               Queue.push(root->right);
           }
           
       }
       ans.push_back(temp[0]);
    }
   
   return ans;
}