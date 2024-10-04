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

int sumWithoutLeaf(Node* root) {
     if (root == NULL || root->left == NULL && root->right == NULL) {
        return 0;
    }
    int sum = root->val;
    
    if (root->left) {
        sum += sumWithoutLeaf(root->left);
    }
    if (root->right) {
        sum += sumWithoutLeaf(root->right);
    }
    
    return sum;
}
int main() {
    Node* root = inputTree();
    int sum = sumWithoutLeaf(root);
    cout<< sum << endl;
    return 0;
}