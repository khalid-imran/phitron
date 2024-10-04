#include<bits/stdc++.h>
using namespace std;
int main() {
    int tCase;
    cin >> tCase;
    for (int i = 0; i < tCase; i++)
    {
        string s;
        cin >> s;
        queue<char> q;
        for (char c:s) {
             if(!q.empty()) {
                if (q.front() == '0' && c == '1') {
                    q.pop();
                } else {
                    q.push(c);
                }
            } else {
                 q.push(c);
            }
        }
    
        if(q.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } 
    return 0;
}