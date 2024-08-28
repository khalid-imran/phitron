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
void insert_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void delete_node(Node *&head, Node *&tail, int pos) {
    if (head == NULL) return;
    if (pos == 0) {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        }
        delete deleteNode;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos && tmp->next != NULL; i++) {
        tmp = tmp->next;
    }

    if (tmp->next != NULL) {
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        if (deleteNode == tail) {
            tail = tmp;
        }
        delete deleteNode;
    }
}
void print(Node *head) {
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    
}
int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        
        int index;
        int val;
        cin >> index >> val;
        if (index == 1) {
            insert_tail(head, tail, val);
        }
        if (index == 0) {
            insert_head(head, tail, val);
        }
        if (index > 1) {
            delete_node(head, tail, val);
        }
        print(head);
    }
    

    return 0;
}
