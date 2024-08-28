// Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.
#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
        list<int> l;
        void push(int val) {
            l.push_back(val);
        }
        void pop() {
            l.pop_back();
        }
        int top() {
            return l.back();
        }
        int size() {
            return l.size();
        }
        bool empty() {
            return l.empty();
        }
};
int main() {
    myStack n, m;
    int sn, sm;
    cin >> sn;
    for (int i = 0; i < sn; i++)
    {
        int val;
        cin>>val;
        n.push(val);
    }
    cin >> sm;
    for (int i = 0; i < sm; i++)
    {
        int val;
        cin>>val;
        m.push(val);
    }
    // now check if the size is same or not
    if(n.size() == m.size()) {
        bool isBreak = false;
        int nVal, mVal;
        while(!n.empty()) {
            nVal = n.top();
            mVal = m.top();
            if (nVal != mVal) {
                cout << "NO" << endl;
                isBreak = true;
                break;
            }
            n.pop();
            m.pop();
        }
        if(!isBreak) {
            cout << "YES" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}