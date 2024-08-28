#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node *next;
        Node *prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_head(Node* &head, Node* &tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node* &tail, int val) {
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void insert_at_position(Node* &head, Node* &tail, int index, int val) {
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i<= index - 1; i++) {
        tmp = tmp->next;
    } 
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
int size(Node *head) {
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void print(Node *head, Node *tail) {
    Node *tmpHead = head;
    Node *tmpTail = tail;
    if (head != NULL) {
         cout << "L -> ";
    }
    while (tmpHead != NULL)
    {
        cout << tmpHead->val << " ";
        tmpHead = tmpHead->next;
    }
    cout << endl;
    if (tail != NULL) {
         cout << "R -> ";
    }
    while (tmpTail != NULL)
    {
        cout << tmpTail->val << " ";
        tmpTail = tmpTail->prev;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int index;
        int val;
        cin >> index >> val;
        bool isPrint = true;
        if (index == 0) {
            insert_head(head, tail, val);
        } else if (index == size(head)) {
            insert_tail(tail, val);
        } else if(index >= size(head)) {
            cout << "Invalid" << endl;
            isPrint = false;
        } else {
            insert_at_position(head, tail, index, val);
        }
        if(isPrint) {
             print(head, tail);
        }
    }
    return 0;
}