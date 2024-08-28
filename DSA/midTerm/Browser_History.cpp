#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        string val;
        Node *next;
        Node *prev;
    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node* &head, Node* &tail, string val) {
    Node *newNode = new Node(val);
    if(tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    string val;
    while (true)
    {
        cin>>val;
        if (val == "end") {
            break;
        }
        insert_tail(head, tail, val);
    }
    int tcase;
    cin >> tcase;
    Node *lastNode = NULL;
    cin.ignore();
    while (tcase != 0)
    {
        string command;
        string site;
        cin>>command;
        if (command == "visit") {
             cin>>site;
        }
        if(command == "visit") {
            Node* tmp = head;
            bool found = false;
            while (tmp != NULL)
            {
                if(tmp->val == site) {
                    lastNode = tmp;
                    found = true;
                    cout << tmp->val << endl;
                    break;
                }
                tmp = tmp->next;
            }
            if (!found) {
                 cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if(lastNode != NULL) {
                if (lastNode->prev != NULL) {
                    cout << lastNode->prev->val << endl;
                    lastNode = lastNode->prev;
                } else {
                    cout << "Not Available" << endl;
                }
            } else {
                cout << "Not Available" << endl;
            }

        } else if (command == "next") {
            if(lastNode != NULL) {
                if (lastNode->next != NULL) {
                    cout << lastNode->next->val << endl;
                    lastNode = lastNode->next;
                } else {
                    cout << "Not Available" << endl;
                }
            } else {
                cout << "Not Available" << endl;
            }
        }
        tcase--;
    }
    return 0;
}