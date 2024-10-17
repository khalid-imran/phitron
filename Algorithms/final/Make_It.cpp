#include <bits/stdc++.h>
using namespace std;
int dp[100005];
bool make(int n, int val) {
    if (val > n) {
        return false;
    }
    if (val == n) {
        return true;
    }
    if (dp[val] != -1) {
        return dp[val];
    }
    return dp[val] = make(n, val + 3) || make(n, val * 2);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++) {
             dp[i] = -1;
        }
        if (make(n, 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}