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


Node* convert(int a[], int n, int l, int r) {
    if  (l > r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftRoot = convert(a, n, l, mid-1);
    Node* rightRoot = convert(a, n, mid+1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    Node* tree = convert(a, n, 0, n-1);
    levelOrder(tree);
    return 0;
}