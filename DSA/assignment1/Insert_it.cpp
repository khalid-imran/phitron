#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m; cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int idx;
    cin >> idx;
    a.insert(a.begin()+idx, b.begin(), b.end());
    for (int x: a)
    {
        cout << x << " ";
    }
    return 0;
}