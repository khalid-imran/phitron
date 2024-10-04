// how to take input of binary tree;
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
int main() {
    Node* root = inputTree();
    levelOrder(root);
    return 0;
}