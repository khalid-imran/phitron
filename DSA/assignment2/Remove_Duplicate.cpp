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
void remove_duplicates(Node *&head) {
    for (Node *i = head; i != NULL; i = i->next) {
        Node *j = i;
        while (j->next != NULL) {
            if (j->next->val == i->val) {
                Node *duplicate = j->next;
                j->next = j->next->next;
                delete duplicate;
            } else {
                j = j->next;
            }
        }
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
    int val;
    while (true)
    {
        cin>>val;
        if (val == -1) {
            break;
        }
        insert_tail(head, tail, val);
    }

    remove_duplicates(head);
    print(head);
    return 0;
}
