#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};

void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    
};

int size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

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

int main() {
    int size1 = 0;
    int size2 = 0;
    int tCase = 2;
    while (tCase != 0)
    {
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
        if(tCase == 2) {
            size1 = size(head);
        } else {
            size2 = size(head);
        }
        tCase--;
    }
    if (size1 == size2) {
        cout << "YES" << endl;
    } else {
         cout << "NO" << endl;
    }
    return 0;
}