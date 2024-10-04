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
void search(Node *head, int x) {
    Node *tmp = head;
    int flag = 0;
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x) {
           flag = 1;
           break;
        }
        tmp = tmp->next;
        index++;
    }
    if(flag == 1) {
         cout << index << endl;
    } else {
         cout << -1 << endl;
    }
    
}
int main() {
    int tCase;
    cin >> tCase;
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
        int x;
        cin >> x;
        search(head, x);
        tCase--;
    }
    

    return 0;
}