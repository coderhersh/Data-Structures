#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *left, *right;    
};


Node* createNode(int key) {
    Node *temp = new Node;
    temp->data = key;
    temp->left = temp->right = nullptr;
    return temp;
}

void inorder(Node *node) {
    if (node == nullptr) {
        cout << endl;
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

Node* insert(Node *node, int key);
bool find(Node *node, int key);
void remove(Node *node, int key);

int main() {
    Node *root = nullptr;
    
    root = createNode(13);
    root->left = createNode(5);
    root->right = createNode(28);
    root->right->right = createNode(29);
    root->right->left = createNode(21);
    root->left->left = createNode(2);
    
    root = insert(root, 7);
    inorder(root);
    if (find(root, 91)) {
        cout << "True\n";
    }
    
    return 0;
}

Node* insert(Node *node, int key) {
    if (node == nullptr) {
        node = createNode(key);
        cout << "node " << key << " created.";
        return node;
    }
    if(node->data > key) {
      node->left = insert(node->left, key);
    } else {
       node->right = insert(node->right, key);
    }
    return node;
}

bool find(Node *node, int key) {
    if (node == nullptr) {
        return false;
    }
    
    if (node->data == key) {
        return true;
    }

    bool status;
    
    if(node->data > key) {
        status = find(node->left, key);
    } else { 
        status = find(node->right, key);
    }

    return status;
}

void remove(Node *node, int key) {
    if (node == nullptr) {
        return;
    }
    if(node->data == key) {
        if(node->left == nullptr && node->right == nullptr) {
            // do something ???
        }
        if(node->left == nullptr || node->right == nullptr) {
            // do something ???
        }
        
        if(node->left != nullptr && node->right != nullptr) {
            // do something ???
        }
    }else if(node->data > key) {
        remove(node->left, key);
    }else {
        remove(node->right, key);
    }
}