#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* inputTree() {
    int val;
    cin>>val;
    Node* root;
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }
    queue<Node*> q;
     if (root) {
        q.push(root);
    }
    while(!q.empty()) {
        Node* f = q.front();
        q.pop();
        int left, right;
        cin>>left>>right;

        Node* leftVal;
        Node* rightVal;
        if (left == -1) {
            leftVal = NULL;
        } else {
            leftVal = new Node(left);
        }
         if (right == -1) {
            rightVal = NULL;
        } else {
            rightVal = new Node(right);
        }
        f->left = leftVal;
        f->right = rightVal;

        if(f->left) {
            q.push(f->left);
        }
        if(f->right) {
            q.push(f->right);
        }
    }
    return root;
}

void levelOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()) {
        Node* f = q.front();
        q.pop();
        cout << f->val <<" ";
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
}

bool insertInBinaryTree(Node* root, int insertValue) {
    if (root == NULL) {
        root = new Node(insertValue);
    }
    if (root->val > insertValue) {
        if (root->left == NULL) {
            root->left = new Node(insertValue);
        } else {
            insertInBinaryTree(root->left, insertValue);
        }
       
    } else {
        if (root->right == NULL) {
            root->right = new Node(insertValue);
        } else {
            insertInBinaryTree(root->right, insertValue);
        }
    }
}

int main() {
    Node* root = inputTree();
    insertInBinaryTree(root, 15);
    levelOrder(root);
    return 0;
}