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

int main() {
    vector<int> v;
    vector<int> b;
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

        Node *tmp = head;
        while (tmp != NULL)
        {
            if (tCase == 2) {
                v.push_back(tmp->val);
            } else {
                b.push_back(tmp->val);
            }
            tmp = tmp->next;
        }
        tCase--;
    }
    if (v == b) {
        cout << "YES" << endl;
    } else {
         cout << "NO" << endl;
    }
    return 0;
}