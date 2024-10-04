#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        set<long long int> s;
        while(n--) {
            int a;
            cin >> a;
            s.insert(a);
        }
        for (auto it : s)
        {
            cout << it << " ";
        }
        cout << endl;
        
    }
    return 0;
}