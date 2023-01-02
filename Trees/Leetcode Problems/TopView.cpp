class Solution {
public:
    vector<int> topView(Node *root) {
        vector<int> ans;
        
        if (!root) {
            return ans;    
        }
        
        queue<pair<Node*, int>> Queue;
        map<int, int> hashmap;
        Queue.push({root, 0});
        
        while (!Queue.empty()) {
            int n = Queue.size();
            for (int i = 0; i < n; ++i) {
                root = Queue.front().first;
                int hd = Queue.front().second;
                Queue.pop();
                    
                if (hashmap.find(hd) == hashmap.end())
                    hashmap[hd] = root->data;
                
                
                if (root->left) {
                    Queue.push({root->left, hd - 1});
                }
                
                if (root->right) {
                    Queue.push({root->right, hd + 1});
                }
            }
        }
        
        map<int, int>::iterator it;
        for (it = hashmap.begin(); it != hashmap.end(); ++it) {
            ans.push_back(it->second);
        }
        
        return ans;
    }

};