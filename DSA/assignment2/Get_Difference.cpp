#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail (Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void min_max_diff(Node *head) {
    int mn = INT_MAX;
    int mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < mn) {
            mn = tmp->val;
        }
        if (tmp->val > mx) {    
            mx = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << mx - mn << endl;
    
}
int main() {
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin>>val;
        if (val == -1) {
            break;
        }
        insert_tail(head, tail, val);
    }
    min_max_diff(head);
    return 0;
}