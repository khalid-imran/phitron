#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> s;
    queue<int> q;
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