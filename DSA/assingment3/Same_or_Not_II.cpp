#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue {
    public: 
        Node *head;
        Node *tail;
        int sz;
    myQueue() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    bool empty() {
        return sz == 0;
    }

    void push(int val) {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    int pop() {
        if (head == NULL) {
            tail = NULL;
            return -1;
        }
        int val = head->val;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;
        return val;
    }

    int front() {
        if (head == NULL) {
            return -1;
        }
        return head->val;
    }
};

class myStack {
    public:
        Node* head;
        int sz;
    myStack()
    {
        head = NULL;
        sz = 0; 
    }

    int getSize()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }

    void push(int val)
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        sz++;
    }

    void pop()
    {
        if (empty()) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        sz--;
    }

    int top()
    {
         if (empty()) {
            return -1;
        }
        return head->val;
       
    }
};
int main() {
    myStack s;
    myQueue q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    
    int maxLoop = max(n,m);
    while(maxLoop > 0) {
        int sv;
        int qv;
        if (!s.empty()) {
            sv = s.top();
            s.pop();
        }
        if (!q.empty()) {
            qv = q.front();
            q.pop();
        }
        if (sv != qv) {
            cout << "NO" << endl;
            return 0;
        }
        maxLoop--;
    }
    cout << "YES" << endl;      
    
    return 0;
}